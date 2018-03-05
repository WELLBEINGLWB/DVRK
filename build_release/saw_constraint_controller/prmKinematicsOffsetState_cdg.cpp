// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/prmKinematicsOffsetState.cdg

#include <sawConstraintController/prmKinematicsOffsetState.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 4 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmKinematicsOffsetStateProxy);

prmKinematicsOffsetState::prmKinematicsOffsetState(void):
      prmKinematicsState()
    , mbaseName()
    , mbaseKinematics(0)
    , moffset()
{}

prmKinematicsOffsetState::prmKinematicsOffsetState(const prmKinematicsOffsetState & other):
      prmKinematicsState(other)
    , mbaseName(other.mbaseName)
    , mbaseKinematics(other.mbaseKinematics)
    , moffset(other.moffset)
{}

prmKinematicsOffsetState::~prmKinematicsOffsetState(void){}


void prmKinematicsOffsetState::SerializeRaw(std::ostream & outputStream__cdg) const
{
    prmKinematicsState::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mbaseName);
    cmnSerializeRaw(outputStream__cdg, this->moffset);
}


void prmKinematicsOffsetState::DeSerializeRaw(std::istream & inputStream__cdg)
{
    prmKinematicsState::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mbaseName);
    cmnDeSerializeRaw(inputStream__cdg, this->moffset);
}


void prmKinematicsOffsetState::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmKinematicsOffsetState::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmKinematicsOffsetState >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmKinematicsOffsetState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 11 */

/* accessors is set to: all */
void prmKinematicsOffsetState::GetbaseName(std::string & placeHolder) const
{
    placeHolder = this->mbaseName;
}

void prmKinematicsOffsetState::SetbaseName(const std::string & newValue)
{
    this->mbaseName = newValue;
}


/* accessors is set to: all */
const std::string & prmKinematicsOffsetState::baseName(void) const
{
    return this->mbaseName;
}

std::string & prmKinematicsOffsetState::baseName(void)
{
    return this->mbaseName;
}

/* source line: 17 */
/* source line: 26 */

/* accessors is set to: all */
void prmKinematicsOffsetState::Getoffset(vctFrm3 & placeHolder) const
{
    placeHolder = this->moffset;
}

void prmKinematicsOffsetState::Setoffset(const vctFrm3 & newValue)
{
    this->moffset = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmKinematicsOffsetState::offset(void) const
{
    return this->moffset;
}

vctFrm3 & prmKinematicsOffsetState::offset(void)
{
    return this->moffset;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmKinematicsOffsetState & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmKinematicsOffsetState & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmKinematicsOffsetState::Copy(const prmKinematicsOffsetState & source__cdg) {
    cmnData<prmKinematicsState >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->mbaseName, source__cdg.mbaseName);
    cmnData<vctFrm3 >::Copy(this->moffset, source__cdg.moffset);
}
void prmKinematicsOffsetState::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<prmKinematicsState >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mbaseName, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->moffset, outputStream__cdg);
}
void prmKinematicsOffsetState::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<prmKinematicsState >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mbaseName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->moffset, inputStream__cdg, localFormat, remoteFormat);
}
void prmKinematicsOffsetState::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmKinematicsState >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mbaseName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::SerializeText(this->moffset, outputStream__cdg, delimiter__cdg);
}
std::string prmKinematicsOffsetState::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmKinematicsState >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mbaseName, delimiter__cdg, prefix__cdg + "baseName");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->moffset, delimiter__cdg, prefix__cdg + "offset");
    return description__cdg.str();
}
void prmKinematicsOffsetState::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsOffsetState");
    }
    someData__cdg = true;
    cmnData<prmKinematicsState >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsOffsetState");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mbaseName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmKinematicsOffsetState");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->moffset, inputStream__cdg, delimiter__cdg);
}
std::string prmKinematicsOffsetState::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmKinematicsOffsetState" << std::endl;
    description__cdg << cmnData< prmKinematicsState >::HumanReadable(*this) << std::endl;
    description__cdg << "  baseName:" << cmnData<std::string >::HumanReadable(this->mbaseName);
    description__cdg << "  offset:" << cmnData<vctFrm3 >::HumanReadable(this->moffset);
    return description__cdg.str();
}
bool prmKinematicsOffsetState::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<prmKinematicsState >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mbaseName)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->moffset)
    ;
}
size_t prmKinematicsOffsetState::ScalarNumber(void) const {
    return 0
           + cmnData< prmKinematicsState >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->mbaseName)
           + cmnData<vctFrm3 >::ScalarNumber(this->moffset)
    ;
}
std::string prmKinematicsOffsetState::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<prmKinematicsState >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmKinematicsState >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mbaseName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mbaseName, index_cdg - baseIndex__cdg, prefix__cdg + "baseName");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->moffset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->moffset, index_cdg - baseIndex__cdg, prefix__cdg + "offset");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmKinematicsOffsetState index out of range"));
    return "";
}
double prmKinematicsOffsetState::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<prmKinematicsState >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmKinematicsState >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mbaseName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mbaseName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->moffset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->moffset, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmKinematicsOffsetState index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmKinematicsOffsetState >::SerializeText(const prmKinematicsOffsetState & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmKinematicsOffsetState::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<prmKinematicsState >::SerializeText(*(dynamic_cast<const prmKinematicsState*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->mbaseName, jsonValue["baseName"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->moffset, jsonValue["offset"]);
}
template<>
void cmnDataJSON<prmKinematicsOffsetState >::DeSerializeText(prmKinematicsOffsetState & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmKinematicsOffsetState::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    cmnDataJSON<prmKinematicsState >::DeSerializeText(*(dynamic_cast<prmKinematicsState*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["baseName"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mbaseName, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mbaseName");
    };
    field__cdg = jsonValue["offset"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm3 >::DeSerializeText(this->moffset, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm3>::DeSerializeText: empty JSON value for: moffset");
    };
}
#endif // CISST_HAS_JSON

/* source line: 50 */


/*! Constructor
*/ 
prmKinematicsOffsetState::prmKinematicsOffsetState(const std::string & n, const std::string & bn, const vctFrm3 & o) : prmKinematicsState()
{	
	Name = n;
	UserCount = 0;
    moffset = o;
    mbaseName = bn;
	NeedsBase = true;
}	

//! Finds the base kinematics object by name and assigns it to the base kinematics pointer
/*! LookupKinematics
@param k map of names to kinematics
*/
void prmKinematicsOffsetState::LookupKinematics(const std::map<std::string,prmKinematicsState *> & k)
{
    std::map<std::string,prmKinematicsState *>::const_iterator it;
    it = k.find(mbaseName);
    if(it != k.end())
    {
        mbaseKinematics = it->second;
        NeedsBase = false;
    }
    else
    {
        std::cerr << "Base kinematics \"" << mbaseName << "\" not found!" << std::endl;
    }
}


