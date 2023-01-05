import rclpy
from rclpy.node import Node

class TParam(Node):
  def __init__(self):
    super().__init__('tpram')
    self.declare_parameter('my_para', '내가만든파라미터')
    self.timer = self.create_timer(1, self.para)
    self.a = "aaa"

  def para(self):
    print(self.a)
    my_para = self.get_parameter('my_para').get_parameter_value()._string_value
    # 언더바를 사용하면 외부에서 해당 변수를 사용하지 말라는 뜻이라고함
    print(my_para)

def main(args = None):
  rclpy.init()
  node = TParam()
  rclpy.spin(node)
  rclpy.shutdown

if __name__=='__main__':
  main()
