// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/mtsVFDataAbsoluteJointLimits.cdg

#include <sawConstraintController/mtsVFDataAbsoluteJointLimits.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataAbsoluteJointLimitsProxy);

mtsVFDataAbsoluteJointLimits::mtsVFDataAbsoluteJointLimits(void):
      mtsVFDataBase()
    , CurrentJoints()
    , LowerLimits()
    , UpperLimits()
{}

mtsVFDataAbsoluteJointLimits::mtsVFDataAbsoluteJointLimits(const mtsVFDataAbsoluteJointLimits & other):
      mtsVFDataBase(other)
    , CurrentJoints(other.CurrentJoints)
    , LowerLimits(other.LowerLimits)
    , UpperLimits(other.UpperLimits)
{}

mtsVFDataAbsoluteJointLimits::~mtsVFDataAbsoluteJointLimits(void){}


void mtsVFDataAbsoluteJointLimits::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsVFDataBase::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->CurrentJoints);
    cmnSerializeRaw(outputStream__cdg, this->LowerLimits);
    cmnSerializeRaw(outputStream__cdg, this->UpperLimits);
}


void mtsVFDataAbsoluteJointLimits::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsVFDataBase::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->CurrentJoints);
    cmnDeSerializeRaw(inputStream__cdg, this->LowerLimits);
    cmnDeSerializeRaw(inputStream__cdg, this->UpperLimits);
}


void mtsVFDataAbsoluteJointLimits::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsVFDataAbsoluteJointLimits::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsVFDataAbsoluteJointLimits >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsVFDataAbsoluteJointLimits >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 18 */
/* source line: 25 */
/* source line: 32 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataAbsoluteJointLimits & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataAbsoluteJointLimits & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataAbsoluteJointLimits::Copy(const mtsVFDataAbsoluteJointLimits & source__cdg) {
    cmnData<mtsVFDataBase >::Copy(*this, source__cdg);
    cmnData<vctDoubleVec >::Copy(this->CurrentJoints, source__cdg.CurrentJoints);
    cmnData<vctDoubleVec >::Copy(this->LowerLimits, source__cdg.LowerLimits);
    cmnData<vctDoubleVec >::Copy(this->UpperLimits, source__cdg.UpperLimits);
}
void mtsVFDataAbsoluteJointLimits::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->CurrentJoints, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->LowerLimits, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->UpperLimits, outputStream__cdg);
}
void mtsVFDataAbsoluteJointLimits::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->CurrentJoints, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->LowerLimits, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->UpperLimits, inputStream__cdg, localFormat, remoteFormat);
}
void mtsVFDataAbsoluteJointLimits::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsVFDataBase >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->CurrentJoints, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->LowerLimits, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->UpperLimits, outputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataAbsoluteJointLimits::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsVFDataBase >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->CurrentJoints, delimiter__cdg, prefix__cdg + "CurrentJoints");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->LowerLimits, delimiter__cdg, prefix__cdg + "LowerLimits");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->UpperLimits, delimiter__cdg, prefix__cdg + "UpperLimits");
    return description__cdg.str();
}
void mtsVFDataAbsoluteJointLimits::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataAbsoluteJointLimits");
    }
    someData__cdg = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataAbsoluteJointLimits");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->CurrentJoints, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataAbsoluteJointLimits");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->LowerLimits, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataAbsoluteJointLimits");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->UpperLimits, inputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataAbsoluteJointLimits::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsVFDataAbsoluteJointLimits" << std::endl;
    description__cdg << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description__cdg << "  CurrentJoints:" << cmnData<vctDoubleVec >::HumanReadable(this->CurrentJoints);
    description__cdg << "  LowerLimits:" << cmnData<vctDoubleVec >::HumanReadable(this->LowerLimits);
    description__cdg << "  UpperLimits:" << cmnData<vctDoubleVec >::HumanReadable(this->UpperLimits);
    return description__cdg.str();
}
bool mtsVFDataAbsoluteJointLimits::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->CurrentJoints)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->LowerLimits)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->UpperLimits)
    ;
}
size_t mtsVFDataAbsoluteJointLimits::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vctDoubleVec >::ScalarNumber(this->CurrentJoints)
           + cmnData<vctDoubleVec >::ScalarNumber(this->LowerLimits)
           + cmnData<vctDoubleVec >::ScalarNumber(this->UpperLimits)
    ;
}
std::string mtsVFDataAbsoluteJointLimits::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->CurrentJoints);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->CurrentJoints, index_cdg - baseIndex__cdg, prefix__cdg + "CurrentJoints");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->LowerLimits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->LowerLimits, index_cdg - baseIndex__cdg, prefix__cdg + "LowerLimits");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->UpperLimits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->UpperLimits, index_cdg - baseIndex__cdg, prefix__cdg + "UpperLimits");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataAbsoluteJointLimits index out of range"));
    return "";
}
double mtsVFDataAbsoluteJointLimits::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->CurrentJoints);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->CurrentJoints, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->LowerLimits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->LowerLimits, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->UpperLimits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->UpperLimits, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataAbsoluteJointLimits index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataAbsoluteJointLimits >::SerializeText(const mtsVFDataAbsoluteJointLimits & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataAbsoluteJointLimits::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->CurrentJoints, jsonValue["CurrentJoints"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->LowerLimits, jsonValue["LowerLimits"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->UpperLimits, jsonValue["UpperLimits"]);
}
template<>
void cmnDataJSON<mtsVFDataAbsoluteJointLimits >::DeSerializeText(mtsVFDataAbsoluteJointLimits & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataAbsoluteJointLimits::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["CurrentJoints"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->CurrentJoints, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: CurrentJoints");
    };
    field__cdg = jsonValue["LowerLimits"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->LowerLimits, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: LowerLimits");
    };
    field__cdg = jsonValue["UpperLimits"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->UpperLimits, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: UpperLimits");
    };
}
#endif // CISST_HAS_JSON

