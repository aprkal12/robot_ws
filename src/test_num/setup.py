from setuptools import setup

package_name = 'test_num'

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
    maintainer='python',
    maintainer_email='aprkal12@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mss1 = test_num.test_service_ser1:main',
            'msc1 = test_num.test_service_client:main',
            'msc2 = test_num.test_service_client2:main',
            'fs = test_num.fibonacci_action_server:main'
        ],
    },
)
