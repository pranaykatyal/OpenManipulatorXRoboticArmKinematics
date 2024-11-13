import numpy as np
from numpy import sin, cos, arctan2

#Link Lengths
l1 = 96.326
d1 = 128
d2 = 24
l2 = 130.2306 # calculated from given lengths
l3 = 124.0
l4 = 133.4

#Joint angles
q1 = 0
q2 = 0
q3 = 0
q4 = 0

phi = np.rad2deg(arctan2(3,16)) # 10.62 degrees

#converting to radians 
q1_rad = np.deg2rad(q1)
q2_rad = np.deg2rad(q2)
q3_rad = np.deg2rad(q3)
q4_rad = np.deg2rad(q4)

# DH Parameters       a   d  alpha theta
DH_table = np.array([[0, l1, -90, q1],
                     [l2, 0, 0, -90 + phi + q2],
                     [l3, 0, 0, 90 - phi + q3],
                     [l4, 0 , 0 ,q4]])

print(DH_table)
np.set_printoptions(precision=4, suppress=True)
# Transformation matrices : 

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
                print(this_mat)
                hom_matrices.append(this_mat)

	# Multiply through the desired range
        trans_mat = hom_matrices[reference]
        for i in range(reference+1, target+1):
                trans_mat = np.matmul(trans_mat, hom_matrices[i])

        return trans_mat

print(get_transformation_mat(DH_table, 0, 3))
