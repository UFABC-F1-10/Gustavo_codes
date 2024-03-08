from setuptools import find_packages
from setuptools import setup

setup(
    name='akros2_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('akros2_msgs', 'akros2_msgs.*')),
)
