from setuptools import find_packages, setup

package_name = "nidar_mission"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        (
            "share/ament_index/resource_index/packages",
            ["resource/" + package_name],
        ),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    description="NIDAR RescueSwarm mission manager",
    license="Apache-2.0",
    entry_points={
        "console_scripts": [
            "mission_manager = nidar_mission.mission_manager:main",
        ],
    },
)
