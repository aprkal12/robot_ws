import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile

class M_pub(Node):
  def __init__(self):
    super().__init__('message_publisher')
    self.qos_profile = QoSProfile(depth = 10)
    self.tb3_m_publish = self.create_publisher(Twist, 'cmd_vel', self.qos_profile)
    self.timer = self.create_timer(0.1, self.tb3_m_publisher)
    self.count = 0

  def tb3_m_publisher(self):
    msg = Twist()
    # msg.data = "hellow" + str(self.count)
    msg.linear.x = 0.0
    msg.angular.z = 0.0
    self.tb3_m_publish().publish(msg)
    self.get_logger().info(f'publishing message : {msg.linear.x}, {msg.angular.z}')
    self.count += 1


def main(args = None):
  rclpy.init(args=args)
  node = M_pub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
  print('aaa')

if __name__ == '__main__':
  main()
