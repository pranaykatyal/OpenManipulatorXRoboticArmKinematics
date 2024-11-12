from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_messages',
    version='0.0.0',
    packages=find_packages(
        include=('custom_messages', 'custom_messages.*')),
)
