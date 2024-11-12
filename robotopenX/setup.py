from setuptools import find_packages, setup

package_name = 'robotopenX'

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
    maintainer='pranaykatyal',
    maintainer_email='pkatyal@wpi.edu',
    description='RobotArmOpenX',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'listener = robotopenX.subscriber_member_function:main',
        ],
    },
)
