import rclpy
from rclpy.node import Node
from class_test_interfaces.srv import AddThreeInts
# import sys

# add 코드
class Num_cli(Node):
  def __init__(self):
    super().__init__('add_int_client')
    self.cli = self.create_client(AddThreeInts, 'add_int')

    while not self.cli.wait_for_service(timeout_sec=1.0):
      self.get_logger().info('Service not available, waiting again...')
    self.req = AddThreeInts.Request()

    self.var_a = 4
    self.var_b = 8
    self.var_c = 15

  def request_add(self):
    self.req.a = self.var_a
    self.req.b = self.var_b
    self.req.c = self.var_c

    self.future = self.cli.call_async(self.req)
    #print(self.future)


def main(args = None):
  rclpy.init(args=args)
  node = Num_cli()
  node.request_add()
  try:
    while rclpy.ok():
      rclpy.spin_once(node)
      #node.future = node.cli.call_async(node.req)
      if node.future.done():
        try:
          node.response = node.future.result()
        except Exception as e:
          node.get_logger().info(f'호출 실패 %r  ' %(e,))
        else:
          node.get_logger().info(f'결과 값은 : {node.response.sum}')
        break
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
  main()
