#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to nidar_interfaces__msg__SurvivorDetection

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SurvivorDetection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub survivor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_drone: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SurvivorDetection::default())
  }
}

impl rosidl_runtime_rs::Message for SurvivorDetection {
  type RmwMsg = super::msg::rmw::SurvivorDetection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        survivor_id: msg.survivor_id,
        source_drone: msg.source_drone.as_str().into(),
        x: msg.x,
        y: msg.y,
        z: msg.z,
        latitude: msg.latitude,
        longitude: msg.longitude,
        confidence: msg.confidence,
        geotag_valid: msg.geotag_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      survivor_id: msg.survivor_id,
        source_drone: msg.source_drone.as_str().into(),
      x: msg.x,
      y: msg.y,
      z: msg.z,
      latitude: msg.latitude,
      longitude: msg.longitude,
      confidence: msg.confidence,
      geotag_valid: msg.geotag_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      survivor_id: msg.survivor_id,
      source_drone: msg.source_drone.to_string(),
      x: msg.x,
      y: msg.y,
      z: msg.z,
      latitude: msg.latitude,
      longitude: msg.longitude,
      confidence: msg.confidence,
      geotag_valid: msg.geotag_valid,
    }
  }
}


// Corresponds to nidar_interfaces__msg__DeliveryTask

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryTask {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


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
    pub status: std::string::String,

}



impl Default for DeliveryTask {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeliveryTask::default())
  }
}

impl rosidl_runtime_rs::Message for DeliveryTask {
  type RmwMsg = super::msg::rmw::DeliveryTask;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        task_id: msg.task_id,
        survivor_id: msg.survivor_id,
        target_x: msg.target_x,
        target_y: msg.target_y,
        target_z: msg.target_z,
        target_latitude: msg.target_latitude,
        target_longitude: msg.target_longitude,
        priority: msg.priority,
        status: msg.status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      task_id: msg.task_id,
      survivor_id: msg.survivor_id,
      target_x: msg.target_x,
      target_y: msg.target_y,
      target_z: msg.target_z,
      target_latitude: msg.target_latitude,
      target_longitude: msg.target_longitude,
      priority: msg.priority,
        status: msg.status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      task_id: msg.task_id,
      survivor_id: msg.survivor_id,
      target_x: msg.target_x,
      target_y: msg.target_y,
      target_z: msg.target_z,
      target_latitude: msg.target_latitude,
      target_longitude: msg.target_longitude,
      priority: msg.priority,
      status: msg.status.to_string(),
    }
  }
}


// Corresponds to nidar_interfaces__msg__DeliveryResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


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
    pub status: std::string::String,

}



impl Default for DeliveryResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeliveryResult::default())
  }
}

impl rosidl_runtime_rs::Message for DeliveryResult {
  type RmwMsg = super::msg::rmw::DeliveryResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        task_id: msg.task_id,
        survivor_id: msg.survivor_id,
        success: msg.success,
        drop_x: msg.drop_x,
        drop_y: msg.drop_y,
        drop_z: msg.drop_z,
        horizontal_error_m: msg.horizontal_error_m,
        accuracy_zone: msg.accuracy_zone,
        status: msg.status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      task_id: msg.task_id,
      survivor_id: msg.survivor_id,
      success: msg.success,
      drop_x: msg.drop_x,
      drop_y: msg.drop_y,
      drop_z: msg.drop_z,
      horizontal_error_m: msg.horizontal_error_m,
      accuracy_zone: msg.accuracy_zone,
        status: msg.status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      task_id: msg.task_id,
      survivor_id: msg.survivor_id,
      success: msg.success,
      drop_x: msg.drop_x,
      drop_y: msg.drop_y,
      drop_z: msg.drop_z,
      horizontal_error_m: msg.horizontal_error_m,
      accuracy_zone: msg.accuracy_zone,
      status: msg.status.to_string(),
    }
  }
}


// Corresponds to nidar_interfaces__msg__DroneStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub role: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flight_mode: std::string::String,


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
    pub mission_state: std::string::String,

}



impl Default for DroneStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneStatus::default())
  }
}

