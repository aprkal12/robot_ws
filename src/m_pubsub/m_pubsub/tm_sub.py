import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Header
from rclpy.qos import QoSProfile

class TM_sub(Node):
  def __init__(self):
    super().__init__('hello_world_sub')
    self.qos_profile = QoSProfile(depth = 10)
    self.msg_sub = self.create_subscription(String, 'message', self.m_subscriber_msg, self.qos_profile)
    self.time_sub = self.create_subscription(Header, 'time', self.t_subscriber_msg, self.qos_profile)

  def m_subscriber_msg(self, msg):
    self.get_logger().info('publishing message : {0}'.format(msg.data))

  def t_subscriber_msg(self, msg):
    self.get_logger().info('publishing time : {0}'.format(msg.stamp))

def main(args = None):
  rclpy.init(args=args)
  node = TM_sub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
  print('aaa')

if __name__ == '__main__':
  main()
