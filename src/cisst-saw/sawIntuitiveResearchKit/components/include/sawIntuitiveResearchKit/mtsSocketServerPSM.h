/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-    */
/* ex: set filetype=cpp softtabstop=4 shiftwidth=4 tabstop=4 cindent expandtab: */

/*
  Author(s):  Pretham Chalasani, Anton Deguet
  Created on: 2016-11-04

  (C) Copyright 2016-2017 Johns Hopkins University (JHU), All Rights Reserved.

--- begin cisst license - do not edit ---

This software is provided "as is" under an open source license, with
no warranty.  The complete license can be found in license.txt and
http://www.cisst.org/cisst/license.txt.

--- end cisst license ---
*/

#ifndef _mtsSocketServerPSM_h
#define _mtsSocketServerPSM_h

#include <sawIntuitiveResearchKit/mtsSocketBasePSM.h>

class mtsSocketServerPSM: public mtsSocketBasePSM
{
    CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION_ONEARG, CMN_LOG_ALLOW_DEFAULT);

public :
    mtsSocketServerPSM(const std::string & componentName, const double periodInSeconds,
                       const std::string & ip, const unsigned int port);
    mtsSocketServerPSM(const mtsTaskPeriodicConstructorArg & arg);

    void Configure(const std::string & fileName = "");
    void Run(void);

protected:
    void ExecutePSMCommands(void);
    void UpdatePSMState(void);
    void ReceivePSMCommandData(void);
    void SendPSMStateData(void);
    void ErrorEventHandler(const mtsMessage & message);

private:
    mtsFunctionWrite SetPositionCartesian;
    mtsFunctionWrite SetPositionJaw;
    mtsFunctionRead GetPositionCartesian;

    mtsFunctionWrite SetDesiredState;
    mtsFunctionRead GetCurrentState;

    prmPositionCartesianGet PositionCartesianCurrent;
    prmPositionCartesianSet PositionCartesianSet;
    prmPositionJointSet PositionJointSet;
    bool mIsHoming;
    bool mIsHomed;
};

CMN_DECLARE_SERVICES_INSTANTIATION(mtsSocketServerPSM);

#endif // _mtsSocketServerPSM_h