#include <ros/protobuffer_traits.h>
#include <ros/serialization_protobuffer.h>
#include "ros/ros.h"
#include "publish_info.pb.h"
int main(int argc, char **argv) {
  ros::init(argc, argv, "pb_talker");
  ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME,
                                 ros::console::levels::Debug);
  ros::NodeHandle n;

  ros::Publisher pub =
      n.advertise<xieshaoxiong::sample::PublishInfo>("/Shaoxiong", 1000);

  ros::Rate loop_rate(10);
  
  xieshaoxiong::sample::PublishInfo proto_msg_info;
  proto_msg_info.set_name("shaoxiongxie");
  proto_msg_info.set_message_type("test_message");
  proto_msg_info.set_publish_msg("Hello, I am Shaoxiong Xie.");

  int count = 0;
  while (ros::ok()) {
    pub.publish(proto_msg_info);
    std::cerr << "DebugMsg: " << proto_msg_info.DebugString() << std::endl;
    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }

  return 0;
}
