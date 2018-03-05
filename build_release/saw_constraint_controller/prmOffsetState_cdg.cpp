// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/prmOffsetState.cdg

#include <sawConstraintController/prmOffsetState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 5 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmOffsetStateProxy);

prmOffsetState::prmOffsetState(void):
      prmSensorState()
    , mbaseName()
    , mbaseSensor(0)
    , moffsetFrame()
{}

prmOffsetState::prmOffsetState(const prmOffsetState & other):
      prmSensorState(other)
    , mbaseName(other.mbaseName)
    , mbaseSensor(other.mbaseSensor)
    , moffsetFrame(other.moffsetFrame)
{}

prmOffsetState::~prmOffsetState(void){}


void prmOffsetState::SerializeRaw(std::ostream & outputStream__cdg) const
{
    prmSensorState::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mbaseName);
    cmnSerializeRaw(outputStream__cdg, this->moffsetFrame);
}


void prmOffsetState::DeSerializeRaw(std::istream & inputStream__cdg)
{
    prmSensorState::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mbaseName);
    cmnDeSerializeRaw(inputStream__cdg, this->moffsetFrame);
}


void prmOffsetState::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmOffsetState::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmOffsetState >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmOffsetState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 12 */

/* accessors is set to: all */
void prmOffsetState::GetbaseName(std::string & placeHolder) const
{
    placeHolder = this->mbaseName;
}

void prmOffsetState::SetbaseName(const std::string & newValue)
{
    this->mbaseName = newValue;
}


/* accessors is set to: all */
const std::string & prmOffsetState::baseName(void) const
{
    return this->mbaseName;
}

std::string & prmOffsetState::baseName(void)
{
    return this->mbaseName;
}

/* source line: 18 */
/* source line: 27 */

/* accessors is set to: all */
void prmOffsetState::GetoffsetFrame(vctFrm3 & placeHolder) const
{
    placeHolder = this->moffsetFrame;
}

void prmOffsetState::SetoffsetFrame(const vctFrm3 & newValue)
{
    this->moffsetFrame = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmOffsetState::offsetFrame(void) const
{
    return this->moffsetFrame;
}

vctFrm3 & prmOffsetState::offsetFrame(void)
{
    return this->moffsetFrame;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmOffsetState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmOffsetState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmOffsetState::Copy(const prmOffsetState & source__cdg) {
    cmnData<prmSensorState >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->mbaseName, source__cdg.mbaseName);
    cmnData<vctFrm3 >::Copy(this->moffsetFrame, source__cdg.moffsetFrame);
}
void prmOffsetState::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<prmSensorState >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mbaseName, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->moffsetFrame, outputStream__cdg);
}
void prmOffsetState::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<prmSensorState >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mbaseName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->moffsetFrame, inputStream__cdg, localFormat, remoteFormat);
}
void prmOffsetState::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmSensorState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mbaseName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::SerializeText(this->moffsetFrame, outputStream__cdg, delimiter__cdg);
}
std::string prmOffsetState::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmSensorState >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mbaseName, delimiter__cdg, prefix__cdg + "baseName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->moffsetFrame, delimiter__cdg, prefix__cdg + "offsetFrame");
    return description__cdg.str();
}
void prmOffsetState::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmOffsetState");
    }
    someData__cdg = true;
    cmnData<prmSensorState >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmOffsetState");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mbaseName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmOffsetState");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->moffsetFrame, inputStream__cdg, delimiter__cdg);
}
std::string prmOffsetState::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmOffsetState" << std::endl;
    description__cdg << cmnData< prmSensorState >::HumanReadable(*this) << std::endl;
    description__cdg << "  baseName:" << cmnData<std::string >::HumanReadable(this->mbaseName);
    description__cdg << "  offsetFrame:" << cmnData<vctFrm3 >::HumanReadable(this->moffsetFrame);
    return description__cdg.str();
}
bool prmOffsetState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<prmSensorState >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mbaseName)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->moffsetFrame)
    ;
}
size_t prmOffsetState::ScalarNumber(void) const {
    return 0
           + cmnData< prmSensorState >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->mbaseName)
           + cmnData<vctFrm3 >::ScalarNumber(this->moffsetFrame)
    ;
}
std::string prmOffsetState::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<prmSensorState >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmSensorState >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mbaseName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mbaseName, index_cdg - baseIndex__cdg, prefix__cdg + "baseName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->moffsetFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->moffsetFrame, index_cdg - baseIndex__cdg, prefix__cdg + "offsetFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmOffsetState index out of range"));
    return "";
}
double prmOffsetState::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<prmSensorState >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmSensorState >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mbaseName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mbaseName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->moffsetFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->moffsetFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmOffsetState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmOffsetState >::SerializeText(const prmOffsetState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmOffsetState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<prmSensorState >::SerializeText(*(dynamic_cast<const prmSensorState*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->mbaseName, jsonValue["baseName"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->moffsetFrame, jsonValue["offsetFrame"]);
}
template<>
void cmnDataJSON<prmOffsetState >::DeSerializeText(prmOffsetState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmOffsetState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<prmSensorState >::DeSerializeText(*(dynamic_cast<prmSensorState*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["baseName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mbaseName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mbaseName");
    };
    field__cdg = jsonValue["offsetFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm3 >::DeSerializeText(this->moffsetFrame, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm3>::DeSerializeText: empty JSON value for: moffsetFrame");
    };
}
#endif // CISST_HAS_JSON

/* source line: 51 */


/*! Constructor
*/ 
prmOffsetState::prmOffsetState(const std::string & n, const std::string & bn, const vctFrm3 & of) : prmSensorState(n)
{	
    mbaseName = bn;
    moffsetFrame = of;
	NeedsBase = true;
}	

//! Finds the base sensor object by name and assigns it to the base sensor pointer
/*! LookupSensor
@param s map of names to sensors
*/
void prmOffsetState::LookupSensor(const std::map<std::string,prmSensorState *> & s)
{
    std::map<std::string,prmSensorState *>::const_iterator it;
    it = s.find(mbaseName);
    if(it != s.end())
    {
        mbaseSensor = it->second;
        NeedsBase = false;
    }
    else
    {
        std::cerr << "Base sensor \"" << mbaseName << "\" not found!" << std::endl;
    }
}

