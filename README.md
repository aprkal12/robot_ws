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
* 인터페이스 패키지 제작해보기

* ros2 pkg create --build-type ament_cmake class_test_interfaces
  * => 인터페이스 패키지 만들기 (class_test_interfaces 참고)

* 토픽 인터페이스 제작해보기
  * class_test_interfaces.msg에 제작

* 서비스 인터페이스 제작해보기
  * class_test_interfaces.srv에 제작
  * Node.create_service (test_service_ser1 참고)
  * Node.create_client (test_service_client 참고)

* 액션 인터페이스 제작해보기
  * class_test_interfaces.action에 제작
  * ActionServer (fibonacci_action_server 참고)
  * ActionClient (fibonacci_action_client 참고)

---
# 2023_01_05
---

* 인터페이스는 노드랑 따로 패키지를 만들어야한다.

* 파라미터 실습
* launch 파일 실습
* 터틀봇 ip 21
* 터틀봇 실습


---
# 2023_01_06
---
* 터틀 봇 실습
* 패키지 만들어서 조작하는 방법
* 카메라 제어 방법(안됌)

* 다음주 금요일에 중간발표
  * 팀원, 팀명, 주제, 도전할 기술들 등등

---
# 2023_01_10
---
* 카메라 안되던거 config설정파일 띄어쓰기 문제였음 - 해결
