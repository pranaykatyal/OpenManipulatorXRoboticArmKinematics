from setuptools import find_packages, setup

package_name = 'robot_omx'

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
    maintainer_email='laburstein@wpi.edu',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'joint_listener = robot_omx.forward_kin_subscriber:main',
        'inverse_server = robot_omx.inv_kin_server:main',
        'inverse_client = robot_omx.inv_kin_client:main',
        'robot = robot_omx.robot_node:main',
        'velocity_server = robot_omx.velocity_server:main'
        ],
    },
)