impl rosidl_runtime_rs::Message for DroneStatus {
  type RmwMsg = super::msg::rmw::DroneStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        drone_id: msg.drone_id.as_str().into(),
        role: msg.role.as_str().into(),
        connected: msg.connected,
        armed: msg.armed,
        flight_mode: msg.flight_mode.as_str().into(),
        battery_percent: msg.battery_percent,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        latitude: msg.latitude,
        longitude: msg.longitude,
        communication_ok: msg.communication_ok,
        geofence_ok: msg.geofence_ok,
        mission_state: msg.mission_state.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
        drone_id: msg.drone_id.as_str().into(),
        role: msg.role.as_str().into(),
      connected: msg.connected,
      armed: msg.armed,
        flight_mode: msg.flight_mode.as_str().into(),
      battery_percent: msg.battery_percent,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      latitude: msg.latitude,
      longitude: msg.longitude,
      communication_ok: msg.communication_ok,
      geofence_ok: msg.geofence_ok,
        mission_state: msg.mission_state.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      drone_id: msg.drone_id.to_string(),
      role: msg.role.to_string(),
      connected: msg.connected,
      armed: msg.armed,
      flight_mode: msg.flight_mode.to_string(),
      battery_percent: msg.battery_percent,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      latitude: msg.latitude,
      longitude: msg.longitude,
      communication_ok: msg.communication_ok,
      geofence_ok: msg.geofence_ok,
      mission_state: msg.mission_state.to_string(),
    }
  }
}


// Corresponds to nidar_interfaces__msg__MissionStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MissionStatus {
  type RmwMsg = super::msg::rmw::MissionStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        mission_id: msg.mission_id.as_str().into(),
        state: msg.state.as_str().into(),
        survivors_detected: msg.survivors_detected,
        survivors_geotagged: msg.survivors_geotagged,
        deliveries_pending: msg.deliveries_pending,
        deliveries_completed: msg.deliveries_completed,
        completion_percent: msg.completion_percent,
        elapsed_time_sec: msg.elapsed_time_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
        mission_id: msg.mission_id.as_str().into(),
        state: msg.state.as_str().into(),
      survivors_detected: msg.survivors_detected,
      survivors_geotagged: msg.survivors_geotagged,
      deliveries_pending: msg.deliveries_pending,
      deliveries_completed: msg.deliveries_completed,
      completion_percent: msg.completion_percent,
      elapsed_time_sec: msg.elapsed_time_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      mission_id: msg.mission_id.to_string(),
      state: msg.state.to_string(),
      survivors_detected: msg.survivors_detected,
      survivors_geotagged: msg.survivors_geotagged,
      deliveries_pending: msg.deliveries_pending,
      deliveries_completed: msg.deliveries_completed,
      completion_percent: msg.completion_percent,
      elapsed_time_sec: msg.elapsed_time_sec,
    }
  }
}


// Corresponds to nidar_interfaces__msg__MissionScore

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionScore {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionScore::default())
  }
}

impl rosidl_runtime_rs::Message for MissionScore {
  type RmwMsg = super::msg::rmw::MissionScore;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        detection_score: msg.detection_score,
        delivery_score: msg.delivery_score,
        collaboration_score: msg.collaboration_score,
        gcs_score: msg.gcs_score,
        fast_completion_score: msg.fast_completion_score,
        penalty_score: msg.penalty_score,
        total_score: msg.total_score,
        mission_time_sec: msg.mission_time_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      detection_score: msg.detection_score,
      delivery_score: msg.delivery_score,
      collaboration_score: msg.collaboration_score,
      gcs_score: msg.gcs_score,
      fast_completion_score: msg.fast_completion_score,
      penalty_score: msg.penalty_score,
      total_score: msg.total_score,
      mission_time_sec: msg.mission_time_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      detection_score: msg.detection_score,
      delivery_score: msg.delivery_score,
      collaboration_score: msg.collaboration_score,
      gcs_score: msg.gcs_score,
      fast_completion_score: msg.fast_completion_score,
      penalty_score: msg.penalty_score,
      total_score: msg.total_score,
      mission_time_sec: msg.mission_time_sec,
    }
  }
}


