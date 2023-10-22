// Generated by gencpp from file web_msgs/web_transfer_pkg.msg
// DO NOT EDIT!


#ifndef WEB_MSGS_MESSAGE_WEB_TRANSFER_PKG_H
#define WEB_MSGS_MESSAGE_WEB_TRANSFER_PKG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <web_msgs/velocity.h>
#include <nav_msgs/OccupancyGrid.h>

namespace web_msgs
{
template <class ContainerAllocator>
struct web_transfer_pkg_
{
  typedef web_transfer_pkg_<ContainerAllocator> Type;

  web_transfer_pkg_()
    : header()
    , original_lidar_signal()
    , filtered_lidar_signal()
    , velocity()
    , collision()
    , map()  {
    }
  web_transfer_pkg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , original_lidar_signal(_alloc)
    , filtered_lidar_signal(_alloc)
    , velocity(_alloc)
    , collision(_alloc)
    , map(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _original_lidar_signal_type;
  _original_lidar_signal_type original_lidar_signal;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _filtered_lidar_signal_type;
  _filtered_lidar_signal_type filtered_lidar_signal;

   typedef  ::web_msgs::velocity_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _collision_type;
  _collision_type collision;

   typedef  ::nav_msgs::OccupancyGrid_<ContainerAllocator>  _map_type;
  _map_type map;





  typedef boost::shared_ptr< ::web_msgs::web_transfer_pkg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::web_msgs::web_transfer_pkg_<ContainerAllocator> const> ConstPtr;

}; // struct web_transfer_pkg_

typedef ::web_msgs::web_transfer_pkg_<std::allocator<void> > web_transfer_pkg;

typedef boost::shared_ptr< ::web_msgs::web_transfer_pkg > web_transfer_pkgPtr;
typedef boost::shared_ptr< ::web_msgs::web_transfer_pkg const> web_transfer_pkgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::web_msgs::web_transfer_pkg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::web_msgs::web_transfer_pkg_<ContainerAllocator1> & lhs, const ::web_msgs::web_transfer_pkg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.original_lidar_signal == rhs.original_lidar_signal &&
    lhs.filtered_lidar_signal == rhs.filtered_lidar_signal &&
    lhs.velocity == rhs.velocity &&
    lhs.collision == rhs.collision &&
    lhs.map == rhs.map;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::web_msgs::web_transfer_pkg_<ContainerAllocator1> & lhs, const ::web_msgs::web_transfer_pkg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace web_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::web_msgs::web_transfer_pkg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::web_msgs::web_transfer_pkg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::web_msgs::web_transfer_pkg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d03f7cc7702568a120bbd62ac338224";
  }

  static const char* value(const ::web_msgs::web_transfer_pkg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d03f7cc7702568aULL;
  static const uint64_t static_value2 = 0x120bbd62ac338224ULL;
};

template<class ContainerAllocator>
struct DataType< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "web_msgs/web_transfer_pkg";
  }

  static const char* value(const ::web_msgs::web_transfer_pkg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32[] original_lidar_signal\n"
"float32[] filtered_lidar_signal\n"
"velocity velocity\n"
"string[] collision\n"
"nav_msgs/OccupancyGrid map\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: web_msgs/velocity\n"
"float32 x\n"
"float32 y\n"
"================================================================================\n"
"MSG: nav_msgs/OccupancyGrid\n"
"# This represents a 2-D grid map, in which each cell represents the probability of\n"
"# occupancy.\n"
"\n"
"Header header \n"
"\n"
"#MetaData for the map\n"
"MapMetaData info\n"
"\n"
"# The map data, in row-major order, starting with (0,0).  Occupancy\n"
"# probabilities are in the range [0,100].  Unknown is -1.\n"
"int8[] data\n"
"\n"
"================================================================================\n"
"MSG: nav_msgs/MapMetaData\n"
"# This hold basic information about the characterists of the OccupancyGrid\n"
"\n"
"# The time at which the map was loaded\n"
"time map_load_time\n"
"# The map resolution [m/cell]\n"
"float32 resolution\n"
"# Map width [cells]\n"
"uint32 width\n"
"# Map height [cells]\n"
"uint32 height\n"
"# The origin of the map [m, m, rad].  This is the real-world pose of the\n"
"# cell (0,0) in the map.\n"
"geometry_msgs/Pose origin\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::web_msgs::web_transfer_pkg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.original_lidar_signal);
      stream.next(m.filtered_lidar_signal);
      stream.next(m.velocity);
      stream.next(m.collision);
      stream.next(m.map);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct web_transfer_pkg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::web_msgs::web_transfer_pkg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::web_msgs::web_transfer_pkg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "original_lidar_signal[]" << std::endl;
    for (size_t i = 0; i < v.original_lidar_signal.size(); ++i)
    {
      s << indent << "  original_lidar_signal[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.original_lidar_signal[i]);
    }
    s << indent << "filtered_lidar_signal[]" << std::endl;
    for (size_t i = 0; i < v.filtered_lidar_signal.size(); ++i)
    {
      s << indent << "  filtered_lidar_signal[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.filtered_lidar_signal[i]);
    }
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::web_msgs::velocity_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "collision[]" << std::endl;
    for (size_t i = 0; i < v.collision.size(); ++i)
    {
      s << indent << "  collision[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.collision[i]);
    }
    s << indent << "map: ";
    s << std::endl;
    Printer< ::nav_msgs::OccupancyGrid_<ContainerAllocator> >::stream(s, indent + "  ", v.map);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEB_MSGS_MESSAGE_WEB_TRANSFER_PKG_H
