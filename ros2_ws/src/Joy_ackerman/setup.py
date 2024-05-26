from setuptools import setup

package_name = 'joy_ackerman'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='disney',
    maintainer_email='gustavo.rio@aluno.ufabc.edu.br',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'joy_ackerman = joy_ackerman.joy_ackerman:main',
        ],
    },
)
