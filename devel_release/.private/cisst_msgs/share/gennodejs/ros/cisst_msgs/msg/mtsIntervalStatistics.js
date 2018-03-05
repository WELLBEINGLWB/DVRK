// Auto-generated. Do not edit!

// (in-package cisst_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class mtsIntervalStatistics {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.AvgPeriod = null;
      this.StdDevPeriod = null;
      this.MinPeriod = null;
      this.MaxPeriod = null;
      this.MinComputeTime = null;
      this.MaxComputeTime = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('AvgPeriod')) {
        this.AvgPeriod = initObj.AvgPeriod
      }
      else {
        this.AvgPeriod = 0.0;
      }
      if (initObj.hasOwnProperty('StdDevPeriod')) {
        this.StdDevPeriod = initObj.StdDevPeriod
      }
      else {
        this.StdDevPeriod = 0.0;
      }
      if (initObj.hasOwnProperty('MinPeriod')) {
        this.MinPeriod = initObj.MinPeriod
      }
      else {
        this.MinPeriod = 0.0;
      }
      if (initObj.hasOwnProperty('MaxPeriod')) {
        this.MaxPeriod = initObj.MaxPeriod
      }
      else {
        this.MaxPeriod = 0.0;
      }
      if (initObj.hasOwnProperty('MinComputeTime')) {
        this.MinComputeTime = initObj.MinComputeTime
      }
      else {
        this.MinComputeTime = 0.0;
      }
      if (initObj.hasOwnProperty('MaxComputeTime')) {
        this.MaxComputeTime = initObj.MaxComputeTime
      }
      else {
        this.MaxComputeTime = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mtsIntervalStatistics
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [AvgPeriod]
    bufferOffset = _serializer.float64(obj.AvgPeriod, buffer, bufferOffset);
    // Serialize message field [StdDevPeriod]
    bufferOffset = _serializer.float64(obj.StdDevPeriod, buffer, bufferOffset);
    // Serialize message field [MinPeriod]
    bufferOffset = _serializer.float64(obj.MinPeriod, buffer, bufferOffset);
    // Serialize message field [MaxPeriod]
    bufferOffset = _serializer.float64(obj.MaxPeriod, buffer, bufferOffset);
    // Serialize message field [MinComputeTime]
    bufferOffset = _serializer.float64(obj.MinComputeTime, buffer, bufferOffset);
    // Serialize message field [MaxComputeTime]
    bufferOffset = _serializer.float64(obj.MaxComputeTime, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mtsIntervalStatistics
    let len;
    let data = new mtsIntervalStatistics(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [AvgPeriod]
    data.AvgPeriod = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [StdDevPeriod]
    data.StdDevPeriod = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [MinPeriod]
    data.MinPeriod = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [MaxPeriod]
    data.MaxPeriod = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [MinComputeTime]
    data.MinComputeTime = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [MaxComputeTime]
    data.MaxComputeTime = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 48;
  }

  static datatype() {
    // Returns string type for a message object
    return 'cisst_msgs/mtsIntervalStatistics';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c68719e97d021e66b1d93de9fe44e44d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    
    # average period 
    float64 AvgPeriod
    # deviation on periodicity
    float64 StdDevPeriod
    # min and max time between
    float64 MinPeriod
    float64 MaxPeriod
    float64 MinComputeTime
    float64 MaxComputeTime
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mtsIntervalStatistics(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.AvgPeriod !== undefined) {
      resolved.AvgPeriod = msg.AvgPeriod;
    }
    else {
      resolved.AvgPeriod = 0.0
    }

    if (msg.StdDevPeriod !== undefined) {
      resolved.StdDevPeriod = msg.StdDevPeriod;
    }
    else {
      resolved.StdDevPeriod = 0.0
    }

    if (msg.MinPeriod !== undefined) {
      resolved.MinPeriod = msg.MinPeriod;
    }
    else {
      resolved.MinPeriod = 0.0
    }

    if (msg.MaxPeriod !== undefined) {
      resolved.MaxPeriod = msg.MaxPeriod;
    }
    else {
      resolved.MaxPeriod = 0.0
    }

    if (msg.MinComputeTime !== undefined) {
      resolved.MinComputeTime = msg.MinComputeTime;
    }
    else {
      resolved.MinComputeTime = 0.0
    }

    if (msg.MaxComputeTime !== undefined) {
      resolved.MaxComputeTime = msg.MaxComputeTime;
    }
    else {
      resolved.MaxComputeTime = 0.0
    }

    return resolved;
    }
};

module.exports = mtsIntervalStatistics;
