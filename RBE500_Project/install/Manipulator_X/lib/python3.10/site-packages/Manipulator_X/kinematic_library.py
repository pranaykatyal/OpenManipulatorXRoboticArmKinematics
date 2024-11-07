# This library contains classes and methods to calculate Forward and Inverse Kinematics

from math import cos, sin# Needed for trig functions
import numpy as np # Needed for array functions


class Robot:
    def __init__(self, joint_parameters):
        # Initializing the robot and assigning it joint parameters:
        self.q1 = joint_parameters[0]
        self.q2 = joint_parameters[1]
        self.q3 = joint_parameters[2]
        self.q4 = joint_parameters[3]
        return


    def forward_kinematics(self):
        (A1, A2, A3, A4) = self.calculate_A_i() #First Calculating Intermediate Homogenous Transformation Matrices:
        transformation_matrix = np.matmul(A1, np.matmul(A2,np.matmul(A3, A4))) # A1*A2*A3*A4
        return transformation_matrix


    def calculate_A_i(self):
        # Link Lengths
        l1 = 60.25
        l2 = 130.2306  # calculated from given lengths
        l3 = 124.0
        l4 = 133.4

        phi = np.rad2deg(np.arctan2(3, 16))  # 10.62 degrees
        np.set_printoptions(precision=4, suppress=True)

        # Extracting to save space in below equations:
        q1 = self.q1
        q2 = self.q2
        q3 = self.q3
        q4 = self.q4

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
