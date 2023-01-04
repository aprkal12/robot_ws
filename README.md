- - -
# 2023_01_02
- - -
* ubuntu 20.04 Vmware에 설치.
  * image 주소 : https://releases.ubuntu.com/focal/
* ROS2 설치.
  * foxy : sudo apt install ros-foxy-desktop ros-foxy-rmw-fastrtps* ros-foxy-rmw-cyclonedds*
  * 설치 후 정상 작동 확인 : 터미널에서 testpub, testsub으로 확인
  * turtlesim_node 실행 후 teleop으로 움직임 확인
* terminator 설치.
  * sudo apt install terminator

- - -
# 2023_01_03
- - -
* qos 개념

* 과제
* message 토픽
* subscribe 2개 message, type
* message_pub, time_pub -> message_time -> sub

* SaaS
  * software as a service
* Paas
  * platporm as a service

* ros2 pkg create --build-type ament_python move_turtle_pkg
  * => ros 패키지 생성

* ros2 run turtlesim turtlesim_node --ros-args -r __ns:=/ns1
  * => 터틀 노드 네임스페이스 지정

* --ros-args -r __ns:=/ns1
  * => 퍼블리쉬할 때도 뒤에 지정했던 네임스페이스 찾으면 된다.

* ros2 service call /spawn turtlesim/srv/Spawn "{x: 5.5, y: 7.0, theta: 1.5, name : 'turtle2'}"
  * => 터틀노드 여러개

* ros2 service call /turtle1/set_pen turtlesim/srv/SetPen "{r : 100, g : 100, b : 100, width : 5}"
  * => 터틀 펜색상 변경

* 삼각함수 이해필요 ros는 radian 사용

* opencv 기초 실습 - 변환, 회전, 색상변환

---
# 2023_01_04
---
* 서비스(서버) 제작해보기
  * Node.create_service (test_service_ser1 참고)
  * Node.create_client (test_service_client 참고)

* 인터페이스 패키지 제작해보기

* ros2 pkg create --build-type ament_cmake class_test_interfaces
  * => 인터페이스 패키지 만들기 (class_test_interfaces.srv 참고)

