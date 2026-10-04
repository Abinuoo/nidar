#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "nidar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__SurvivorDetection() -> *const std::ffi::c_void;
}

#[link(name = "nidar_interfaces__rosidl_generator_c")]
extern "C" {
    fn nidar_interfaces__msg__SurvivorDetection__init(msg: *mut SurvivorDetection) -> bool;
    fn nidar_interfaces__msg__SurvivorDetection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SurvivorDetection>, size: usize) -> bool;
    fn nidar_interfaces__msg__SurvivorDetection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SurvivorDetection>);
    fn nidar_interfaces__msg__SurvivorDetection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SurvivorDetection>, out_seq: *mut rosidl_runtime_rs::Sequence<SurvivorDetection>) -> bool;
}

// Corresponds to nidar_interfaces__msg__SurvivorDetection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SurvivorDetection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub survivor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_drone: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub geotag_valid: bool,

}



impl Default for SurvivorDetection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nidar_interfaces__msg__SurvivorDetection__init(&mut msg as *mut _) {
        panic!("Call to nidar_interfaces__msg__SurvivorDetection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SurvivorDetection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__SurvivorDetection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__SurvivorDetection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__SurvivorDetection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SurvivorDetection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SurvivorDetection where Self: Sized {
  const TYPE_NAME: &'static str = "nidar_interfaces/msg/SurvivorDetection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__SurvivorDetection() }
  }
}


#[link(name = "nidar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__DeliveryTask() -> *const std::ffi::c_void;
}

#[link(name = "nidar_interfaces__rosidl_generator_c")]
extern "C" {
    fn nidar_interfaces__msg__DeliveryTask__init(msg: *mut DeliveryTask) -> bool;
    fn nidar_interfaces__msg__DeliveryTask__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryTask>, size: usize) -> bool;
    fn nidar_interfaces__msg__DeliveryTask__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryTask>);
    fn nidar_interfaces__msg__DeliveryTask__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryTask>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryTask>) -> bool;
}

// Corresponds to nidar_interfaces__msg__DeliveryTask
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryTask {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub survivor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_latitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_longitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for DeliveryTask {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nidar_interfaces__msg__DeliveryTask__init(&mut msg as *mut _) {
        panic!("Call to nidar_interfaces__msg__DeliveryTask__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryTask {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DeliveryTask__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DeliveryTask__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DeliveryTask__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryTask {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryTask where Self: Sized {
  const TYPE_NAME: &'static str = "nidar_interfaces/msg/DeliveryTask";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__DeliveryTask() }
  }
}


#[link(name = "nidar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__DeliveryResult() -> *const std::ffi::c_void;
}

#[link(name = "nidar_interfaces__rosidl_generator_c")]
extern "C" {
    fn nidar_interfaces__msg__DeliveryResult__init(msg: *mut DeliveryResult) -> bool;
    fn nidar_interfaces__msg__DeliveryResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryResult>, size: usize) -> bool;
    fn nidar_interfaces__msg__DeliveryResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryResult>);
    fn nidar_interfaces__msg__DeliveryResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryResult>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryResult>) -> bool;
}

// Corresponds to nidar_interfaces__msg__DeliveryResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub survivor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drop_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drop_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drop_z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizontal_error_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accuracy_zone: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,

}



impl Default for DeliveryResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nidar_interfaces__msg__DeliveryResult__init(&mut msg as *mut _) {
        panic!("Call to nidar_interfaces__msg__DeliveryResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DeliveryResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DeliveryResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DeliveryResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryResult where Self: Sized {
  const TYPE_NAME: &'static str = "nidar_interfaces/msg/DeliveryResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__DeliveryResult() }
  }
}


#[link(name = "nidar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__DroneStatus() -> *const std::ffi::c_void;
}

#[link(name = "nidar_interfaces__rosidl_generator_c")]
extern "C" {
    fn nidar_interfaces__msg__DroneStatus__init(msg: *mut DroneStatus) -> bool;
    fn nidar_interfaces__msg__DroneStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneStatus>, size: usize) -> bool;
    fn nidar_interfaces__msg__DroneStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneStatus>);
    fn nidar_interfaces__msg__DroneStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneStatus>) -> bool;
}

// Corresponds to nidar_interfaces__msg__DroneStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub role: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flight_mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub communication_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub geofence_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_state: rosidl_runtime_rs::String,

}



impl Default for DroneStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nidar_interfaces__msg__DroneStatus__init(&mut msg as *mut _) {
        panic!("Call to nidar_interfaces__msg__DroneStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DroneStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DroneStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__DroneStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneStatus where Self: Sized {
  const TYPE_NAME: &'static str = "nidar_interfaces/msg/DroneStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__DroneStatus() }
  }
}


#[link(name = "nidar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__MissionStatus() -> *const std::ffi::c_void;
}

#[link(name = "nidar_interfaces__rosidl_generator_c")]
extern "C" {
    fn nidar_interfaces__msg__MissionStatus__init(msg: *mut MissionStatus) -> bool;
    fn nidar_interfaces__msg__MissionStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>, size: usize) -> bool;
    fn nidar_interfaces__msg__MissionStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>);
    fn nidar_interfaces__msg__MissionStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionStatus>) -> bool;
}

// Corresponds to nidar_interfaces__msg__MissionStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub survivors_detected: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub survivors_geotagged: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deliveries_pending: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deliveries_completed: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub completion_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elapsed_time_sec: f32,

}



impl Default for MissionStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nidar_interfaces__msg__MissionStatus__init(&mut msg as *mut _) {
        panic!("Call to nidar_interfaces__msg__MissionStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__MissionStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__MissionStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__MissionStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionStatus where Self: Sized {
  const TYPE_NAME: &'static str = "nidar_interfaces/msg/MissionStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__MissionStatus() }
  }
}


#[link(name = "nidar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__MissionScore() -> *const std::ffi::c_void;
}

#[link(name = "nidar_interfaces__rosidl_generator_c")]
extern "C" {
    fn nidar_interfaces__msg__MissionScore__init(msg: *mut MissionScore) -> bool;
    fn nidar_interfaces__msg__MissionScore__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionScore>, size: usize) -> bool;
    fn nidar_interfaces__msg__MissionScore__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionScore>);
    fn nidar_interfaces__msg__MissionScore__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionScore>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionScore>) -> bool;
}

// Corresponds to nidar_interfaces__msg__MissionScore
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionScore {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detection_score: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delivery_score: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collaboration_score: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gcs_score: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fast_completion_score: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub penalty_score: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_score: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_time_sec: f32,

}



impl Default for MissionScore {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nidar_interfaces__msg__MissionScore__init(&mut msg as *mut _) {
        panic!("Call to nidar_interfaces__msg__MissionScore__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionScore {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__MissionScore__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__MissionScore__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nidar_interfaces__msg__MissionScore__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionScore {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionScore where Self: Sized {
  const TYPE_NAME: &'static str = "nidar_interfaces/msg/MissionScore";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nidar_interfaces__msg__MissionScore() }
  }
}


