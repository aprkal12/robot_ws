import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile

class Move_turtle(Node):
  def __init__(self):
    super().__init__('move_turtle')
    self.qos_profile = QoSProfile(depth = 10)
    self.move_turtle = self.create_publisher(Twist, 'turtle1/cmd_vel', self.qos_profile)
    self.move_turtle2 = self.create_publisher(Twist, 'turtle2/cmd_vel', self.qos_profile)
    self.move_turtle3 = self.create_publisher(Twist, 'turtle3/cmd_vel', self.qos_profile)
    self.timer = self.create_timer(0.1, self.turtle_move)
    # self.x = 0.0

  def turtle_move(self):
    msg = Twist()
    msg.linear.x = 0.5#self.x
    msg.linear.y = 0.0
    msg.linear.z = 0.0

    msg.angular.x = 0.0
    msg.angular.y = 0.0
    msg.angular.z = 1.0

    # if self.x < 5.0:
    #   self.x+=0.01
    # else:
    #   self.x-=0.01
    self.move_turtle.publish(msg)
    msg.angular.z = 0.7
    self.move_turtle2.publish(msg)
    msg.angular.z = 0.5
    self.move_turtle3.publish(msg)
    self.get_logger().info(f'publishing message : {msg.linear}, {msg.angular}')


def main(args = None):
  rclpy.init(args=args)
  node = Move_turtle()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
  print('aaa')

if __name__ == '__main__':
  main()
