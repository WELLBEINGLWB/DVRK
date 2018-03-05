// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/mtsVFDataCartesianTranslation.cdg

#include <sawConstraintController/mtsVFDataCartesianTranslation.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataCartesianProxy);

mtsVFDataCartesian::mtsVFDataCartesian(void):
      mtsVFDataBase()
    , OffsetVector()
{}

mtsVFDataCartesian::mtsVFDataCartesian(const mtsVFDataCartesian & other):
      mtsVFDataBase(other)
    , OffsetVector(other.OffsetVector)
{}

mtsVFDataCartesian::~mtsVFDataCartesian(void){}


void mtsVFDataCartesian::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsVFDataBase::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->OffsetVector);
}


void mtsVFDataCartesian::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsVFDataBase::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->OffsetVector);
}


void mtsVFDataCartesian::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsVFDataCartesian::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsVFDataCartesian >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsVFDataCartesian >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 18 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataCartesian & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataCartesian & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataCartesian::Copy(const mtsVFDataCartesian & source__cdg) {
    cmnData<mtsVFDataBase >::Copy(*this, source__cdg);
    cmnData<vct3 >::Copy(this->OffsetVector, source__cdg.OffsetVector);
}
void mtsVFDataCartesian::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->OffsetVector, outputStream__cdg);
}
void mtsVFDataCartesian::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<mtsVFDataBase >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->OffsetVector, inputStream__cdg, localFormat, remoteFormat);
}
void mtsVFDataCartesian::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
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
    cmnData<vct3 >::SerializeText(this->OffsetVector, outputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataCartesian::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vct3 >::SerializeDescription(this->OffsetVector, delimiter__cdg, prefix__cdg + "OffsetVector");
    return description__cdg.str();
}
void mtsVFDataCartesian::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataCartesian");
    }
    someData__cdg = true;
    cmnData<mtsVFDataBase >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataCartesian");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->OffsetVector, inputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataCartesian::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsVFDataCartesian" << std::endl;
    description__cdg << cmnData< mtsVFDataBase >::HumanReadable(*this) << std::endl;
    description__cdg << "  OffsetVector:" << cmnData<vct3 >::HumanReadable(this->OffsetVector);
    return description__cdg.str();
}
bool mtsVFDataCartesian::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsVFDataBase >::ScalarNumberIsFixed(*this)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->OffsetVector)
    ;
}
size_t mtsVFDataCartesian::ScalarNumber(void) const {
    return 0
           + cmnData< mtsVFDataBase >::ScalarNumber(*this)
           + cmnData<vct3 >::ScalarNumber(this->OffsetVector)
    ;
}
std::string mtsVFDataCartesian::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->OffsetVector);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->OffsetVector, index_cdg - baseIndex__cdg, prefix__cdg + "OffsetVector");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataCartesian index out of range"));
    return "";
}
double mtsVFDataCartesian::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsVFDataBase >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsVFDataBase >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->OffsetVector);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->OffsetVector, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataCartesian index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataCartesian >::SerializeText(const mtsVFDataCartesian & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataCartesian::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsVFDataBase >::SerializeText(*(dynamic_cast<const mtsVFDataBase*>(this)), jsonValue);
    cmnDataJSON<vct3 >::SerializeText(this->OffsetVector, jsonValue["OffsetVector"]);
}
template<>
void cmnDataJSON<mtsVFDataCartesian >::DeSerializeText(mtsVFDataCartesian & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataCartesian::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<mtsVFDataBase >::DeSerializeText(*(dynamic_cast<mtsVFDataBase*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["OffsetVector"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->OffsetVector, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: OffsetVector");
    };
}
#endif // CISST_HAS_JSON

