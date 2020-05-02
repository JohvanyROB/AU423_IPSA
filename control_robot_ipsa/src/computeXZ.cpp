#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>

using namespace std;

class ComputeXZ{
private:
  ros::NodeHandle _nh;
  ros::Publisher _cmdPub;
  geometry_msgs::Pose2D _cmd;
  float _w, _r, _zOffset;

public:
  //Constructor
  ComputeXZ(){
    _cmdPub = _nh.advertise<geometry_msgs::Pose2D>("/desired_2Dpose_effector", 1);
    getConfig();
    execute();
  }

  virtual ~ComputeXZ(){
  }
  
  //Retrieve the parameters
  void getConfig(){
    _nh.getParam("/xz/w", _w);
    _nh.getParam("/xz/r", _r);
    _nh.getParam("/xz/x_des", _cmd.x);
    _nh.getParam("/xz/zOffset", _zOffset);

  }
  
  //Main Loop
  void execute(){
    ros::Rate r(10);
    while(_nh.ok()){
      compute();
      r.sleep();
      ros::spinOnce();
    }
  }
  
  //Compute the desired coordinates (x, z)
  void compute(){
    //Write your program here
    _cmdPub.publish(_cmd);
  }

};

int main(int argc, char *argv[]) {
  ros::init(argc, argv, "ComputeXZ");
  ComputeXZ cp;
  ros::spin();
  return 0;
}
