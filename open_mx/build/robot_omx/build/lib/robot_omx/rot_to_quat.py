import numpy as np
from math import sqrt
from geometry_msgs.msg import Pose
def rot_to_quat(matrix):
	rot = matrix[:3,:3]
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




zero_hom = [[  1.,     -0.,      0.,   281.4 ],
 [   0.,     -0.,     1.,      0.  ],
 [   0.,     -1.,      0.,    224.326],
 [   0.,      0.,      0.,      1.  ]]

# q values = 30 -10 20 20
test_hom1 = [[  0.75,    -0.433,   -0.5,    207.0254],
 [  0.433,   -0.25    , 0.866  ,119.5262],
 [ -0.5   ,  -0.866  ,  0.     ,138.3166],
 [  0.     ,  0.    ,   0.     ,  1.    ]]

# q values 180 0 45 45
test_hom2 = [[  -0.,        1.,       -0.,     -111.6812],
 [  -0.,       -0.  ,     -1.,        0.    ],
 [  -1. ,      -0. ,       0. ,       3.2448],
 [   0.  ,      0.,        0.  ,      1.    ]]

#print(rot_to_quat(zero_hom))
