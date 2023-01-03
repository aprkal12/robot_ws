import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
from rclpy.qos import QoSProfile

class rt_pub(Node):
  def __init__(self):
    super().__init__('time_publisher')
    self.qos_profile = QoSProfile(depth = 10)
    self.time_publisher = self.create_publisher(Header, 'time', self.qos_profile)
    self.timer = self.create_timer(0.01, self.t_publisher)
    self.count = 0

  def t_publisher(self):
    msg = Header()
    msg.stamp = self.get_clock().now().to_msg()
    self.time_publisher.publish(msg)
    self.get_logger().info(f'pub msg: {msg.stamp}')
    self.get_logger().info(f'pub msg : {self.get_clock().now().seconds_nanoseconds()}')
    self.count+=1


def main(args = None):
  rclpy.init(args=args)
  node = rt_pub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
  print('aaa')

if __name__ == '__main__':
  main()
