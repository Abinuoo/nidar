# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target nidar_interfaces::nidar_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${nidar_interfaces_TARGETS}.
if(nidar_interfaces_TARGETS AND NOT TARGET nidar_interfaces::nidar_interfaces)
  add_library(nidar_interfaces::nidar_interfaces INTERFACE IMPORTED)
  set_target_properties(nidar_interfaces::nidar_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${nidar_interfaces_TARGETS}")
endif()
