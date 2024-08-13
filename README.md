# ros-protobuf
项目介绍：为了提高ros消息传输的效率，并且兼容常用的Protobuf序列化协议，开发了一款创新的通信中间件，融合了 ROS和Protobuf技术，作为两者之间的桥梁，提高了35.8%的消息传输效率。

**clone项目前应在home目录下创建一个work文件夹（此文件夹为docker的工作目录），然后在文件夹中git clone 本项目**

## 构建docker镜像

```bash
  cd ~/work/ros-protobuf/docker/build
  docker build --network host -t ros_protobuf:middleware -f ros_x86.dockerfile .
```

## 进入容器

```bash
cd ~/work/ros-protobuf/docker/scripts
// 启动容器
./ros_docker_run.sh
// 进入容器
./ros_docker_into.sh
```

## 编译代码
```bash
cd /work
./autobuild.sh
```

## 启动程序
```bash
cd /work
// 启动talker
source devel/setup.bash
roscore &
rosrun myproject pb_talker
```

```bash
// 打开新终端，再次进入容器，启动pb_listener节点
cd ~/work/ros_protobuf_msg/docker/scripts
./ros_docker_into.sh

rosrun myproject pb_listener
```
