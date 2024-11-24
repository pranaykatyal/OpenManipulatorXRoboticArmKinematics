import numpy as np
import math
from numpy import sin, cos, arctan2
from scipy.spatial.transform import Rotation
from geometry_msgs.msg import Pose, Twist

#Link Lengths
l1 = 96.326
d1 = 128
d2 = 24
l2 = 130.2306 # calculated from given lengths
l3 = 124.0
l4 = 133.4
phi = arctan2(3,16) # 10.62 degrees

#----------Forward Kinematics------------
def get_transformation_mat(dh_table, reference, target):
        """Converts all rows of a given DH table to homogenous
        matrices and returns the transformation matrix of a given
        target frame in relation to a given reference frame."""

        hom_matrices = []

        for params in dh_table:
                # Extract DH params in order of a, d, alpha, theta
                a = params[0]
                d = params[1]
                alpha = params[2]
                theta = params[3]

                # Form the homogenous matrix
                this_mat = np.array([[cos(theta), -sin(theta)*cos(alpha), sin(theta)*sin(alpha), a*cos(theta)],
                                [sin(theta), cos(theta)*cos(alpha), -cos(theta)*sin(alpha), a*sin(theta)],
                                [0, sin(alpha), cos(alpha), d],
                                [0, 0, 0, 1]])
                hom_matrices.append(this_mat)

	# Multiply through the desired range
        trans_mat = hom_matrices[reference]
        for i in range(reference+1, target+1):
                trans_mat = np.matmul(trans_mat, hom_matrices[i])

        return trans_mat

def get_forward_kinematics(q1, q2, q3, q4):
        # DH Parameters       a   d  alpha theta
        DH_table = np.array([[0, l1, math.pi/2, q1],
                     [l2, 0, 0, math.pi/2 + phi + q2],
                     [l3, 0, 0, math.pi/2 - phi + q3],
                     [l4, 0 , 0 ,q4]])
        return get_transformation_mat(DH_table, 0, 3)

#print(get_forward_kinematics(0,0,0,0))

#-----------Inverse Kinematics---------------
def get_q_values(transform):
	# Define constant values
	l0 = 36.076
	l1 = 96.326-l0
	l2 = 130.23056
	l3 = 124
	l4 = 133.4
	psi = math.atan2(24,128)

	o43 = [-l4, 0, 0, 1]

	o03 = np.matmul(transform, o43)
	x3 = o03[0]
	y3 = o03[1]
	z3 = o03[2]


	r = math.sqrt(x3**2+y3**2)
	s = z3 - (l0+l1)
	D = (r**2 + s**2 - l2**2 - l3**2)/(2*l2*l3)
	R = math.sqrt(transform[0][3]**2+transform[1][3]**2)
	S = transform[2][3]-(l0+l1)
	phi = math.atan2(s-S, R-r)


	theta1 = math.atan2(-transform[1][3], -transform[0][3])
	theta3 = math.atan2(math.sqrt(1-D**2), D)
	theta2 = math.atan2(r,s) + math.atan2(l2 +l3*math.cos(theta3),l3*math.sin(theta3))


	theta2 = -math.pi/2 + theta2 - psi
	theta3 = theta3 -(math.pi/2 - psi)
	theta4 = phi - theta2 - theta3
	return [theta1, theta2, theta3, theta4]

#--------------Quaternion Conversions-------------
def pose2rot(pose):
    # Converting pose into a Homogonous transformation matrix:
    x_pos = pose.position.x
    y_pos = pose.position.y
    z_pos = pose.position.z
    x_quat = pose.orientation.x # Extracting the quaternions
    y_quat = pose.orientation.y
    z_quat = pose.orientation.z
    w_quat = pose.orientation.w
    quaternions = [x_quat, y_quat, z_quat, w_quat]
    print(f'The quaternions are {quaternions}')
    
    rot = np.eye(4)
    x = x_quat
    y = y_quat
    z = z_quat
    w = w_quat

    rot[:3,:3] = np.array([[2 * (w * w) + 2 * (x * x) - 1, (2 * x * y - 2 * w * z), (2 * x * z + 2 * w * y)],
                    [(2 * x * y + 2 * w * z), (2 * w * w + 2 * y * y - 1), (2 * y * z - 2 * w * x)],
                    [(2 * x * z - 2 * w * y), (2 * y * z + 2 * w * x), (2 * w * w + 2 * z * z - 1)]])
    rot[:3,3] = [x_pos, y_pos, z_pos]
    return rot

