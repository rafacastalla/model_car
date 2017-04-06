// Generated by gencpp from file realsense_camera/GetIMUInfo.msg
// DO NOT EDIT!


#ifndef REALSENSE_CAMERA_MESSAGE_GETIMUINFO_H
#define REALSENSE_CAMERA_MESSAGE_GETIMUINFO_H

#include <ros/service_traits.h>


#include <realsense_camera/GetIMUInfoRequest.h>
#include <realsense_camera/GetIMUInfoResponse.h>


namespace realsense_camera
{

struct GetIMUInfo
{

typedef GetIMUInfoRequest Request;
typedef GetIMUInfoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetIMUInfo
} // namespace realsense_camera


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::realsense_camera::GetIMUInfo > {
  static const char* value()
  {
    return "fcce7f85a63907f26a3912a7632e9630";
  }

  static const char* value(const ::realsense_camera::GetIMUInfo&) { return value(); }
};

template<>
struct DataType< ::realsense_camera::GetIMUInfo > {
  static const char* value()
  {
    return "realsense_camera/GetIMUInfo";
  }

  static const char* value(const ::realsense_camera::GetIMUInfo&) { return value(); }
};


// service_traits::MD5Sum< ::realsense_camera::GetIMUInfoRequest> should match 
// service_traits::MD5Sum< ::realsense_camera::GetIMUInfo > 
template<>
struct MD5Sum< ::realsense_camera::GetIMUInfoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::realsense_camera::GetIMUInfo >::value();
  }
  static const char* value(const ::realsense_camera::GetIMUInfoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::realsense_camera::GetIMUInfoRequest> should match 
// service_traits::DataType< ::realsense_camera::GetIMUInfo > 
template<>
struct DataType< ::realsense_camera::GetIMUInfoRequest>
{
  static const char* value()
  {
    return DataType< ::realsense_camera::GetIMUInfo >::value();
  }
  static const char* value(const ::realsense_camera::GetIMUInfoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::realsense_camera::GetIMUInfoResponse> should match 
// service_traits::MD5Sum< ::realsense_camera::GetIMUInfo > 
template<>
struct MD5Sum< ::realsense_camera::GetIMUInfoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::realsense_camera::GetIMUInfo >::value();
  }
  static const char* value(const ::realsense_camera::GetIMUInfoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::realsense_camera::GetIMUInfoResponse> should match 
// service_traits::DataType< ::realsense_camera::GetIMUInfo > 
template<>
struct DataType< ::realsense_camera::GetIMUInfoResponse>
{
  static const char* value()
  {
    return DataType< ::realsense_camera::GetIMUInfo >::value();
  }
  static const char* value(const ::realsense_camera::GetIMUInfoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // REALSENSE_CAMERA_MESSAGE_GETIMUINFO_H