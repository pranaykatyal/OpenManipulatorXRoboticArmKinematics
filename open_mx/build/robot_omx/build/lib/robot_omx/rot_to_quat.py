import numpy as np
from math import sqrt, cos, sin 
from geometry_msgs.msg import Pose
from scipy.spatial.transform import Rotation

def rot_to_quat(matrix):
	rot = np.array(matrix)[:3,:3]
	pose = Pose()
	pose.position.x = matrix[0][3]
	pose.position.y = matrix[1][3]
	pose.position.z = matrix[2][3]
	m00 = rot[0][0]
	m01 = rot[0][1]
	m02 = rot[0][2]
	m10 = rot[1][0]
	m20 = rot[2][0]
	m10 = rot[1][0]
	m11 = rot[1][1]
	m12 = rot[1][2]
	m20 = rot[2][0]
	m21 = rot[2][1]
	m22 = rot[2][2]

	if (m22 < 0):

		if (m00 > m11):

			t = 1 + m00 - m11 - m22
			q = [ t, m01+m10, m20+m02, m12-m21 ]

		else:

			t = 1 - m00 + m11 - m22
			q =  [m01+m10, t, m12+m21, m20-m02 ]

	else:

		if (m00 < -m11):

			t = 1 - m00 - m11 + m22
			q = [m20+m02, m12+m21, t, m01-m10]

		else:

			t = 1 + m00 + m11 + m22
			q = [m12-m21, m20-m02, m01-m10, t]
	for i in range(4):
		q[i] *= 0.5 / sqrt(t)

	pose.orientation.x = q[0]
	pose.orientation.y = q[1]
	pose.orientation.z = q[2]
	pose.orientation.w = q[3]

	return pose

def rotation_from_hom(rot):
	return rot[:3, :3]




# q values = 0 0 0 0
zero_hom = np.array([[  -1.,     -0.,      0.,   -281.4 ],
 [   0.,     -0.,     -1.,      0.  ],
 [   0.,     -1.,      0.,    224.326],
 [   0.,      0.,      0.,      1.  ]])

# q values = 30 -10 20 -20
test_hom1 = np.array([[  -0.8529,   -0.1504,    0.5,    -220.7481],
 [  -0.4924,   -0.0868,   -0.866,  -127.449 ],
 [   0.1736 ,  -0.9848 ,   0.    ,  228.1813],
 [   0.      ,  0.      ,  0.     ,   1.    ]])

# q values 180 0 45 45
test_hom2 = np.array([[  1.,       0.  ,     0.,     245.0812],
 [ -0.   ,    0.  ,     1.,      -0.    ],
 [  0.    ,  -1. ,      0. ,    136.6448],
 [  0.     ,  0.,       0.  ,     1.    ]])

def quat_to_rot(pose):
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

        transform = np.eye(4)
        x = x_quat
        y = y_quat
        z = z_quat
        w = w_quat

        transform[:3,:3] = np.array([[2 * (w * w) + 2 * (x * x) - 1, (2 * x * y - 2 * w * z), (2 * x * z + 2 * w * y)],
                      [(2 * x * y + 2 * w * z), (2 * w * w + 2 * y * y - 1), (2 * y * z - 2 * w * x)],
                      [(2 * x * z - 2 * w * y), (2 * y * z + 2 * w * x), (2 * w * w + 2 * z * z - 1)]])
        transform[:3,3] = [x_pos, y_pos, z_pos]
        
        return transform

def calculate_A_i(q1, q2, q3, q4):
        # Link Lengths
        l1 = 96.326
        l2 = 130.2306  # calculated from given lengths
        l3 = 124.0
        l4 = 133.4

        phi = np.rad2deg(np.arctan2(3, 16))  # 10.62 degrees
        np.set_printoptions(precision=4, suppress=True)

        # Extracting to save space in below equations:
        q1 = np.rad2deg(q1)
        q2 = np.rad2deg(q2)
        q3 = np.rad2deg(q3)
        q4 = np.rad2deg(q4)
        
        # Equations below were worked out on paper:
        A_1 = np.array([[cos(np.deg2rad(q1)), -sin(np.deg2rad(q1)) * cos(np.pi / 2),
                        sin(np.deg2rad(q1)) * sin(np.pi / 2), 0 * cos(np.deg2rad(q1))],
                       [sin(np.deg2rad(q1)), cos(np.deg2rad(q1)) * cos(np.pi / 2),
                        -cos(np.deg2rad(q1)) * sin(np.pi / 2), 0 * sin(np.deg2rad(q1))],
                       [0, sin(np.pi / 2), cos(np.pi / 2), l1],
                       [0, 0, 0, 1]])

        A_2 = np.array([[cos(np.deg2rad(90 + phi + q2)), -sin(np.deg2rad(90 + phi + q2)) * cos(0),
                        sin(np.deg2rad(90 + phi + q2)) * sin(0), l2 * cos(np.deg2rad(90 + phi + q2))],
                       [sin(np.deg2rad(90 + phi + q2)), cos(np.deg2rad(90 + phi + q2)) * cos(0),
                        -cos(np.deg2rad(90 + phi + q2)) * sin(0), l2 * sin(np.deg2rad(90 + phi + q2))],
                       [0, sin(0), cos(0), 0],
                       [0, 0, 0, 1]])

        A_3 = np.array([[cos(np.deg2rad(90 - phi + q3)), -sin(np.deg2rad(90 - phi + q3)) * cos(0),
                        sin(np.deg2rad(90 - phi + q3)) * sin(0), l3 * cos(np.deg2rad(90 - phi + q3))],
                       [sin(np.deg2rad(90 - phi + q3)), cos(np.deg2rad(90 - phi + q3)) * cos(0),
                        -cos(np.deg2rad(90 - phi + q3)) * sin(0), l3 * sin(np.deg2rad(90 - phi + q3))],
                       [0, sin(0), cos(0), 0],
                       [0, 0, 0, 1]])

        A_4 = np.array([[cos(np.deg2rad(q4)), -sin(np.deg2rad(q4)) * cos(0), sin(np.deg2rad(q4)) * sin(0),
                        l4 * cos(np.deg2rad(q4))],
                       [sin(np.deg2rad(q4)), cos(np.deg2rad(q4)) * cos(0), -cos(np.deg2rad(q4)) * sin(0),
                        l4 * sin(np.deg2rad(q4))],
                       [0, sin(0), cos(0), 0],
                       [0, 0, 0, 1]])
                        
        return A_1, A_2, A_3, A_4

print(calculate_A_i(0,0,0,0))
print(Rotation.from_matrix(zero_hom[:3, :3]).as_quat())
print(Rotation.from_matrix(test_hom1[:3, :3]).as_quat())
print(Rotation.from_matrix(test_hom2[:3, :3]).as_quat())
