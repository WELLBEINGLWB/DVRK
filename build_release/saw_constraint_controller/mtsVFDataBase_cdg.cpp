// file automatically generated, do not modify
// cisst version: 1.0.9
// source file: /home/jiameng/catkin_dvrk/src/cisst-saw/sawConstraintController/components/code/mtsVFDataBase.cdg

#include <sawConstraintController/mtsVFDataBase.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>

/* source line: 1 */

/* source line: 7 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsVFDataBaseProxy);

mtsVFDataBase::mtsVFDataBase(void):
      Name()
    , Importance(1.0)
    , Active(true)
    , KinNames()
    , SensorNames()
    , SlackLimits()
    , SlackCosts()
    , NumSlacks(0)
    , DOFSelections()
    , ObjectiveRows(0)
    , IneqConstraintRows(0)
    , EqConstraintRows(0)
    , ObjectiveMatrix()
    , ObjectiveVector()
    , IneqConstraintMatrix()
    , IneqConstraintVector()
    , EqConstraintMatrix()
    , EqConstraintVector()
{}

mtsVFDataBase::mtsVFDataBase(const mtsVFDataBase & other):
      Name(other.Name)
    , Importance(other.Importance)
    , Active(other.Active)
    , KinNames(other.KinNames)
    , SensorNames(other.SensorNames)
    , SlackLimits(other.SlackLimits)
    , SlackCosts(other.SlackCosts)
    , NumSlacks(other.NumSlacks)
    , DOFSelections(other.DOFSelections)
    , ObjectiveRows(other.ObjectiveRows)
    , IneqConstraintRows(other.IneqConstraintRows)
    , EqConstraintRows(other.EqConstraintRows)
    , ObjectiveMatrix(other.ObjectiveMatrix)
    , ObjectiveVector(other.ObjectiveVector)
    , IneqConstraintMatrix(other.IneqConstraintMatrix)
    , IneqConstraintVector(other.IneqConstraintVector)
    , EqConstraintMatrix(other.EqConstraintMatrix)
    , EqConstraintVector(other.EqConstraintVector)
{}

mtsVFDataBase::~mtsVFDataBase(void){}


void mtsVFDataBase::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->Importance);
    cmnSerializeRaw(outputStream__cdg, this->Active);
    cmnSerializeRaw(outputStream__cdg, this->KinNames);
    cmnSerializeRaw(outputStream__cdg, this->SensorNames);
    cmnSerializeRaw(outputStream__cdg, this->SlackLimits);
    cmnSerializeRaw(outputStream__cdg, this->SlackCosts);
    cmnSerializeSizeRaw(outputStream__cdg, this->NumSlacks);
    cmnSerializeRaw(outputStream__cdg, this->DOFSelections);
    cmnSerializeSizeRaw(outputStream__cdg, this->ObjectiveRows);
    cmnSerializeSizeRaw(outputStream__cdg, this->IneqConstraintRows);
    cmnSerializeSizeRaw(outputStream__cdg, this->EqConstraintRows);
    cmnSerializeRaw(outputStream__cdg, this->ObjectiveMatrix);
    cmnSerializeRaw(outputStream__cdg, this->ObjectiveVector);
    cmnSerializeRaw(outputStream__cdg, this->IneqConstraintMatrix);
    cmnSerializeRaw(outputStream__cdg, this->IneqConstraintVector);
    cmnSerializeRaw(outputStream__cdg, this->EqConstraintMatrix);
    cmnSerializeRaw(outputStream__cdg, this->EqConstraintVector);
}


void mtsVFDataBase::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->Importance);
    cmnDeSerializeRaw(inputStream__cdg, this->Active);
    cmnDeSerializeRaw(inputStream__cdg, this->KinNames);
    cmnDeSerializeRaw(inputStream__cdg, this->SensorNames);
    cmnDeSerializeRaw(inputStream__cdg, this->SlackLimits);
    cmnDeSerializeRaw(inputStream__cdg, this->SlackCosts);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->NumSlacks);
    cmnDeSerializeRaw(inputStream__cdg, this->DOFSelections);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->ObjectiveRows);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->IneqConstraintRows);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->EqConstraintRows);
    cmnDeSerializeRaw(inputStream__cdg, this->ObjectiveMatrix);
    cmnDeSerializeRaw(inputStream__cdg, this->ObjectiveVector);
    cmnDeSerializeRaw(inputStream__cdg, this->IneqConstraintMatrix);
    cmnDeSerializeRaw(inputStream__cdg, this->IneqConstraintVector);
    cmnDeSerializeRaw(inputStream__cdg, this->EqConstraintMatrix);
    cmnDeSerializeRaw(inputStream__cdg, this->EqConstraintVector);
}


void mtsVFDataBase::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsVFDataBase::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsVFDataBase >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsVFDataBase >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 12 */
/* source line: 19 */
/* source line: 27 */
/* source line: 35 */
/* source line: 42 */
/* source line: 49 */
/* source line: 56 */
/* source line: 63 */
/* source line: 72 */
/* source line: 79 */
/* source line: 88 */
/* source line: 97 */
/* source line: 106 */
/* source line: 113 */
/* source line: 120 */
/* source line: 127 */
/* source line: 134 */
/* source line: 141 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsVFDataBase & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsVFDataBase & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsVFDataBase::Copy(const mtsVFDataBase & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<double >::Copy(this->Importance, source__cdg.Importance);
    cmnData<bool >::Copy(this->Active, source__cdg.Active);
    cmnData<std::vector<std::string> >::Copy(this->KinNames, source__cdg.KinNames);
    cmnData<std::vector<std::string> >::Copy(this->SensorNames, source__cdg.SensorNames);
    cmnData<vctDynamicVector<double> >::Copy(this->SlackLimits, source__cdg.SlackLimits);
    cmnData<vctDynamicVector<double> >::Copy(this->SlackCosts, source__cdg.SlackCosts);
    cmnData<size_t >::Copy(this->NumSlacks, source__cdg.NumSlacks);
    cmnData<vctDynamicVector<size_t> >::Copy(this->DOFSelections, source__cdg.DOFSelections);
    cmnData<size_t >::Copy(this->ObjectiveRows, source__cdg.ObjectiveRows);
    cmnData<size_t >::Copy(this->IneqConstraintRows, source__cdg.IneqConstraintRows);
    cmnData<size_t >::Copy(this->EqConstraintRows, source__cdg.EqConstraintRows);
    cmnData<vctDynamicMatrix<double> >::Copy(this->ObjectiveMatrix, source__cdg.ObjectiveMatrix);
    cmnData<vctDynamicVector<double> >::Copy(this->ObjectiveVector, source__cdg.ObjectiveVector);
    cmnData<vctDynamicMatrix<double> >::Copy(this->IneqConstraintMatrix, source__cdg.IneqConstraintMatrix);
    cmnData<vctDynamicVector<double> >::Copy(this->IneqConstraintVector, source__cdg.IneqConstraintVector);
    cmnData<vctDynamicMatrix<double> >::Copy(this->EqConstraintMatrix, source__cdg.EqConstraintMatrix);
    cmnData<vctDynamicVector<double> >::Copy(this->EqConstraintVector, source__cdg.EqConstraintVector);
}
void mtsVFDataBase::SerializeBinary(std::ostream & outputStream__cdg) const throw (std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Importance, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->Active, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->KinNames, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->SensorNames, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->SlackLimits, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->SlackCosts, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->NumSlacks, outputStream__cdg);
    cmnData<vctDynamicVector<size_t> >::SerializeBinary(this->DOFSelections, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->ObjectiveRows, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->IneqConstraintRows, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->EqConstraintRows, outputStream__cdg);
    cmnData<vctDynamicMatrix<double> >::SerializeBinary(this->ObjectiveMatrix, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->ObjectiveVector, outputStream__cdg);
    cmnData<vctDynamicMatrix<double> >::SerializeBinary(this->IneqConstraintMatrix, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->IneqConstraintVector, outputStream__cdg);
    cmnData<vctDynamicMatrix<double> >::SerializeBinary(this->EqConstraintMatrix, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->EqConstraintVector, outputStream__cdg);
}
void mtsVFDataBase::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) throw (std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Importance, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->Active, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->KinNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->SensorNames, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->SlackLimits, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->SlackCosts, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->NumSlacks, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<size_t> >::DeSerializeBinary(this->DOFSelections, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->ObjectiveRows, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->IneqConstraintRows, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->EqConstraintRows, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicMatrix<double> >::DeSerializeBinary(this->ObjectiveMatrix, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->ObjectiveVector, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicMatrix<double> >::DeSerializeBinary(this->IneqConstraintMatrix, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->IneqConstraintVector, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicMatrix<double> >::DeSerializeBinary(this->EqConstraintMatrix, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->EqConstraintVector, inputStream__cdg, localFormat, remoteFormat);
}
void mtsVFDataBase::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const throw (std::runtime_error) {
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
    cmnData<double >::SerializeText(this->Importance, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->Active, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::SerializeText(this->KinNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::SerializeText(this->SensorNames, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->SlackLimits, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->SlackCosts, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->NumSlacks, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<size_t> >::SerializeText(this->DOFSelections, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->ObjectiveRows, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->IneqConstraintRows, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->EqConstraintRows, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicMatrix<double> >::SerializeText(this->ObjectiveMatrix, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->ObjectiveVector, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicMatrix<double> >::SerializeText(this->IneqConstraintMatrix, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->IneqConstraintVector, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicMatrix<double> >::SerializeText(this->EqConstraintMatrix, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->EqConstraintVector, outputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataBase::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<double >::SerializeDescription(this->Importance, delimiter__cdg, prefix__cdg + "Importance");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->Active, delimiter__cdg, prefix__cdg + "Active");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->KinNames, delimiter__cdg, prefix__cdg + "KinNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->SensorNames, delimiter__cdg, prefix__cdg + "SensorNames");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->SlackLimits, delimiter__cdg, prefix__cdg + "SlackLimits");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->SlackCosts, delimiter__cdg, prefix__cdg + "SlackCosts");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->NumSlacks, delimiter__cdg, prefix__cdg + "NumSlacks");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<size_t> >::SerializeDescription(this->DOFSelections, delimiter__cdg, prefix__cdg + "DOFSelections");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->ObjectiveRows, delimiter__cdg, prefix__cdg + "ObjectiveRows");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->IneqConstraintRows, delimiter__cdg, prefix__cdg + "IneqConstraintRows");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->EqConstraintRows, delimiter__cdg, prefix__cdg + "EqConstraintRows");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicMatrix<double> >::SerializeDescription(this->ObjectiveMatrix, delimiter__cdg, prefix__cdg + "ObjectiveMatrix");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->ObjectiveVector, delimiter__cdg, prefix__cdg + "ObjectiveVector");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicMatrix<double> >::SerializeDescription(this->IneqConstraintMatrix, delimiter__cdg, prefix__cdg + "IneqConstraintMatrix");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->IneqConstraintVector, delimiter__cdg, prefix__cdg + "IneqConstraintVector");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicMatrix<double> >::SerializeDescription(this->EqConstraintMatrix, delimiter__cdg, prefix__cdg + "EqConstraintMatrix");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->EqConstraintVector, delimiter__cdg, prefix__cdg + "EqConstraintVector");
    return description__cdg.str();
}
void mtsVFDataBase::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) throw (std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Importance, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->Active, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->KinNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->SensorNames, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->SlackLimits, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->SlackCosts, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->NumSlacks, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<size_t> >::DeSerializeText(this->DOFSelections, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->ObjectiveRows, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->IneqConstraintRows, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->EqConstraintRows, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicMatrix<double> >::DeSerializeText(this->ObjectiveMatrix, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->ObjectiveVector, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicMatrix<double> >::DeSerializeText(this->IneqConstraintMatrix, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->IneqConstraintVector, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicMatrix<double> >::DeSerializeText(this->EqConstraintMatrix, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsVFDataBase");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->EqConstraintVector, inputStream__cdg, delimiter__cdg);
}
std::string mtsVFDataBase::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsVFDataBase" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  Importance:" << cmnData<double >::HumanReadable(this->Importance);
    description__cdg << "  Active:" << cmnData<bool >::HumanReadable(this->Active);
    description__cdg << "  KinNames:" << cmnData<std::vector<std::string> >::HumanReadable(this->KinNames);
    description__cdg << "  SensorNames:" << cmnData<std::vector<std::string> >::HumanReadable(this->SensorNames);
    description__cdg << "  SlackLimits:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->SlackLimits);
    description__cdg << "  SlackCosts:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->SlackCosts);
    description__cdg << "  NumSlacks:" << cmnData<size_t >::HumanReadable(this->NumSlacks);
    description__cdg << "  DOFSelections:" << cmnData<vctDynamicVector<size_t> >::HumanReadable(this->DOFSelections);
    description__cdg << "  ObjectiveRows:" << cmnData<size_t >::HumanReadable(this->ObjectiveRows);
    description__cdg << "  IneqConstraintRows:" << cmnData<size_t >::HumanReadable(this->IneqConstraintRows);
    description__cdg << "  EqConstraintRows:" << cmnData<size_t >::HumanReadable(this->EqConstraintRows);
    description__cdg << "  ObjectiveMatrix:" << cmnData<vctDynamicMatrix<double> >::HumanReadable(this->ObjectiveMatrix);
    description__cdg << "  ObjectiveVector:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->ObjectiveVector);
    description__cdg << "  IneqConstraintMatrix:" << cmnData<vctDynamicMatrix<double> >::HumanReadable(this->IneqConstraintMatrix);
    description__cdg << "  IneqConstraintVector:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->IneqConstraintVector);
    description__cdg << "  EqConstraintMatrix:" << cmnData<vctDynamicMatrix<double> >::HumanReadable(this->EqConstraintMatrix);
    description__cdg << "  EqConstraintVector:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->EqConstraintVector);
    return description__cdg.str();
}
bool mtsVFDataBase::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<double >::ScalarNumberIsFixed(this->Importance)
           && cmnData<bool >::ScalarNumberIsFixed(this->Active)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->KinNames)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->SensorNames)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->SlackLimits)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->SlackCosts)
           && cmnData<size_t >::ScalarNumberIsFixed(this->NumSlacks)
           && cmnData<vctDynamicVector<size_t> >::ScalarNumberIsFixed(this->DOFSelections)
           && cmnData<size_t >::ScalarNumberIsFixed(this->ObjectiveRows)
           && cmnData<size_t >::ScalarNumberIsFixed(this->IneqConstraintRows)
           && cmnData<size_t >::ScalarNumberIsFixed(this->EqConstraintRows)
           && cmnData<vctDynamicMatrix<double> >::ScalarNumberIsFixed(this->ObjectiveMatrix)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->ObjectiveVector)
           && cmnData<vctDynamicMatrix<double> >::ScalarNumberIsFixed(this->IneqConstraintMatrix)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->IneqConstraintVector)
           && cmnData<vctDynamicMatrix<double> >::ScalarNumberIsFixed(this->EqConstraintMatrix)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->EqConstraintVector)
    ;
}
size_t mtsVFDataBase::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<double >::ScalarNumber(this->Importance)
           + cmnData<bool >::ScalarNumber(this->Active)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->KinNames)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->SensorNames)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackLimits)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackCosts)
           + cmnData<size_t >::ScalarNumber(this->NumSlacks)
           + cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->DOFSelections)
           + cmnData<size_t >::ScalarNumber(this->ObjectiveRows)
           + cmnData<size_t >::ScalarNumber(this->IneqConstraintRows)
           + cmnData<size_t >::ScalarNumber(this->EqConstraintRows)
           + cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->ObjectiveMatrix)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->ObjectiveVector)
           + cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->IneqConstraintMatrix)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->IneqConstraintVector)
           + cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->EqConstraintMatrix)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->EqConstraintVector)
    ;
}
std::string mtsVFDataBase::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const throw (std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Importance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Importance, index_cdg - baseIndex__cdg, prefix__cdg + "Importance");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->Active);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->Active, index_cdg - baseIndex__cdg, prefix__cdg + "Active");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->KinNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->KinNames, index_cdg - baseIndex__cdg, prefix__cdg + "KinNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->SensorNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->SensorNames, index_cdg - baseIndex__cdg, prefix__cdg + "SensorNames");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackLimits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->SlackLimits, index_cdg - baseIndex__cdg, prefix__cdg + "SlackLimits");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackCosts);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->SlackCosts, index_cdg - baseIndex__cdg, prefix__cdg + "SlackCosts");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->NumSlacks);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->NumSlacks, index_cdg - baseIndex__cdg, prefix__cdg + "NumSlacks");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->DOFSelections);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<size_t> >::ScalarDescription(this->DOFSelections, index_cdg - baseIndex__cdg, prefix__cdg + "DOFSelections");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->ObjectiveRows);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->ObjectiveRows, index_cdg - baseIndex__cdg, prefix__cdg + "ObjectiveRows");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->IneqConstraintRows);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->IneqConstraintRows, index_cdg - baseIndex__cdg, prefix__cdg + "IneqConstraintRows");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->EqConstraintRows);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->EqConstraintRows, index_cdg - baseIndex__cdg, prefix__cdg + "EqConstraintRows");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->ObjectiveMatrix);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicMatrix<double> >::ScalarDescription(this->ObjectiveMatrix, index_cdg - baseIndex__cdg, prefix__cdg + "ObjectiveMatrix");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->ObjectiveVector);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->ObjectiveVector, index_cdg - baseIndex__cdg, prefix__cdg + "ObjectiveVector");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->IneqConstraintMatrix);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicMatrix<double> >::ScalarDescription(this->IneqConstraintMatrix, index_cdg - baseIndex__cdg, prefix__cdg + "IneqConstraintMatrix");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->IneqConstraintVector);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->IneqConstraintVector, index_cdg - baseIndex__cdg, prefix__cdg + "IneqConstraintVector");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->EqConstraintMatrix);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicMatrix<double> >::ScalarDescription(this->EqConstraintMatrix, index_cdg - baseIndex__cdg, prefix__cdg + "EqConstraintMatrix");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->EqConstraintVector);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->EqConstraintVector, index_cdg - baseIndex__cdg, prefix__cdg + "EqConstraintVector");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsVFDataBase index out of range"));
    return "";
}
double mtsVFDataBase::Scalar(const size_t index_cdg) const throw (std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Importance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Importance, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->Active);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->Active, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->KinNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->KinNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->SensorNames);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->SensorNames, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackLimits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->SlackLimits, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->SlackCosts);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->SlackCosts, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->NumSlacks);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->NumSlacks, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<size_t> >::ScalarNumber(this->DOFSelections);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<size_t> >::Scalar(this->DOFSelections, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->ObjectiveRows);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->ObjectiveRows, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->IneqConstraintRows);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->IneqConstraintRows, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->EqConstraintRows);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->EqConstraintRows, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->ObjectiveMatrix);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicMatrix<double> >::Scalar(this->ObjectiveMatrix, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->ObjectiveVector);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->ObjectiveVector, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->IneqConstraintMatrix);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicMatrix<double> >::Scalar(this->IneqConstraintMatrix, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->IneqConstraintVector);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->IneqConstraintVector, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicMatrix<double> >::ScalarNumber(this->EqConstraintMatrix);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicMatrix<double> >::Scalar(this->EqConstraintMatrix, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->EqConstraintVector);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->EqConstraintVector, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsVFDataBase index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsVFDataBase >::SerializeText(const mtsVFDataBase & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsVFDataBase::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<double >::SerializeText(this->Importance, jsonValue["Importance"]);
    cmnDataJSON<bool >::SerializeText(this->Active, jsonValue["Active"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->KinNames, jsonValue["KinNames"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->SensorNames, jsonValue["SensorNames"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->SlackLimits, jsonValue["SlackLimits"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->SlackCosts, jsonValue["SlackCosts"]);
    cmnDataJSON<size_t >::SerializeText(this->NumSlacks, jsonValue["NumSlacks"]);
    cmnDataJSON<vctDynamicVector<size_t> >::SerializeText(this->DOFSelections, jsonValue["DOFSelections"]);
    cmnDataJSON<size_t >::SerializeText(this->ObjectiveRows, jsonValue["ObjectiveRows"]);
    cmnDataJSON<size_t >::SerializeText(this->IneqConstraintRows, jsonValue["IneqConstraintRows"]);
    cmnDataJSON<size_t >::SerializeText(this->EqConstraintRows, jsonValue["EqConstraintRows"]);
    cmnDataJSON<vctDynamicMatrix<double> >::SerializeText(this->ObjectiveMatrix, jsonValue["ObjectiveMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->ObjectiveVector, jsonValue["ObjectiveVector"]);
    cmnDataJSON<vctDynamicMatrix<double> >::SerializeText(this->IneqConstraintMatrix, jsonValue["IneqConstraintMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->IneqConstraintVector, jsonValue["IneqConstraintVector"]);
    cmnDataJSON<vctDynamicMatrix<double> >::SerializeText(this->EqConstraintMatrix, jsonValue["EqConstraintMatrix"]);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->EqConstraintVector, jsonValue["EqConstraintVector"]);
}
template<>
void cmnDataJSON<mtsVFDataBase >::DeSerializeText(mtsVFDataBase & data, const Json::Value & jsonValue) throw (std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsVFDataBase::DeSerializeTextJSON(const Json::Value & jsonValue) throw (std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["Importance"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Importance, field__cdg);
    };
    field__cdg = jsonValue["Active"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->Active, field__cdg);
    };
    field__cdg = jsonValue["KinNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->KinNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<std::string>>::DeSerializeText: empty JSON value for: KinNames");
    };
    field__cdg = jsonValue["SensorNames"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->SensorNames, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<std::string>>::DeSerializeText: empty JSON value for: SensorNames");
    };
    field__cdg = jsonValue["SlackLimits"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->SlackLimits, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: SlackLimits");
    };
    field__cdg = jsonValue["SlackCosts"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->SlackCosts, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: SlackCosts");
    };
    field__cdg = jsonValue["NumSlacks"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->NumSlacks, field__cdg);
    };
    field__cdg = jsonValue["DOFSelections"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<size_t> >::DeSerializeText(this->DOFSelections, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<size_t>>::DeSerializeText: empty JSON value for: DOFSelections");
    };
    field__cdg = jsonValue["ObjectiveRows"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->ObjectiveRows, field__cdg);
    };
    field__cdg = jsonValue["IneqConstraintRows"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->IneqConstraintRows, field__cdg);
    };
    field__cdg = jsonValue["EqConstraintRows"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->EqConstraintRows, field__cdg);
    };
    field__cdg = jsonValue["ObjectiveMatrix"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicMatrix<double> >::DeSerializeText(this->ObjectiveMatrix, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicMatrix<double>>::DeSerializeText: empty JSON value for: ObjectiveMatrix");
    };
    field__cdg = jsonValue["ObjectiveVector"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->ObjectiveVector, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: ObjectiveVector");
    };
    field__cdg = jsonValue["IneqConstraintMatrix"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicMatrix<double> >::DeSerializeText(this->IneqConstraintMatrix, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicMatrix<double>>::DeSerializeText: empty JSON value for: IneqConstraintMatrix");
    };
    field__cdg = jsonValue["IneqConstraintVector"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->IneqConstraintVector, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: IneqConstraintVector");
    };
    field__cdg = jsonValue["EqConstraintMatrix"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicMatrix<double> >::DeSerializeText(this->EqConstraintMatrix, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicMatrix<double>>::DeSerializeText: empty JSON value for: EqConstraintMatrix");
    };
    field__cdg = jsonValue["EqConstraintVector"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->EqConstraintVector, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: EqConstraintVector");
    };
}
#endif // CISST_HAS_JSON

