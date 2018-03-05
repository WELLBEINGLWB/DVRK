// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/prmForceOffsetState.cdg

#include <sawConstraintController/prmForceOffsetState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmForceOffsetStateProxy);

prmForceOffsetState::prmForceOffsetState(void):
      prmOffsetState()
{}

prmForceOffsetState::prmForceOffsetState(const prmForceOffsetState & other):
      prmOffsetState(other)
{}

prmForceOffsetState::~prmForceOffsetState(void){}


void prmForceOffsetState::SerializeRaw(std::ostream & outputStream__cdg) const
{
    prmOffsetState::SerializeRaw(outputStream__cdg);
}


void prmForceOffsetState::DeSerializeRaw(std::istream & inputStream__cdg)
{
    prmOffsetState::DeSerializeRaw(inputStream__cdg);
}


void prmForceOffsetState::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmForceOffsetState::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmForceOffsetState >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmForceOffsetState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmForceOffsetState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmForceOffsetState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmForceOffsetState::Copy(const prmForceOffsetState & source__cdg) {
    cmnData<prmOffsetState >::Copy(*this, source__cdg);
}
void prmForceOffsetState::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<prmOffsetState >::SerializeBinary(*this, outputStream__cdg);
}
void prmForceOffsetState::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<prmOffsetState >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
}
void prmForceOffsetState::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmOffsetState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
}
std::string prmForceOffsetState::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmOffsetState >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    return description__cdg.str();
}
void prmForceOffsetState::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForceOffsetState");
    }
    someData__cdg = true;
    cmnData<prmOffsetState >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
}
std::string prmForceOffsetState::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmForceOffsetState" << std::endl;
    description__cdg << cmnData< prmOffsetState >::HumanReadable(*this) << std::endl;
    return description__cdg.str();
}
bool prmForceOffsetState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<prmOffsetState >::ScalarNumberIsFixed(*this)
    ;
}
size_t prmForceOffsetState::ScalarNumber(void) const {
    return 0
           + cmnData< prmOffsetState >::ScalarNumber(*this)
    ;
}
std::string prmForceOffsetState::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<prmOffsetState >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmOffsetState >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmForceOffsetState index out of range"));
    return "";
}
double prmForceOffsetState::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<prmOffsetState >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmOffsetState >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmForceOffsetState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmForceOffsetState >::SerializeText(const prmForceOffsetState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmForceOffsetState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<prmOffsetState >::SerializeText(*(dynamic_cast<const prmOffsetState*>(this)), jsonValue);
}
template<>
void cmnDataJSON<prmForceOffsetState >::DeSerializeText(prmForceOffsetState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmForceOffsetState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<prmOffsetState >::DeSerializeText(*(dynamic_cast<prmOffsetState*>(this)), jsonValue);
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON

/* source line: 27 */


//! Updates values based on those of the base force sensor
/*! Update
*/
void prmForceOffsetState::Update()
{
	Values.SetSize(6);
	vct3 baseValuesTrans, baseValuesRot, f;
	for(size_t i = 0; i < 3; i++)
	{
        baseValuesTrans[i] = mbaseSensor->Values[i];
        baseValuesRot[i] = mbaseSensor->Values[3+i];
	}
    f = moffsetFrame.Rotation() * baseValuesTrans;
    Values[0] = f[0];
    Values[1] = f[1];
    Values[2] = f[2];
    f = moffsetFrame.Rotation() * baseValuesRot;
    Values[3] = f[0];
    Values[4] = f[1];
    Values[5] = f[2];
}

