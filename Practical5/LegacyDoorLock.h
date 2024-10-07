#ifndef LEGACYDOORLOCK_H
#define LEGACYDOORLOCK_H

#include <string>
#include <iostream>

using namespace std;

class LegacyDoorLock
{
    public:
        LegacyDoorLock(bool status);
        ~LegacyDoorLock();

        void performLegacyAction();
        bool getLegacyStatus();
        void setLegacyStatus(bool status);
        string getLegacyDeviceType();
        void legacyUpdate();

    private:
        bool legacyStatus;
};

#endif
