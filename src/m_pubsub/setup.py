from setuptools import setup

package_name = 'm_pubsub'

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
            'mp = m_pubsub.mpub:main',
            'ms = m_pubsub.msub:main',
            'mp2 = m_pubsub.m_pub2:main',
            'tms = m_pubsub.tm_sub:main',
            'tp = m_pubsub.t_pub:main',
            'mt = m_pubsub.mtime:main'
        ],
    },
)
