// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/mtsVFDataJointLimits.cdg

#include <sawConstraintController/mtsVFDataJointLimits.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataJointLimitsProxy);

mtsVFDataJointLimits::mtsVFDataJointLimits(void):
      mtsVFDataBase()
    , LowerLimits()
    , UpperLimits()
{}

mtsVFDataJointLimits::mtsVFDataJointLimits(const mtsVFDataJointLimits & other):
      mtsVFDataBase(other)
    , LowerLimits(other.LowerLimits)
    , UpperLimits(other.UpperLimits)
{}

mtsVFDataJointLimits::~mtsVFDataJointLimits(void){}


void mtsVFDataJointLimits::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsVFDataBase::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->LowerLimits);
    cmnSerializeRaw(outputStream__cdg, this->UpperLimits);
}


void mtsVFDataJointLimits::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsVFDataBase::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->LowerLimits);
    cmnDeSerializeRaw(inputStream__cdg, this->UpperLimits);
}


void mtsVFDataJointLimits::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsVFDataJointLimits::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsVFDataJointLimits >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsVFDataJointLimits >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 18 */
/* source line: 25 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataJointLimits & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataJointLimits & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataJointLimits::Copy(const mtsVFDataJointLimits & source__cdg) {
    cmnData<mtsVFDataBase >::Copy(*this, source__cdg);
    cmnData<vctDoubleVec >::Copy(this->LowerLimits, source__cdg.LowerLimits);
    cmnData<vctDoubleVec >::Copy(this->UpperLimits, source__cdg.UpperLimits);
}
void mtsVFDataJointLimits::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->LowerLimits, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->UpperLimits, outputStream__cdg);
}
void mtsVFDataJointLimits::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->LowerLimits, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->UpperLimits, inputStream__cdg, localFormat, remoteFormat);
}
void mtsVFDataJointLimits::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
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
    cmnData<vctDoubleVec >::SerializeText(this->LowerLimits, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->UpperLimits, outputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataJointLimits::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->LowerLimits, delimiter__cdg, prefix__cdg + "LowerLimits");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->UpperLimits, delimiter__cdg, prefix__cdg + "UpperLimits");
    return description__cdg.str();
}
void mtsVFDataJointLimits::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataJointLimits");
    }
    someData__cdg = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataJointLimits");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->LowerLimits, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataJointLimits");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->UpperLimits, inputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataJointLimits::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsVFDataJointLimits" << std::endl;
    description__cdg << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description__cdg << "  LowerLimits:" << cmnData<vctDoubleVec >::HumanReadable(this->LowerLimits);
    description__cdg << "  UpperLimits:" << cmnData<vctDoubleVec >::HumanReadable(this->UpperLimits);
    return description__cdg.str();
}
bool mtsVFDataJointLimits::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->LowerLimits)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->UpperLimits)
    ;
}
size_t mtsVFDataJointLimits::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vctDoubleVec >::ScalarNumber(this->LowerLimits)
           + cmnData<vctDoubleVec >::ScalarNumber(this->UpperLimits)
    ;
}
std::string mtsVFDataJointLimits::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
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
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataJointLimits index out of range"));
    return "";
}
double mtsVFDataJointLimits::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index_cdg - baseIndex__cdg);
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
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataJointLimits index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataJointLimits >::SerializeText(const mtsVFDataJointLimits & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataJointLimits::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->LowerLimits, jsonValue["LowerLimits"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->UpperLimits, jsonValue["UpperLimits"]);
}
template<>
void cmnDataJSON<mtsVFDataJointLimits >::DeSerializeText(mtsVFDataJointLimits & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataJointLimits::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    Json::Value field__cdg;
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

