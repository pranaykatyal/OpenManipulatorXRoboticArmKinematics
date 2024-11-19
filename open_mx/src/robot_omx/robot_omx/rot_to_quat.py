import numpy as np
from math import sqrt
from geometry_msgs.msg import Pose
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

	trace = m00 + m11 + m22;
	if trace > 0.0:
		k = 0.5 / sqrt(1.0 + trace);
		q = ( k * (m12 - m21), k * (m20 - m02), k * (m01 - m10), 0.25 / k );

	elif m00 > m11 and m00 > m22:
		k = 0.5 / sqrt(1.0 + m00 - m11 - m22);
		q = ( 0.25 / k, k * (m10 + m01), k * (m20 + m02), k * (m12 - m21) );

	elif m11 > m22:
		k = 0.5 / sqrt(1.0 + m11 - m00 - m22);
		q = ( k * (m10 + m01), 0.25 / k, k * (m21 + m12), k * (m20 - m02) );

	else:

		k = 0.5 / sqrt(1.0 + m22 - m00 - m11);
		q = ( k * (m20 + m02), k * (m21 + m12), 0.25 / k, k * (m01 - m10) );
	pose.orientation.y = q[0]
	pose.orientation.x = q[1]
	pose.orientation.w = q[2]
	pose.orientation.z = q[3]

	return pose


# q values = 0 0 0 0
zero_hom = [[  -1.,     -0.,      0.,   -281.4 ],
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

        transform = np.eye(4)
        transform[:3,:3] = np.array([[2*(x_quat**2 + y_quat**2) - 1, 2*(y_quat*z_quat - x_quat*w_quat), 2*(y_quat*w_quat + x_quat*z_quat)],
        [2*(y_quat*z_quat + x_quat*w_quat), 2*(x_quat**2 + z_quat**2) - 1, 2*(z_quat*w_quat - x_quat*y_quat)],
        [2*(y_quat*w_quat - x_quat*z_quat), 2*(z_quat*w_quat + x_quat*y_quat), 2*(x_quat**2 + w_quat**2) - 1]])
        
        return transform


print(quat_to_rot(rot_to_quat(zero_hom)))
print(quat_to_rot(rot_to_quat(test_hom1)))
print(quat_to_rot(rot_to_quat(test_hom2)))
