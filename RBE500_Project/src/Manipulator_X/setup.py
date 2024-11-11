from setuptools import find_packages, setup

package_name = 'Manipulator_X'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lucasb',
    maintainer_email='lucasb@todo.todo',
    description='Files for Controlling OpenManipulatorX',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'joint_listener = Manipulator_X.ros_wrapper:main',
        'inverse_server = Manipulator_X.inv_kin_server:main',
        'inverse_client = Manipulator_X.inv_kin_client:main'
        ],
    },
)
