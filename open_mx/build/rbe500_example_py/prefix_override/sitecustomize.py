import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lucasb/OpenManipulatorXRoboticArmKinematics/open_mx/install/rbe500_example_py'
