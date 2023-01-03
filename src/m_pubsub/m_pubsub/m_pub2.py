import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import QoSProfile

class M_pub2(Node):
  def __init__(self):
    super().__init__('message_publisher')
    self.qos_profile = QoSProfile(depth = 10)
    self.msg_publisher = self.create_publisher(String, 'message', self.qos_profile)
    self.timer = self.create_timer(1, self.m2_publisher)
    self.count = 0

  def m2_publisher(self):
    msg = String()
    msg.data = "hello_ros_messages" + str(self.count)
    self.msg_publisher.publish(msg)
    self.get_logger().info('publishing message : ' + msg.data)
    self.count += 1


def main(args = None):
  rclpy.init(args=args)
  node = M_pub2()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
  print('main end')

if __name__ == '__main__':
  main()
