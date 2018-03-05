;; Auto-generated. Do not edit!


(when (boundp 'cisst_msgs::mtsIntervalStatistics)
  (if (not (find-package "CISST_MSGS"))
    (make-package "CISST_MSGS"))
  (shadow 'mtsIntervalStatistics (find-package "CISST_MSGS")))
(unless (find-package "CISST_MSGS::MTSINTERVALSTATISTICS")
  (make-package "CISST_MSGS::MTSINTERVALSTATISTICS"))

(in-package "ROS")
;;//! \htmlinclude mtsIntervalStatistics.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass cisst_msgs::mtsIntervalStatistics
  :super ros::object
  :slots (_header _AvgPeriod _StdDevPeriod _MinPeriod _MaxPeriod _MinComputeTime _MaxComputeTime ))

(defmethod cisst_msgs::mtsIntervalStatistics
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:AvgPeriod __AvgPeriod) 0.0)
    ((:StdDevPeriod __StdDevPeriod) 0.0)
    ((:MinPeriod __MinPeriod) 0.0)
    ((:MaxPeriod __MaxPeriod) 0.0)
    ((:MinComputeTime __MinComputeTime) 0.0)
    ((:MaxComputeTime __MaxComputeTime) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _AvgPeriod (float __AvgPeriod))
   (setq _StdDevPeriod (float __StdDevPeriod))
   (setq _MinPeriod (float __MinPeriod))
   (setq _MaxPeriod (float __MaxPeriod))
   (setq _MinComputeTime (float __MinComputeTime))
   (setq _MaxComputeTime (float __MaxComputeTime))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:AvgPeriod
   (&optional __AvgPeriod)
   (if __AvgPeriod (setq _AvgPeriod __AvgPeriod)) _AvgPeriod)
  (:StdDevPeriod
   (&optional __StdDevPeriod)
   (if __StdDevPeriod (setq _StdDevPeriod __StdDevPeriod)) _StdDevPeriod)
  (:MinPeriod
   (&optional __MinPeriod)
   (if __MinPeriod (setq _MinPeriod __MinPeriod)) _MinPeriod)
  (:MaxPeriod
   (&optional __MaxPeriod)
   (if __MaxPeriod (setq _MaxPeriod __MaxPeriod)) _MaxPeriod)
  (:MinComputeTime
   (&optional __MinComputeTime)
   (if __MinComputeTime (setq _MinComputeTime __MinComputeTime)) _MinComputeTime)
  (:MaxComputeTime
   (&optional __MaxComputeTime)
   (if __MaxComputeTime (setq _MaxComputeTime __MaxComputeTime)) _MaxComputeTime)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64 _AvgPeriod
    8
    ;; float64 _StdDevPeriod
    8
    ;; float64 _MinPeriod
    8
    ;; float64 _MaxPeriod
    8
    ;; float64 _MinComputeTime
    8
    ;; float64 _MaxComputeTime
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64 _AvgPeriod
       (sys::poke _AvgPeriod (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _StdDevPeriod
       (sys::poke _StdDevPeriod (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _MinPeriod
       (sys::poke _MinPeriod (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _MaxPeriod
       (sys::poke _MaxPeriod (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _MinComputeTime
       (sys::poke _MinComputeTime (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _MaxComputeTime
       (sys::poke _MaxComputeTime (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64 _AvgPeriod
     (setq _AvgPeriod (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _StdDevPeriod
     (setq _StdDevPeriod (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _MinPeriod
     (setq _MinPeriod (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _MaxPeriod
     (setq _MaxPeriod (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _MinComputeTime
     (setq _MinComputeTime (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _MaxComputeTime
     (setq _MaxComputeTime (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get cisst_msgs::mtsIntervalStatistics :md5sum-) "c68719e97d021e66b1d93de9fe44e44d")
(setf (get cisst_msgs::mtsIntervalStatistics :datatype-) "cisst_msgs/mtsIntervalStatistics")
(setf (get cisst_msgs::mtsIntervalStatistics :definition-)
      "Header header

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

")



(provide :cisst_msgs/mtsIntervalStatistics "c68719e97d021e66b1d93de9fe44e44d")


