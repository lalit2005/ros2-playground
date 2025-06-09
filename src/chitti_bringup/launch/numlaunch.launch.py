from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description() :
    ld = LaunchDescription()
    numpub = Node(
        package="pkg1",
        executable="numpub"
    )
    numsub = Node(
        package="pkg1",
        executable="numsub"
    )
    ld.add_action(numpub)
    ld.add_action(numsub)
    return ld;
