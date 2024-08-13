# ros-protobuf
项目介绍：为了提高ros消息传输的效率，并且兼容常用的Protobuf序列化协议，开发了一款创新的通信中间件，融合了 ROS和Protobuf技术，作为两者之间的桥梁，提高了35.8%的消息传输效率。

## 构建docker镜像

```bash
  cd ros-protobuf/docker/build
  docker build --network host -t ros_protobuf:middleware -f ros_x86.dockerfile .
```
