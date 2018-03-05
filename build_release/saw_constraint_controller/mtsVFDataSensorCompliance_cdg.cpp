// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/mtsVFDataSensorCompliance.cdg

#include <sawConstraintController/mtsVFDataSensorCompliance.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataSensorComplianceProxy);

mtsVFDataSensorCompliance::mtsVFDataSensorCompliance(void):
      mtsVFDataBase()
    , Gain()
    , SensorSelections()
{}

mtsVFDataSensorCompliance::mtsVFDataSensorCompliance(const mtsVFDataSensorCompliance & other):
      mtsVFDataBase(other)
    , Gain(other.Gain)
    , SensorSelections(other.SensorSelections)
{}

mtsVFDataSensorCompliance::~mtsVFDataSensorCompliance(void){}


void mtsVFDataSensorCompliance::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsVFDataBase::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->Gain);
    cmnSerializeRaw(outputStream__cdg, this->SensorSelections);
}


void mtsVFDataSensorCompliance::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsVFDataBase::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->Gain);
    cmnDeSerializeRaw(inputStream__cdg, this->SensorSelections);
}


void mtsVFDataSensorCompliance::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsVFDataSensorCompliance::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsVFDataSensorCompliance >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsVFDataSensorCompliance >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 15 */
/* source line: 20 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataSensorCompliance & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataSensorCompliance & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataSensorCompliance::Copy(const mtsVFDataSensorCompliance & source__cdg) {
    cmnData<mtsVFDataBase >::Copy(*this, source__cdg);
    cmnData<vctDoubleMat >::Copy(this->Gain, source__cdg.Gain);
    cmnData<vctDynamicVector<size_t> >::Copy(this->SensorSelections, source__cdg.SensorSelections);
}
void mtsVFDataSensorCompliance::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDoubleMat >::SerializeBinary(this->Gain, outputStream__cdg);
    cmnData<vctDynamicVector<size_t> >::SerializeBinary(this->SensorSelections, outputStream__cdg);
}
void mtsVFDataSensorCompliance::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->Gain, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<size_t> >::DeSerializeBinary(this->SensorSelections, inputStream__cdg, localFormat, remoteFormat);
}
void mtsVFDataSensorCompliance::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
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
    cmnData<vctDoubleMat >::SerializeText(this->Gain, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<size_t> >::SerializeText(this->SensorSelections, outputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataSensorCompliance::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->Gain, delimiter__cdg, prefix__cdg + "Gain");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<size_t> >::SerializeDescription(this->SensorSelections, delimiter__cdg, prefix__cdg + "SensorSelections");
    return description__cdg.str();
}
void mtsVFDataSensorCompliance::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataSensorCompliance");
    }
    someData__cdg = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataSensorCompliance");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->Gain, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataSensorCompliance");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<size_t> >::DeSerializeText(this->SensorSelections, inputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataSensorCompliance::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsVFDataSensorCompliance" << std::endl;
    description__cdg << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description__cdg << "  Gain:" << cmnData<vctDoubleMat >::HumanReadable(this->Gain);
    description__cdg << "  SensorSelections:" << cmnData<vctDynamicVector<size_t> >::HumanReadable(this->SensorSelections);
    return description__cdg.str();
}
bool mtsVFDataSensorCompliance::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->Gain)
           && cmnData<vctDynamicVector<size_t> >::ScalarNumberIsFixed(this->SensorSelections)
    ;
}
size_t mtsVFDataSensorCompliance::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vctDoubleMat >::ScalarNumber(this->Gain)
           + cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->SensorSelections)
    ;
}
std::string mtsVFDataSensorCompliance::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->Gain);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->Gain, index_cdg - baseIndex__cdg, prefix__cdg + "Gain");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->SensorSelections);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<size_t> >::ScalarDescription(this->SensorSelections, index_cdg - baseIndex__cdg, prefix__cdg + "SensorSelections");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataSensorCompliance index out of range"));
    return "";
}
double mtsVFDataSensorCompliance::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->Gain);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->Gain, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->SensorSelections);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<size_t> >::Scalar(this->SensorSelections, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataSensorCompliance index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataSensorCompliance >::SerializeText(const mtsVFDataSensorCompliance & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataSensorCompliance::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->Gain, jsonValue["Gain"]);
    cmnDataJSON<vctDynamicVector<size_t> >::SerializeText(this->SensorSelections, jsonValue["SensorSelections"]);
}
template<>
void cmnDataJSON<mtsVFDataSensorCompliance >::DeSerializeText(mtsVFDataSensorCompliance & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataSensorCompliance::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Gain"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleMat >::DeSerializeText(this->Gain, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleMat>::DeSerializeText: empty JSON value for: Gain");
    };
    field__cdg = jsonValue["SensorSelections"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<size_t> >::DeSerializeText(this->SensorSelections, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<size_t>>::DeSerializeText: empty JSON value for: SensorSelections");
    };
}
#endif // CISST_HAS_JSON

/* source line: 33 */

    /*! Constructor
    \param name String name of object
    \param importance Number representing this virtual fixture's relative importance
    */
    mtsVFDataSensorCompliance::mtsVFDataSensorCompliance(const std::string & name, const std::string & kinName,
                                                         const std::string & forceSensorName, const std::string & overallGainName,
                                                         const vctDoubleMat & g, const vctDoubleVec & selections) : mtsVFDataBase()
    {
        Name = name;
        KinNames.push_back(kinName);
        SensorNames.push_back(forceSensorName);
        SensorNames.push_back(overallGainName);
        Gain = g;
        SensorSelections = selections;
    }

