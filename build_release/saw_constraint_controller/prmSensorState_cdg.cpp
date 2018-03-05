// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/prmSensorState.cdg

#include <sawConstraintController/prmSensorState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmSensorStateProxy);

prmSensorState::prmSensorState(void):
      Name()
    , Values()
    , UserCount()
    , NeedsBase()
{}

prmSensorState::prmSensorState(const prmSensorState & other):
      Name(other.Name)
    , Values(other.Values)
    , UserCount(other.UserCount)
    , NeedsBase(other.NeedsBase)
{}

prmSensorState::~prmSensorState(void){}


void prmSensorState::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->Values);
    cmnSerializeRaw(outputStream__cdg, this->UserCount);
    cmnSerializeRaw(outputStream__cdg, this->NeedsBase);
}


void prmSensorState::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->Values);
    cmnDeSerializeRaw(inputStream__cdg, this->UserCount);
    cmnDeSerializeRaw(inputStream__cdg, this->NeedsBase);
}


void prmSensorState::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmSensorState::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmSensorState >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmSensorState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 13 */
/* source line: 20 */
/* source line: 27 */
/* source line: 34 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmSensorState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmSensorState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmSensorState::Copy(const prmSensorState & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<vctDynamicVector<double> >::Copy(this->Values, source__cdg.Values);
    cmnData<int >::Copy(this->UserCount, source__cdg.UserCount);
    cmnData<bool >::Copy(this->NeedsBase, source__cdg.NeedsBase);
}
void prmSensorState::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->Values, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->UserCount, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->NeedsBase, outputStream__cdg);
}
void prmSensorState::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->Values, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->UserCount, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->NeedsBase, inputStream__cdg, localFormat, remoteFormat);
}
void prmSensorState::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->Values, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->UserCount, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->NeedsBase, outputStream__cdg, delimiter__cdg);
}
std::string prmSensorState::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->Values, delimiter__cdg, prefix__cdg + "Values");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->UserCount, delimiter__cdg, prefix__cdg + "UserCount");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->NeedsBase, delimiter__cdg, prefix__cdg + "NeedsBase");
    return description__cdg.str();
}
void prmSensorState::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmSensorState");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmSensorState");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->Values, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmSensorState");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->UserCount, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmSensorState");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->NeedsBase, inputStream__cdg, delimiter__cdg);
}
std::string prmSensorState::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmSensorState" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  Values:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->Values);
    description__cdg << "  UserCount:" << cmnData<int >::HumanReadable(this->UserCount);
    description__cdg << "  NeedsBase:" << cmnData<bool >::HumanReadable(this->NeedsBase);
    return description__cdg.str();
}
bool prmSensorState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->Values)
           && cmnData<int >::ScalarNumberIsFixed(this->UserCount)
           && cmnData<bool >::ScalarNumberIsFixed(this->NeedsBase)
    ;
}
size_t prmSensorState::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->Values)
           + cmnData<int >::ScalarNumber(this->UserCount)
           + cmnData<bool >::ScalarNumber(this->NeedsBase)
    ;
}
std::string prmSensorState::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->Values);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->Values, index_cdg - baseIndex__cdg, prefix__cdg + "Values");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->UserCount);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->UserCount, index_cdg - baseIndex__cdg, prefix__cdg + "UserCount");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->NeedsBase);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->NeedsBase, index_cdg - baseIndex__cdg, prefix__cdg + "NeedsBase");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmSensorState index out of range"));
    return "";
}
double prmSensorState::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->Values);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->Values, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->UserCount);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->UserCount, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->NeedsBase);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->NeedsBase, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmSensorState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmSensorState >::SerializeText(const prmSensorState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmSensorState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->Values, jsonValue["Values"]);
    cmnDataJSON<int >::SerializeText(this->UserCount, jsonValue["UserCount"]);
    cmnDataJSON<bool >::SerializeText(this->NeedsBase, jsonValue["NeedsBase"]);
}
template<>
void cmnDataJSON<prmSensorState >::DeSerializeText(prmSensorState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmSensorState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["Values"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->Values, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: Values");
    };
    field__cdg = jsonValue["UserCount"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->UserCount, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: UserCount");
    };
    field__cdg = jsonValue["NeedsBase"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->NeedsBase, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: NeedsBase");
    };
}
#endif // CISST_HAS_JSON

/* source line: 54 */


    /*! Constructor
    */
    prmSensorState::prmSensorState(const std::string & n)
    {
        Name = n;
    }


