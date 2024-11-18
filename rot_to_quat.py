import numpy as np
from math import sqrt

def rot_to_quat(matrix):
	rot = matrix[:3,:3]
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
	return q


test_hom2 = np.array([[  1.,        0.,       0.,     281.4],
 [  0.,       0.  ,     1.,        0.    ],
 [  0. ,      -1. ,       0. ,       224.326],
 [   0.  ,      0.,        0.  ,      1.    ]])

print(rot_to_quat(test_hom2))
