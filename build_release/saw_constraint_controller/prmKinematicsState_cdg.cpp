// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/prmKinematicsState.cdg

#include <sawConstraintController/prmKinematicsState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmKinematicsStateProxy);

prmKinematicsState::prmKinematicsState(void):
      Frame()
    , CartesianVelocity()
    , AngularVelocity()
    , Jacobian()
    , InverseJacobian()
    , UserCount()
    , Name()
    , NeedsBase()
    , JointState(0)
{}

prmKinematicsState::prmKinematicsState(const prmKinematicsState & other):
      Frame(other.Frame)
    , CartesianVelocity(other.CartesianVelocity)
    , AngularVelocity(other.AngularVelocity)
    , Jacobian(other.Jacobian)
    , InverseJacobian(other.InverseJacobian)
    , UserCount(other.UserCount)
    , Name(other.Name)
    , NeedsBase(other.NeedsBase)
    , JointState(other.JointState)
{}

prmKinematicsState::~prmKinematicsState(void){}


void prmKinematicsState::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Frame);
    cmnSerializeRaw(outputStream__cdg, this->CartesianVelocity);
    cmnSerializeRaw(outputStream__cdg, this->AngularVelocity);
    cmnSerializeRaw(outputStream__cdg, this->Jacobian);
    cmnSerializeRaw(outputStream__cdg, this->InverseJacobian);
    cmnSerializeRaw(outputStream__cdg, this->UserCount);
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->NeedsBase);
}


void prmKinematicsState::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Frame);
    cmnDeSerializeRaw(inputStream__cdg, this->CartesianVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->AngularVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->Jacobian);
    cmnDeSerializeRaw(inputStream__cdg, this->InverseJacobian);
    cmnDeSerializeRaw(inputStream__cdg, this->UserCount);
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->NeedsBase);
}


