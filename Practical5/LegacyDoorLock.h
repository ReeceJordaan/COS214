#ifndef LEGACYDOORLOCK_H
#define LEGACYDOORLOCK_H

#include <string>
#include <iostream>
//#include "SmartDevice.h"

using namespace std;

class LegacyDoorLock
{
    public:
        LegacyDoorLock(bool status);
        virtual ~LegacyDoorLock();

        void performLegacyAction();
        bool getLegacyStatus();
        string getLegacyDeviceType();

    private:
        bool legacyStatus;
        string type;
};

#endif
