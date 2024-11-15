# This library contains classes and methods to calculate Forward and Inverse Kinematics

import math
from math import cos, sin# Needed for trig functions
import numpy as np # Needed for array functions


class Robot:
    def __init__(self):
        return


    def forward_kinematics(self, joint_parameters):
        # Initializing joint parameters:
        self.q1 = joint_parameters[0]
        self.q2 = joint_parameters[1]
        self.q3 = joint_parameters[2]
        self.q4 = joint_parameters[3]
        
        # Performing Forward Kinematic Calculations by multiplying homgenous transformation matrices:
        (A1, A2, A3, A4) = self.calculate_A_i() #First Calculating Intermediate Homogenous Transformation Matrices
        transformation_matrix = np.matmul(A1, np.matmul(A2,np.matmul(A3, A4))) # A1*A2*A3*A4
        return transformation_matrix
        
        
    def inverse_kinematics(self, pose):
        self.desired_pose = pose

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
    	[2*(y_quat*z_quat + x_quat*w_quat), 2*(x_quat**2 + z_quat**2) - 1, 2*(z_quat*w_quat - z_quat*w_quat - x_quat*y_quat)],
    	[2*(y_quat*w_quat - x_quat*z_quat), 2*(z_quat*w_quat + x_quat*y_quat), 2*(x_quat**2 + w_quat**2) - 1]])
        transform[:3,3] = [x_pos, y_pos, z_pos]
    	
        #rotation = scipy.spatial.transform.Rotation.from_quat(quaternions) # Using a library to convert the quaternions into a 3x3
        print(f'TEST: The rotation is {transform}')

        # Define constant values
        l0 = 36.076
        l1 = 96.326 - l0
        l2 = 130.23056
        l3 = 124
        l4 = 133.4
        psi = math.atan2(24, 128)

        o43 = [-l4, 0, 0, 1]

        o03 = np.matmul(transform, o43)
        x3 = o03[0]
        y3 = o03[1]
        z3 = o03[2]

        r = math.sqrt(x3 ** 2 + y3 ** 2)
        s = z3 - (l0 + l1)
        D = (r ** 2 + s ** 2 - l2 ** 2 - l3 ** 2) / (2 * l2 * l3)
        R = math.sqrt(transform[0][3] ** 2 + transform[1][3] ** 2)
        S = transform[2][3] - (l0 + l1)
        phi = math.atan2(s - S, R - r)

        theta1 = math.atan2(transform[1][3], transform[0][3])
        theta3 = math.atan2(math.sqrt(1 - D ** 2), D)
        theta2 = math.atan2(r, s) + math.atan2(l2 + l3 * math.cos(theta3), l3 * math.sin(theta3))

        theta2 = -math.pi / 2 + theta2 - psi
        theta3 = theta3 - (math.pi / 2 - psi)
        theta4 = phi - theta2 - theta3
        return [theta1 / math.pi * 180, theta2 / math.pi * 180, theta3 / math.pi * 180, theta4 / math.pi * 180]


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