def rot2pose(rot):
    quaternian = Rotation.from_matrix(rot[:3, :3]).as_quat()
    pos = rot[:3, 3]
    pose = Pose()
    pose.position.x = pos[0]
    pose.position.y = pos[1]
    pose.position.z = pos[2]
    pose.orientation.x = quaternian[0]
    pose.orientation.y = quaternian[1]
    pose.orientation.z = quaternian[2]
    pose.orientation.w = quaternian[3]

    return pose

#-----------Velocity Kinematics---------------
def calc_twist(q1, q2, q3, q4, q_1_dot, q_2_dot, q_3_dot, q_4_dot):
    # DH Parameters       a   d  alpha theta
    DH_table = np.array([[0, l1, math.pi / 2, q1],
                         [l2, 0, 0, math.pi / 2 + phi + q2],
                         [l3, 0, 0, math.pi / 2 - phi + q3],
                         [l4, 0, 0, q4]])

    # First finding relevant transformation matrices:
    H_1_0 = get_transformation_mat(DH_table, 0, 0)
    H_2_0 = get_transformation_mat(DH_table, 0, 1)
    H_3_0 = get_transformation_mat(DH_table, 0, 2)
    H_4_0 = get_transformation_mat(DH_table, 0, 3)

    # Calculating intermediate variables by extracting data from the transformation matrices above:
    z_0 = [0, 0, 1]  # by definitions
    z_1 = H_1_0[0:3, 2]
    z_2 = H_2_0[0:3, 2]
    z_3 = H_3_0[0:3, 2]
    o_1 = H_1_0[0:3, 3]
    o_2 = H_2_0[0:3, 3]
    o_3 = H_3_0[0:3, 3]
    o_4 = H_4_0[0:3, 3]

    # Calculating elements of jacobain matrix
    j_v_1 = np.cross(z_0, o_4)
    j_v_2 = np.cross(z_1, o_4 - o_1)
    j_v_3 = np.cross(z_2, o_4 - o_2)
    j_v_4 = np.cross(z_3, o_4 - o_3)
    j_w_1 = z_0
    j_w_2 = z_1
    j_w_3 = z_2
    j_w_4 = z_3

    # Combingin above elements to form jacobian matrix:
    j_v = np.column_stack((j_v_1, j_v_2, j_v_3, j_v_4))
    j_w = np.column_stack((j_w_1, j_w_2, j_w_3, j_w_4))

    # Calculating twist from jacobians:
    joint_velocities = [q_1_dot, q_2_dot, q_3_dot, q_4_dot]
    linear_velocities = j_v.dot(joint_velocities)
    angular_velocities = j_w.dot(joint_velocities)
    twist = Twist()
    twist.linear.x = linear_velocities[0]
    twist.linear.y = linear_velocities[1]
    twist.linear.z = linear_velocities[2]
    twist.angular.x = angular_velocities[0]
    twist.angular.y = angular_velocities[1]
    twist.angular.z = angular_velocities[2]

    return twist

# q values = 0 0 0 0
'''zero_hom = [[  -1.,     -0.,      0.,   -281.4 ],
 [   0.,     -0.,     -1.,      0.  ],
 [   0.,     -1.,      0.,    224.326],
 [   0.,      0.,      0.,      1.  ]]

# q values = 30 -10 20 -20
test_hom1 = [[  -0.8529,   -0.1504,    0.5,    -220.7481],
 [  -0.4924,   -0.0868,   -0.866,  -127.449 ],
 [   0.1736 ,  -0.9848 ,   0.    ,  228.1813],
 [   0.      ,  0.      ,  0.     ,   1.    ]]

# q values 180 0 45 -45
test_hom2 = np.array([[  1.,       0.  ,     0.,     245.0812],
 [ -0.   ,    0.  ,     1.,      -0.    ],
 [  0.    ,  -1. ,      0. ,    136.6448],
 [  0.     ,  0.,       0.  ,     1.    ]])

print(get_q_values(test_hom2))
print(get_q_values(test_hom1))
print(get_q_values(zero_hom))'''

#pose = rot2pose(get_forward_kinematics(np.deg2rad(-45), np.deg2rad(0), np.deg2rad(-30), np.deg2rad(45)))
#print(pose)
#print([pose.position.x, pose.position.y, pose.position.z, pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w])
#print(get_q_values(get_forward_kinematics(np.deg2rad(-45), np.deg2rad(0), np.deg2rad(-30), np.deg2rad(45))))

print(get_forward_kinematics(0.52,0,0,math.pi/2))
print(calc_twist(0.52,0,0,math.pi/2, 2, 3, 4, 5))
