// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/mtsVFDataRCM.cdg

#include <sawConstraintController/mtsVFDataRCM.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataRCMProxy);

mtsVFDataRCM::mtsVFDataRCM(void):
      mtsVFDataBase()
    , TipFrame()
    , RCM_Point()
    , JacClosest()
{}

mtsVFDataRCM::mtsVFDataRCM(const mtsVFDataRCM & other):
      mtsVFDataBase(other)
    , TipFrame(other.TipFrame)
    , RCM_Point(other.RCM_Point)
    , JacClosest(other.JacClosest)
{}

mtsVFDataRCM::~mtsVFDataRCM(void){}


void mtsVFDataRCM::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsVFDataBase::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->TipFrame);
    cmnSerializeRaw(outputStream__cdg, this->RCM_Point);
    cmnSerializeRaw(outputStream__cdg, this->JacClosest);
}


void mtsVFDataRCM::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsVFDataBase::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->TipFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->RCM_Point);
    cmnDeSerializeRaw(inputStream__cdg, this->JacClosest);
}


void mtsVFDataRCM::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsVFDataRCM::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsVFDataRCM >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsVFDataRCM >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 16 */
/* source line: 22 */
/* source line: 28 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataRCM & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataRCM & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataRCM::Copy(const mtsVFDataRCM & source__cdg) {
    cmnData<mtsVFDataBase >::Copy(*this, source__cdg);
    cmnData<vctFrm3 >::Copy(this->TipFrame, source__cdg.TipFrame);
    cmnData<vct3 >::Copy(this->RCM_Point, source__cdg.RCM_Point);
    cmnData<vctDoubleMat >::Copy(this->JacClosest, source__cdg.JacClosest);
}
void mtsVFDataRCM::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->TipFrame, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->RCM_Point, outputStream__cdg);
    cmnData<vctDoubleMat >::SerializeBinary(this->JacClosest, outputStream__cdg);
}
void mtsVFDataRCM::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->TipFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->RCM_Point, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->JacClosest, inputStream__cdg, localFormat, remoteFormat);
}
void mtsVFDataRCM::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
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
    cmnData<vctFrm3 >::SerializeText(this->TipFrame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->RCM_Point, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::SerializeText(this->JacClosest, outputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataRCM::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->TipFrame, delimiter__cdg, prefix__cdg + "TipFrame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->RCM_Point, delimiter__cdg, prefix__cdg + "RCM_Point");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->JacClosest, delimiter__cdg, prefix__cdg + "JacClosest");
    return description__cdg.str();
}
void mtsVFDataRCM::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataRCM");
    }
    someData__cdg = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataRCM");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->TipFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataRCM");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->RCM_Point, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataRCM");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->JacClosest, inputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataRCM::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsVFDataRCM" << std::endl;
    description__cdg << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description__cdg << "  TipFrame:" << cmnData<vctFrm3 >::HumanReadable(this->TipFrame);
    description__cdg << "  RCM_Point:" << cmnData<vct3 >::HumanReadable(this->RCM_Point);
    description__cdg << "  JacClosest:" << cmnData<vctDoubleMat >::HumanReadable(this->JacClosest);
    return description__cdg.str();
}
bool mtsVFDataRCM::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->TipFrame)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->RCM_Point)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->JacClosest)
    ;
}
size_t mtsVFDataRCM::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vctFrm3 >::ScalarNumber(this->TipFrame)
           + cmnData<vct3 >::ScalarNumber(this->RCM_Point)
           + cmnData<vctDoubleMat >::ScalarNumber(this->JacClosest)
    ;
}
std::string mtsVFDataRCM::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->TipFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->TipFrame, index_cdg - baseIndex__cdg, prefix__cdg + "TipFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->RCM_Point);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->RCM_Point, index_cdg - baseIndex__cdg, prefix__cdg + "RCM_Point");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->JacClosest);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->JacClosest, index_cdg - baseIndex__cdg, prefix__cdg + "JacClosest");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataRCM index out of range"));
    return "";
}
double mtsVFDataRCM::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->TipFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->TipFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->RCM_Point);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->RCM_Point, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->JacClosest);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->JacClosest, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataRCM index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataRCM >::SerializeText(const mtsVFDataRCM & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataRCM::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctFrm3 >::SerializeText(this->TipFrame, jsonValue["TipFrame"]);
    cmnDataJSON<vct3 >::SerializeText(this->RCM_Point, jsonValue["RCM_Point"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->JacClosest, jsonValue["JacClosest"]);
}
template<>
void cmnDataJSON<mtsVFDataRCM >::DeSerializeText(mtsVFDataRCM & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataRCM::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["TipFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm3 >::DeSerializeText(this->TipFrame, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm3>::DeSerializeText: empty JSON value for: TipFrame");
    };
    field__cdg = jsonValue["RCM_Point"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->RCM_Point, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: RCM_Point");
    };
    field__cdg = jsonValue["JacClosest"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleMat >::DeSerializeText(this->JacClosest, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleMat>::DeSerializeText: empty JSON value for: JacClosest");
    };
}
#endif // CISST_HAS_JSON

