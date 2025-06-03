from setuptools import find_packages, setup

package_name = 'pkg1'

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
    maintainer='lalit',
    maintainer_email='lalitvijay9480@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "test_node = pkg1.mynode:main",
            "numpub = pkg1.numpub:main",
            "numsub = pkg1.numsub:main",
            "client = pkg1.client:main",
            "actionclient = pkg1.actionclient:main",
            "actionserver = pkg1.actionserver:main",
        ],
    },
)
