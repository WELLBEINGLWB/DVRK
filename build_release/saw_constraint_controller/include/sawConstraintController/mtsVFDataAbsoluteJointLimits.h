// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/mtsVFDataAbsoluteJointLimits.cdg

#pragma once
#ifndef _sawConstraintController_mtsVFDataAbsoluteJointLimits_h
#define _sawConstraintController_mtsVFDataAbsoluteJointLimits_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>


/* source line: 1 */
/* source line: 1 */

#include <sawConstraintController/mtsVFDataBase.h>
// Always include last!
#include <sawConstraintController/sawConstraintControllerExport.h>

/* source line: 7 */
class CISST_EXPORT mtsVFDataAbsoluteJointLimits: public mtsVFDataBase
{
 /* default constructors and destructors. */
 public:
    mtsVFDataAbsoluteJointLimits(void);
    mtsVFDataAbsoluteJointLimits(const mtsVFDataAbsoluteJointLimits & other);
    ~mtsVFDataAbsoluteJointLimits();

/* source line: 18 */
 public:
    vctDoubleVec CurrentJoints; // CurrentJoints
/* source line: 25 */
 public:
    vctDoubleVec LowerLimits; // LowerLimits
/* source line: 32 */
 public:
    vctDoubleVec UpperLimits; // UpperLimits
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsVFDataAbsoluteJointLimits & source);
    void SerializeBinary(std::ostream & outputStream) const throw (std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) throw (std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const throw (std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') throw (std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const throw (std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const throw (std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON

}; // mtsVFDataAbsoluteJointLimits

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsVFDataAbsoluteJointLimits> mtsVFDataAbsoluteJointLimitsProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsVFDataAbsoluteJointLimitsProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataAbsoluteJointLimits & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataAbsoluteJointLimits & placeHolder);
/* data functions */
template <> class cmnData<mtsVFDataAbsoluteJointLimits > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsVFDataAbsoluteJointLimits DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) throw (std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') throw (std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') throw (std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") throw (std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) throw (std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const mtsVFDataAbsoluteJointLimits & data) {
    outputStream << cmnData<mtsVFDataAbsoluteJointLimits >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsVFDataAbsoluteJointLimits >::SerializeText(const mtsVFDataAbsoluteJointLimits & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsVFDataAbsoluteJointLimits >::DeSerializeText(mtsVFDataAbsoluteJointLimits & data, const Json::Value & jsonValue) throw (std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawConstraintController_mtsVFDataAbsoluteJointLimits_h