void prmKinematicsState::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmKinematicsState::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmKinematicsState >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmKinematicsState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 13 */
/* source line: 20 */
/* source line: 27 */
/* source line: 34 */
/* source line: 41 */
/* source line: 48 */
/* source line: 55 */
/* source line: 62 */
/* source line: 69 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmKinematicsState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmKinematicsState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmKinematicsState::Copy(const prmKinematicsState & source__cdg) {
    cmnData<vctFrm3 >::Copy(this->Frame, source__cdg.Frame);
    cmnData<vct3 >::Copy(this->CartesianVelocity, source__cdg.CartesianVelocity);
    cmnData<vct3 >::Copy(this->AngularVelocity, source__cdg.AngularVelocity);
    cmnData<vctDoubleMat >::Copy(this->Jacobian, source__cdg.Jacobian);
    cmnData<vctDoubleMat >::Copy(this->InverseJacobian, source__cdg.InverseJacobian);
    cmnData<int >::Copy(this->UserCount, source__cdg.UserCount);
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<bool >::Copy(this->NeedsBase, source__cdg.NeedsBase);
}
void prmKinematicsState::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<vctFrm3 >::SerializeBinary(this->Frame, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->CartesianVelocity, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->AngularVelocity, outputStream__cdg);
    cmnData<vctDoubleMat >::SerializeBinary(this->Jacobian, outputStream__cdg);
    cmnData<vctDoubleMat >::SerializeBinary(this->InverseJacobian, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->UserCount, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->NeedsBase, outputStream__cdg);
}
void prmKinematicsState::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<vctFrm3 >::DeSerializeBinary(this->Frame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->CartesianVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->AngularVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->Jacobian, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->InverseJacobian, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->UserCount, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->NeedsBase, inputStream__cdg, localFormat, remoteFormat);
}
void prmKinematicsState::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::SerializeText(this->Frame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->CartesianVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->AngularVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::SerializeText(this->Jacobian, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::SerializeText(this->InverseJacobian, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->UserCount, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->NeedsBase, outputStream__cdg, delimiter__cdg);
}
std::string prmKinematicsState::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->Frame, delimiter__cdg, prefix__cdg + "Frame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->CartesianVelocity, delimiter__cdg, prefix__cdg + "CartesianVelocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->AngularVelocity, delimiter__cdg, prefix__cdg + "AngularVelocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->Jacobian, delimiter__cdg, prefix__cdg + "Jacobian");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->InverseJacobian, delimiter__cdg, prefix__cdg + "InverseJacobian");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->UserCount, delimiter__cdg, prefix__cdg + "UserCount");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->NeedsBase, delimiter__cdg, prefix__cdg + "NeedsBase");
    return description__cdg.str();
}
void prmKinematicsState::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsState");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->Frame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsState");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->CartesianVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsState");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->AngularVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsState");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->Jacobian, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsState");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->InverseJacobian, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsState");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->UserCount, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsState");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsState");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->NeedsBase, inputStream__cdg, delimiter__cdg);
}
std::string prmKinematicsState::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmKinematicsState" << std::endl;
    description__cdg << "  Frame:" << cmnData<vctFrm3 >::HumanReadable(this->Frame);
    description__cdg << "  CartesianVelocity:" << cmnData<vct3 >::HumanReadable(this->CartesianVelocity);
    description__cdg << "  AngularVelocity:" << cmnData<vct3 >::HumanReadable(this->AngularVelocity);
    description__cdg << "  Jacobian:" << cmnData<vctDoubleMat >::HumanReadable(this->Jacobian);
    description__cdg << "  InverseJacobian:" << cmnData<vctDoubleMat >::HumanReadable(this->InverseJacobian);
    description__cdg << "  UserCount:" << cmnData<int >::HumanReadable(this->UserCount);
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  NeedsBase:" << cmnData<bool >::HumanReadable(this->NeedsBase);
    return description__cdg.str();
}
bool prmKinematicsState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->Frame)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->CartesianVelocity)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->AngularVelocity)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->Jacobian)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->InverseJacobian)
           && cmnData<int >::ScalarNumberIsFixed(this->UserCount)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<bool >::ScalarNumberIsFixed(this->NeedsBase)
    ;
}
size_t prmKinematicsState::ScalarNumber(void) const {
    return 0
           + cmnData<vctFrm3 >::ScalarNumber(this->Frame)
           + cmnData<vct3 >::ScalarNumber(this->CartesianVelocity)
           + cmnData<vct3 >::ScalarNumber(this->AngularVelocity)
           + cmnData<vctDoubleMat >::ScalarNumber(this->Jacobian)
           + cmnData<vctDoubleMat >::ScalarNumber(this->InverseJacobian)
           + cmnData<int >::ScalarNumber(this->UserCount)
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<bool >::ScalarNumber(this->NeedsBase)
    ;
}
std::string prmKinematicsState::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->Frame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->Frame, index_cdg - baseIndex__cdg, prefix__cdg + "Frame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->CartesianVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->CartesianVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "CartesianVelocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->AngularVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->AngularVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "AngularVelocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->Jacobian);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->Jacobian, index_cdg - baseIndex__cdg, prefix__cdg + "Jacobian");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->InverseJacobian);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->InverseJacobian, index_cdg - baseIndex__cdg, prefix__cdg + "InverseJacobian");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->UserCount);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->UserCount, index_cdg - baseIndex__cdg, prefix__cdg + "UserCount");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->NeedsBase);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->NeedsBase, index_cdg - baseIndex__cdg, prefix__cdg + "NeedsBase");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmKinematicsState index out of range"));
    return "";
}
double prmKinematicsState::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->Frame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->Frame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->CartesianVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->CartesianVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->AngularVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->AngularVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->Jacobian);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->Jacobian, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->InverseJacobian);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->InverseJacobian, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->UserCount);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->UserCount, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->NeedsBase);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->NeedsBase, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmKinematicsState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmKinematicsState >::SerializeText(const prmKinematicsState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmKinematicsState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<vctFrm3 >::SerializeText(this->Frame, jsonValue["Frame"]);
    cmnDataJSON<vct3 >::SerializeText(this->CartesianVelocity, jsonValue["CartesianVelocity"]);
    cmnDataJSON<vct3 >::SerializeText(this->AngularVelocity, jsonValue["AngularVelocity"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->Jacobian, jsonValue["Jacobian"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->InverseJacobian, jsonValue["InverseJacobian"]);
    cmnDataJSON<int >::SerializeText(this->UserCount, jsonValue["UserCount"]);
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<bool >::SerializeText(this->NeedsBase, jsonValue["NeedsBase"]);
}
template<>
void cmnDataJSON<prmKinematicsState >::DeSerializeText(prmKinematicsState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmKinematicsState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Frame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm3 >::DeSerializeText(this->Frame, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm3>::DeSerializeText: empty JSON value for: Frame");
    };
    field__cdg = jsonValue["CartesianVelocity"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->CartesianVelocity, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: CartesianVelocity");
    };
    field__cdg = jsonValue["AngularVelocity"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->AngularVelocity, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: AngularVelocity");
    };
    field__cdg = jsonValue["Jacobian"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleMat >::DeSerializeText(this->Jacobian, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleMat>::DeSerializeText: empty JSON value for: Jacobian");
    };
    field__cdg = jsonValue["InverseJacobian"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleMat >::DeSerializeText(this->InverseJacobian, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleMat>::DeSerializeText: empty JSON value for: InverseJacobian");
    };
    field__cdg = jsonValue["UserCount"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->UserCount, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: UserCount");
    };
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["NeedsBase"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->NeedsBase, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: NeedsBase");
    };
}
#endif // CISST_HAS_JSON

/* source line: 95 */


    /*! Constructor */
    prmKinematicsState::prmKinematicsState(const std::string & n, prmJointState * js)
    {
        Name = n;
        UserCount = 0;
        JointState = js;
        NeedsBase = false;
    }

