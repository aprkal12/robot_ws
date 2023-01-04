import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from class_test_interfaces.srv import AddThreeInts
from class_test_interfaces.srv import MinusThreeInts

class Num_srv(Node):
  def __init__(self):
    super().__init__('add_and_minus_int_service')
    #self.qos_profile = QoSProfile(depth=10)
    self.service_srv = self.create_service(AddThreeInts, 'add_int', self.add_callback)

    self.service_srv2 = self.create_service(MinusThreeInts, 'minus_int', self.minus_callback)

  def add_callback(self, request, response):
    self.sum = request.a + request.b + request.c
    response.sum = self.sum
    return response

  def minus_callback(self, request, response):
    self.sum = request.a - request.b - request.c
    response.sum = self.sum
    return response

def main(args = None):
  rclpy.init()
  node = Num_srv()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
  main()
