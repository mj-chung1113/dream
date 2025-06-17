import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from autoware_control_msgs.msg import Control

PLATFORM_MAX_LINEAR_VELOCITY = 1.49  # m/s
PLATFORM_MIN_LINEAR_VELOCITY = -0.5  # m/s
PLATFORM_MAX_STEERING_ANGLE = 0.443  # radians
PLATFORM_MIN_STEERING_ANGLE = -0.443  # radians 

AW_MAX_LINEAR_VELOCITY = 15.0  # m/s
AW_MAX_STEERING_ANGLE = 0.6    # radians

class ControlCmdToCmdVelBridge(Node):
    def __init__(self):
        super().__init__('control_cmd_to_cmd_vel_bridge')

        self.create_subscription(Control, '/control/command/control_cmd', self.control_cmd_callback, 10)
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        self.get_logger().info("control_cmd_to_cmd_vel_bridge node started.")
    
    def control_cmd_callback(self, msg: Control):
        twist = Twist()

        raw_linear = msg.longitudinal.velocity
        raw_steering = msg.lateral.steering_tire_angle

        # 선속도 매핑 (비례 스케일링)
        linear_scale = PLATFORM_MAX_LINEAR_VELOCITY / AW_MAX_LINEAR_VELOCITY
        linear = raw_linear * linear_scale

        # 조향각 매핑 (비례 스케일링)
        steering_scale = PLATFORM_MAX_STEERING_ANGLE / AW_MAX_STEERING_ANGLE
        angular = raw_steering * steering_scale

        # 클리핑
        linear = max(min(linear, PLATFORM_MAX_LINEAR_VELOCITY), PLATFORM_MIN_LINEAR_VELOCITY)
        angular = max(min(angular, PLATFORM_MAX_STEERING_ANGLE), PLATFORM_MIN_STEERING_ANGLE)

        twist.linear.x = float(linear)
        twist.angular.z = float(angular)

        self.cmd_vel_pub.publish(twist)
        self.get_logger().debug(f"Published cmd_vel: linear.x={twist.linear.x}, angular.z={twist.angular.z}")
  
    
def main(args=None):
    rclpy.init(args=args)
    node = ControlCmdToCmdVelBridge()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
