import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import QoSProfile

class M_sub(Node):
  def __init__(self):
    super().__init__('hello_world_sub')
    self.qos_profile = QoSProfile(depth = 10)
    self.hello_world_sub = self.create_subscription(String, 'message', self.m_subscriber_msg, self.qos_profile)

  def m_subscriber_msg(self, msg):
    self.get_logger().info('publishing message : {0}'.format(msg.data))
    self.command = msg.data

    if self.command.find('앞') >= 0:
      print('터틀이 앞으로 갑니다.')

    elif self.command.find('뒤') >= 0:
      print('터틀이 뒤로 갑니다.')

    print(type(msg.data))
    print(type("aaa"))

def main(args = None):
  rclpy.init(args=args)
  node = M_sub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
  print('aaa')

if __name__ == '__main__':
  main()
