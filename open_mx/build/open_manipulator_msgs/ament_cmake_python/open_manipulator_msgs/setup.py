from setuptools import find_packages
from setuptools import setup

setup(
    name='open_manipulator_msgs',
    version='2.2.0',
    packages=find_packages(
        include=('open_manipulator_msgs', 'open_manipulator_msgs.*')),
)
