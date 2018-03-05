; Auto-generated. Do not edit!


(cl:in-package cisst_msgs-msg)


;//! \htmlinclude mtsIntervalStatistics.msg.html

(cl:defclass <mtsIntervalStatistics> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (AvgPeriod
    :reader AvgPeriod
    :initarg :AvgPeriod
    :type cl:float
    :initform 0.0)
   (StdDevPeriod
    :reader StdDevPeriod
    :initarg :StdDevPeriod
    :type cl:float
    :initform 0.0)
   (MinPeriod
    :reader MinPeriod
    :initarg :MinPeriod
    :type cl:float
    :initform 0.0)
   (MaxPeriod
    :reader MaxPeriod
    :initarg :MaxPeriod
    :type cl:float
    :initform 0.0)
   (MinComputeTime
    :reader MinComputeTime
    :initarg :MinComputeTime
    :type cl:float
    :initform 0.0)
   (MaxComputeTime
    :reader MaxComputeTime
    :initarg :MaxComputeTime
    :type cl:float
    :initform 0.0))
)

(cl:defclass mtsIntervalStatistics (<mtsIntervalStatistics>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mtsIntervalStatistics>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mtsIntervalStatistics)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cisst_msgs-msg:<mtsIntervalStatistics> is deprecated: use cisst_msgs-msg:mtsIntervalStatistics instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <mtsIntervalStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:header-val is deprecated.  Use cisst_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'AvgPeriod-val :lambda-list '(m))
(cl:defmethod AvgPeriod-val ((m <mtsIntervalStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:AvgPeriod-val is deprecated.  Use cisst_msgs-msg:AvgPeriod instead.")
  (AvgPeriod m))

(cl:ensure-generic-function 'StdDevPeriod-val :lambda-list '(m))
(cl:defmethod StdDevPeriod-val ((m <mtsIntervalStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:StdDevPeriod-val is deprecated.  Use cisst_msgs-msg:StdDevPeriod instead.")
  (StdDevPeriod m))

(cl:ensure-generic-function 'MinPeriod-val :lambda-list '(m))
(cl:defmethod MinPeriod-val ((m <mtsIntervalStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:MinPeriod-val is deprecated.  Use cisst_msgs-msg:MinPeriod instead.")
  (MinPeriod m))

(cl:ensure-generic-function 'MaxPeriod-val :lambda-list '(m))
(cl:defmethod MaxPeriod-val ((m <mtsIntervalStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:MaxPeriod-val is deprecated.  Use cisst_msgs-msg:MaxPeriod instead.")
  (MaxPeriod m))

(cl:ensure-generic-function 'MinComputeTime-val :lambda-list '(m))
(cl:defmethod MinComputeTime-val ((m <mtsIntervalStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:MinComputeTime-val is deprecated.  Use cisst_msgs-msg:MinComputeTime instead.")
  (MinComputeTime m))

(cl:ensure-generic-function 'MaxComputeTime-val :lambda-list '(m))
(cl:defmethod MaxComputeTime-val ((m <mtsIntervalStatistics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:MaxComputeTime-val is deprecated.  Use cisst_msgs-msg:MaxComputeTime instead.")
  (MaxComputeTime m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mtsIntervalStatistics>) ostream)
  "Serializes a message object of type '<mtsIntervalStatistics>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'AvgPeriod))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'StdDevPeriod))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'MinPeriod))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'MaxPeriod))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'MinComputeTime))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'MaxComputeTime))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mtsIntervalStatistics>) istream)
  "Deserializes a message object of type '<mtsIntervalStatistics>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'AvgPeriod) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'StdDevPeriod) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'MinPeriod) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'MaxPeriod) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'MinComputeTime) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'MaxComputeTime) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mtsIntervalStatistics>)))
  "Returns string type for a message object of type '<mtsIntervalStatistics>"
  "cisst_msgs/mtsIntervalStatistics")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mtsIntervalStatistics)))
  "Returns string type for a message object of type 'mtsIntervalStatistics"
  "cisst_msgs/mtsIntervalStatistics")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mtsIntervalStatistics>)))
  "Returns md5sum for a message object of type '<mtsIntervalStatistics>"
  "c68719e97d021e66b1d93de9fe44e44d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mtsIntervalStatistics)))
  "Returns md5sum for a message object of type 'mtsIntervalStatistics"
  "c68719e97d021e66b1d93de9fe44e44d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mtsIntervalStatistics>)))
  "Returns full string definition for message of type '<mtsIntervalStatistics>"
  (cl:format cl:nil "Header header~%~%# average period ~%float64 AvgPeriod~%# deviation on periodicity~%float64 StdDevPeriod~%# min and max time between~%float64 MinPeriod~%float64 MaxPeriod~%float64 MinComputeTime~%float64 MaxComputeTime~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mtsIntervalStatistics)))
  "Returns full string definition for message of type 'mtsIntervalStatistics"
  (cl:format cl:nil "Header header~%~%# average period ~%float64 AvgPeriod~%# deviation on periodicity~%float64 StdDevPeriod~%# min and max time between~%float64 MinPeriod~%float64 MaxPeriod~%float64 MinComputeTime~%float64 MaxComputeTime~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mtsIntervalStatistics>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     8
     8
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mtsIntervalStatistics>))
  "Converts a ROS message object to a list"
  (cl:list 'mtsIntervalStatistics
    (cl:cons ':header (header msg))
    (cl:cons ':AvgPeriod (AvgPeriod msg))
    (cl:cons ':StdDevPeriod (StdDevPeriod msg))
    (cl:cons ':MinPeriod (MinPeriod msg))
    (cl:cons ':MaxPeriod (MaxPeriod msg))
    (cl:cons ':MinComputeTime (MinComputeTime msg))
    (cl:cons ':MaxComputeTime (MaxComputeTime msg))
))
