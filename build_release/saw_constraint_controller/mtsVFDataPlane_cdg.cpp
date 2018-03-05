// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/mtsVFDataPlane.cdg

#include <sawConstraintController/mtsVFDataPlane.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataPlaneProxy);

mtsVFDataPlane::mtsVFDataPlane(void):
      mtsVFDataBase()
    , Normal(vct3(0.0,0.0,1.0))
    , PointOnPlane(vct3(0.0,0.0,0.0))
    , CurrentPos()
{}

mtsVFDataPlane::mtsVFDataPlane(const mtsVFDataPlane & other):
      mtsVFDataBase(other)
    , Normal(other.Normal)
    , PointOnPlane(other.PointOnPlane)
    , CurrentPos(other.CurrentPos)
{}

mtsVFDataPlane::~mtsVFDataPlane(void){}


void mtsVFDataPlane::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsVFDataBase::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->Normal);
    cmnSerializeRaw(outputStream__cdg, this->PointOnPlane);
    cmnSerializeRaw(outputStream__cdg, this->CurrentPos);
}


void mtsVFDataPlane::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsVFDataBase::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->Normal);
    cmnDeSerializeRaw(inputStream__cdg, this->PointOnPlane);
    cmnDeSerializeRaw(inputStream__cdg, this->CurrentPos);
}


void mtsVFDataPlane::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsVFDataPlane::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsVFDataPlane >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsVFDataPlane >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 18 */
/* source line: 25 */
/* source line: 32 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataPlane & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataPlane & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataPlane::Copy(const mtsVFDataPlane & source__cdg) {
    cmnData<mtsVFDataBase >::Copy(*this, source__cdg);
    cmnData<vct3 >::Copy(this->Normal, source__cdg.Normal);
    cmnData<vct3 >::Copy(this->PointOnPlane, source__cdg.PointOnPlane);
    cmnData<vct3 >::Copy(this->CurrentPos, source__cdg.CurrentPos);
}
void mtsVFDataPlane::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->Normal, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->PointOnPlane, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->CurrentPos, outputStream__cdg);
}
void mtsVFDataPlane::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->Normal, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->PointOnPlane, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->CurrentPos, inputStream__cdg, localFormat, remoteFormat);
}
void mtsVFDataPlane::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
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
    cmnData<vct3 >::SerializeText(this->Normal, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->PointOnPlane, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->CurrentPos, outputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataPlane::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vct3 >::SerializeDescription(this->Normal, delimiter__cdg, prefix__cdg + "Normal");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->PointOnPlane, delimiter__cdg, prefix__cdg + "PointOnPlane");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->CurrentPos, delimiter__cdg, prefix__cdg + "CurrentPos");
    return description__cdg.str();
}
void mtsVFDataPlane::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataPlane");
    }
    someData__cdg = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataPlane");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->Normal, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataPlane");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->PointOnPlane, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataPlane");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->CurrentPos, inputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataPlane::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsVFDataPlane" << std::endl;
    description__cdg << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description__cdg << "  Normal:" << cmnData<vct3 >::HumanReadable(this->Normal);
    description__cdg << "  PointOnPlane:" << cmnData<vct3 >::HumanReadable(this->PointOnPlane);
    description__cdg << "  CurrentPos:" << cmnData<vct3 >::HumanReadable(this->CurrentPos);
    return description__cdg.str();
}
bool mtsVFDataPlane::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->Normal)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->PointOnPlane)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->CurrentPos)
    ;
}
size_t mtsVFDataPlane::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vct3 >::ScalarNumber(this->Normal)
           + cmnData<vct3 >::ScalarNumber(this->PointOnPlane)
           + cmnData<vct3 >::ScalarNumber(this->CurrentPos)
    ;
}
std::string mtsVFDataPlane::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->Normal);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->Normal, index_cdg - baseIndex__cdg, prefix__cdg + "Normal");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->PointOnPlane);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->PointOnPlane, index_cdg - baseIndex__cdg, prefix__cdg + "PointOnPlane");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->CurrentPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->CurrentPos, index_cdg - baseIndex__cdg, prefix__cdg + "CurrentPos");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataPlane index out of range"));
    return "";
}
double mtsVFDataPlane::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->Normal);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->Normal, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->PointOnPlane);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->PointOnPlane, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->CurrentPos);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->CurrentPos, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataPlane index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataPlane >::SerializeText(const mtsVFDataPlane & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataPlane::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vct3 >::SerializeText(this->Normal, jsonValue["Normal"]);
    cmnDataJSON<vct3 >::SerializeText(this->PointOnPlane, jsonValue["PointOnPlane"]);
    cmnDataJSON<vct3 >::SerializeText(this->CurrentPos, jsonValue["CurrentPos"]);
}
template<>
void cmnDataJSON<mtsVFDataPlane >::DeSerializeText(mtsVFDataPlane & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataPlane::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Normal"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->Normal, field__cdg);
    };
    field__cdg = jsonValue["PointOnPlane"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->PointOnPlane, field__cdg);
    };
    field__cdg = jsonValue["CurrentPos"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->CurrentPos, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: CurrentPos");
    };
}
#endif // CISST_HAS_JSON

