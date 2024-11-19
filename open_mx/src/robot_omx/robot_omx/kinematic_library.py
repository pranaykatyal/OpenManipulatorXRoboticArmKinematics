import numpy as np
import math
from numpy import sin, cos, arctan2
from scipy.spatial.transform import Rotation 
from geometry_msgs.msg import Pose 

#Link Lengths
l1 = 96.326
d1 = 128
d2 = 24
l2 = 130.2306 # calculated from given lengths
l3 = 124.0
l4 = 133.4
phi = np.rad2deg(arctan2(3,16)) # 10.62 degrees

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
                alpha = np.deg2rad(params[2])
                theta = np.deg2rad(params[3])

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
        DH_table = np.array([[0, l1, 90, q1],
                     [l2, 0, 0, 90 + phi + q2],
                     [l3, 0, 0, 90 - phi + q3],
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
	return [theta1/math.pi*180, theta2/math.pi*180, theta3/math.pi*180, theta4/math.pi*180]

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

# q values 180 0 45 45
test_hom2 = np.array([[  1.,       0.  ,     0.,     245.0812],
 [ -0.   ,    0.  ,     1.,      -0.    ],
 [  0.    ,  -1. ,      0. ,    136.6448],
 [  0.     ,  0.,       0.  ,     1.    ]])

print(get_q_values(test_hom2))
print(get_q_values(test_hom1))
print(get_q_values(zero_hom))'''

def main():
    robot = Robot()
    robot.forward_kinematics([0.0, 0.0, 0.0, 0.0])