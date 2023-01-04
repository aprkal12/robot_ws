import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from class_test_interfaces import Fibonacci

class FibonacciActionServer(Node):
  def __init__(self):
    super().__init__('fibonacci_action_server')
    self.action_server = ActionServer(self, Fibonacci, 'fibonacci', self.fibocall)

  def fibocall(self, goal_handle):
    sequence = [0, 1]

    for i in range(1, goal_handle.request.number):
      sequence.append(sequence[i]+sequence[i-1])
    goal_handle.succeed()
    result = Fibonacci.Result()
    return result


def main(args = None):
  rclpy.init()
  node = FibonacciActionServer()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
  main()
