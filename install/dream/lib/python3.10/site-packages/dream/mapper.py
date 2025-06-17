import rclpy 
from rclpy.node import Node
from autoware_control_msgs.msg import Control 

class Mapper(Node):
    def __init__(self):
        super().__init__('mapper_node')
        self.max_linear_velocity = 0.0
        self.min_linear_velocity = 0.0
        self.max_steering_angle = 0.0
        self.create_subscription(Control, '/control/command/control_cmd', self.control_cmd_callback, 10)
        self.get_logger().info("Mapper node started.")
        self.create_timer(1.0, self.timer_callback)

    def control_cmd_callback(self, msg: Control):
        v = msg.longitudinal.velocity
        a = msg.lateral.steering_tire_angle

        if v > self.max_linear_velocity:
            self.max_linear_velocity = v
        if v < self.min_linear_velocity:
            self.min_linear_velocity = v
        if abs(a) > abs(self.max_steering_angle):
            self.max_steering_angle = a  # 부호 유지

    def timer_callback(self):
        #if self.max_linear_velocity != 0.0 or self.min_linear_velocity != 0.0 or self.max_steering_angle != 0.0:
            self.get_logger().info(
                f"\n"
                f"Max vel: {self.max_linear_velocity:.2f} \n"
                f"Min vel: {self.min_linear_velocity:.2f} \n"
                f"Max steering: {self.max_steering_angle:.3f} \n"
                f"=================================================================\n"
            )

    def save_to_file(self, filepath='mapper_output.txt'):
        with open(filepath, 'w') as f:
            f.write("Autoware Control Command Observed Limits:\n")
            f.write(f"Max Linear Velocity: {self.max_linear_velocity:.6f} \n")
            f.write(f"Min Linear Velocity: {self.min_linear_velocity:.6f} \n")
            f.write(f"Max Steering Angle:  {self.max_steering_angle:.6f} \n")
        # ROS 로그는 shutdown 이후 호출하지 않음
        print(f"Values saved to {filepath}")

def main(args=None):
    rclpy.init(args=args)
    node = Mapper()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("\nKeyboardInterrupt received. Saving data...")
        node.save_to_file()
    finally:
        
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
