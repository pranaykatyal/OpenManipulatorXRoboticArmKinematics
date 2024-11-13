import numpy as np
from numpy import sin, cos, arctan2

#Link Lengths
l1 = 96.326
l2 = 130.2306 # calculated from given lengths
l3 = 124.0
l4 = 133.4

#Joint angles
q1 = q2 = q3 = q4 = np.degrees(0)

phi = np.rad2deg(arctan2(3,16)) # 10.62 degrees

#converting to radians 
q1_rad = np.deg2rad(q1)
q2_rad = np.deg2rad(q2)
q3_rad = np.deg2rad(q3)
q4_rad = np.deg2rad(q4)

# DH Parameters 
DH_table = np.array([[0, l1, 90, q1_rad],
                     [l2, 0, 0, 90 + phi + q2_rad],
                     [l3, 0, 0, 90 - phi + q3_rad],
                     [l4, 0 , 0 ,q4_rad]])

print(DH_table)
np.set_printoptions(precision=4, suppress=True)
# Transformation matrices : 


A1 = np.array([[cos(np.deg2rad(q1)), -sin(np.deg2rad(q1))*cos(np.pi/2), sin(np.deg2rad(q1))*sin(np.pi/2), 0*cos(np.deg2rad(q1))],
    [sin(np.deg2rad(q1)), cos(np.deg2rad(q1))*cos(np.pi/2), -cos(np.deg2rad(q1))*sin(np.pi/2), 0*sin(np.deg2rad(q1))],
    [0, sin(np.pi/2), cos(np.pi/2), l1 ],
    [0, 0, 0, 1]])


A2 = np.array([[cos(np.deg2rad(90 + phi + q2)), -sin(np.deg2rad(90 + phi + q2))*cos(0), sin(np.deg2rad(90 + phi + q2))*sin(0), l2*cos(np.deg2rad(90 + phi + q2))],
    [sin(np.deg2rad(90 + phi + q2)), cos(np.deg2rad(90 + phi + q2))*cos(0), -cos(np.deg2rad(90 + phi + q2))*sin(0), l2*sin(np.deg2rad(90 + phi + q2))],
    [0, sin(0), cos(0), 0 ],
    [0, 0, 0, 1]])

A3 = np.array([[cos(np.deg2rad(90 - phi + q3)), -sin(np.deg2rad(90 - phi + q3))*cos(0), sin(np.deg2rad(90 - phi + q3))*sin(0), l3*cos(np.deg2rad(90 - phi + q3))],
    [sin(np.deg2rad(90 - phi + q3)), cos(np.deg2rad(90 - phi + q3))*cos(0), -cos(np.deg2rad(90 - phi + q3))*sin(0), l3*sin(np.deg2rad(90 - phi + q3))],
    [0, sin(0), cos(0), 0 ],
    [0, 0, 0, 1]])

A4 = np.array([[cos(np.deg2rad(q4)), -sin(np.deg2rad(q4))*cos(0), sin(np.deg2rad(q4))*sin(0), l4*cos(np.deg2rad(q4))],
    [sin(np.deg2rad(q4)), cos(np.deg2rad(q4))*cos(0), -cos(np.deg2rad(q4))*sin(0), l4*sin(np.deg2rad(q4))],
    [0, sin(0), cos(0), 0 ],
    [0, 0, 0, 1]])

#Homogenous Transformations : 
H10 = A1
H20 = np.matmul(A1,A2)
H30 = np.matmul(H20,A3)
H40 = np.matmul(H30,A4) #pose  

#print(H10)
#print(H20)
#print(H30)
print(H40)




