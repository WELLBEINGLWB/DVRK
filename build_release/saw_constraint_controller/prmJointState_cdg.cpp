// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/prmJointState.cdg

#include <sawConstraintController/prmJointState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 4 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmJointStateProxy);

prmJointState::prmJointState(void):
      JointPosition()
    , JointVelocity()
    , JointAcceleration()
{}

prmJointState::prmJointState(const prmJointState & other):
      JointPosition(other.JointPosition)
    , JointVelocity(other.JointVelocity)
    , JointAcceleration(other.JointAcceleration)
{}

prmJointState::~prmJointState(void){}


void prmJointState::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->JointPosition);
    cmnSerializeRaw(outputStream__cdg, this->JointVelocity);
    cmnSerializeRaw(outputStream__cdg, this->JointAcceleration);
}


void prmJointState::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->JointPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->JointVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->JointAcceleration);
}


void prmJointState::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmJointState::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmJointState >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmJointState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 7 */
/* source line: 13 */
/* source line: 19 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmJointState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmJointState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmJointState::Copy(const prmJointState & source__cdg) {
    cmnData<vctDoubleVec >::Copy(this->JointPosition, source__cdg.JointPosition);
    cmnData<vctDoubleVec >::Copy(this->JointVelocity, source__cdg.JointVelocity);
    cmnData<vctDoubleVec >::Copy(this->JointAcceleration, source__cdg.JointAcceleration);
}
void prmJointState::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<vctDoubleVec >::SerializeBinary(this->JointPosition, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->JointVelocity, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->JointAcceleration, outputStream__cdg);
}
void prmJointState::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<vctDoubleVec >::DeSerializeBinary(this->JointPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->JointVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->JointAcceleration, inputStream__cdg, localFormat, remoteFormat);
}
void prmJointState::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->JointPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->JointVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->JointAcceleration, outputStream__cdg, delimiter__cdg);
}
std::string prmJointState::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->JointPosition, delimiter__cdg, prefix__cdg + "JointPosition");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->JointVelocity, delimiter__cdg, prefix__cdg + "JointVelocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->JointAcceleration, delimiter__cdg, prefix__cdg + "JointAcceleration");
    return description__cdg.str();
}
void prmJointState::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmJointState");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->JointPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmJointState");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->JointVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmJointState");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->JointAcceleration, inputStream__cdg, delimiter__cdg);
}
std::string prmJointState::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmJointState" << std::endl;
    description__cdg << "  JointPosition:" << cmnData<vctDoubleVec >::HumanReadable(this->JointPosition);
    description__cdg << "  JointVelocity:" << cmnData<vctDoubleVec >::HumanReadable(this->JointVelocity);
    description__cdg << "  JointAcceleration:" << cmnData<vctDoubleVec >::HumanReadable(this->JointAcceleration);
    return description__cdg.str();
}
bool prmJointState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->JointPosition)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->JointVelocity)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->JointAcceleration)
    ;
}
size_t prmJointState::ScalarNumber(void) const {
    return 0
           + cmnData<vctDoubleVec >::ScalarNumber(this->JointPosition)
           + cmnData<vctDoubleVec >::ScalarNumber(this->JointVelocity)
           + cmnData<vctDoubleVec >::ScalarNumber(this->JointAcceleration)
    ;
}
std::string prmJointState::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->JointPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->JointPosition, index_cdg - baseIndex__cdg, prefix__cdg + "JointPosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->JointVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->JointVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "JointVelocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->JointAcceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->JointAcceleration, index_cdg - baseIndex__cdg, prefix__cdg + "JointAcceleration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmJointState index out of range"));
    return "";
}
double prmJointState::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->JointPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->JointPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->JointVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->JointVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->JointAcceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->JointAcceleration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmJointState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmJointState >::SerializeText(const prmJointState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmJointState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<vctDoubleVec >::SerializeText(this->JointPosition, jsonValue["JointPosition"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->JointVelocity, jsonValue["JointVelocity"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->JointAcceleration, jsonValue["JointAcceleration"]);
}
template<>
void cmnDataJSON<prmJointState >::DeSerializeText(prmJointState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmJointState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["JointPosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->JointPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: JointPosition");
    };
    field__cdg = jsonValue["JointVelocity"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->JointVelocity, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: JointVelocity");
    };
    field__cdg = jsonValue["JointAcceleration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->JointAcceleration, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: JointAcceleration");
    };
}
#endif // CISST_HAS_JSON

