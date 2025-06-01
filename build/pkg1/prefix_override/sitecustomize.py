import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lalit/Documents/dev/scratchpad/ros-playground/shankar_bot_ws/install/pkg1'
