#ifndef LEGACYLIGHT_H
#define LEGACYLIGHT_H

#include <string>
#include <iostream>
//#include "SmartDevice.h"

using namespace std;

class LegacyLight
{
    public:
        LegacyLight(bool status);
        virtual ~LegacyLight();

        void performLegacyAction();
        bool getLegacyStatus();
        string getLegacyDeviceType();

    private:
        bool legacyStatus;
        string type;
};

#endif
