import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile

class Msg_sub(Node):
  def __init__(self):
    super().__init__('message_publisher')
    self.qos_profile = QoSProfile(depth = 10)
    self.tb3_m_publish = self.create_publisher(Twist, 'cmd_vel', self.qos_profile)
    self.msgsub = self.create_subscription(String, 'message', self.sub_msg, self.qos_profile)
    self.timer = self.create_timer(1, self.sub_msg)
    # self.timer = self.create_timer(0.1, self.tb3_m_publisher)
    # self.count = 0

  def sub_msg(self, msg):
    # 서버에서 메세지 입력받아와서 twist로 변환한 후 터틀로 전달
    tw = Twist()
    # msg = Twist()
    # # msg.data = "hellow" + str(self.count)
    # msg.linear.x = 0.0
    # msg.angular.z = 0.0
    self.command = msg.data
    tw.linear.x = 0.0
    tw.angular.z = 0.0

    if self.command.find('앞') >= 0:
      print('터틀이 앞으로 갑니다.')
      tw.linear.x = 0.1

    elif self.command.find('뒤') >= 0:
      print('터틀이 뒤로 갑니다.')
      tw.linear.x = 0.0


    # 입력받은 데이터 판단 후 토픽 결정
    # a = msg.data
    # b = 'test'
    # b.

    self.tb3_m_publish().publish(tw)
    self.get_logger().info(f'publishing message : {msg.data}, {tw.linear.x}, {tw.angular.z}')
    #self.count += 1


def main(args = None):
  rclpy.init(args=args)
  node = Msg_sub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
  print('aaa')

if __name__ == '__main__':
  main()
