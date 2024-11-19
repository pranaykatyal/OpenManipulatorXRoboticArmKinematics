# This library contains classes and methods to calculate Forward and Inverse Kinematics

import math
from math import cos, sin# Needed for trig functions
import numpy as np # Needed for array functions
from robot_omx import inverse_kinematics
from scipy.spatial.transform import Rotation
from geometry_msgs.msg import Pose

class Robot():
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
        quaternian = Rotation.from_matrix(transformation_matrix[:3, :3]).as_quat()
        pos = transformation_matrix[:3, 3]
        pose = Pose()
        pose.position.x = pos[0]
        pose.position.y = pos[1]
        pose.position.z = pos[2]
        pose.orientation.x = quaternian[0]
        pose.orientation.y = quaternian[1]
        pose.orientation.z = quaternian[2]
        pose.orientation.w = quaternian[3]

        return pose

        
        
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
        #print(f'The quaternions are {quaternions}')
        
        transform = np.eye(4)
        x = x_quat
        y = y_quat
        z = z_quat
        w = w_quat

        transform[:3,:3] = np.array([[2 * (w * w) + 2 * (x * x) - 1, (2 * x * y - 2 * w * z), (2 * x * z + 2 * w * y)],
                      [(2 * x * y + 2 * w * z), (2 * w * w + 2 * y * y - 1), (2 * y * z - 2 * w * x)],
                      [(2 * x * z - 2 * w * y), (2 * y * z + 2 * w * x), (2 * w * w + 2 * z * z - 1)]])
        transform[:3,3] = [x_pos, y_pos, z_pos]

        (theta_1, theta_2, theta_3, theta_4) = inverse_kinematics.get_q_values(transform)



        print (f'\n\nThe theta values are {theta_1}, {theta_2}, {theta_3}, {theta_4}')

        return [theta_1 * np.pi / 180, theta_2 * np.pi / 180, theta_3 * np.pi / 180, theta_4 * np.pi / 180]



    def calculate_A_i(self):
        # Link Lengths
        l1 = 60.25
        l2 = 130.2306  # calculated from given lengths
        l3 = 124.0
        l4 = 133.4

        phi = np.rad2deg(np.arctan2(3, 16))  # 10.62 degrees
        np.set_printoptions(precision=4, suppress=True)

        # Extracting to save space in below equations:
        q1 = np.rad2deg(self.q1)
        q2 = np.rad2deg(self.q2)
        q3 = np.rad2deg(self.q3)
        q4 = np.rad2deg(self.q4)
        
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


def main():
    robot = Robot()
    robot.forward_kinematics([0.0, 0.0, 0.0, 0.0])