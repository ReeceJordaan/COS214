#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H

#include <string>
#include <iostream>
//#include "SmartDevice.h"

using namespace std;

class LegacyThermostat
{
    public:
        LegacyThermostat(bool status, int temperature);
        virtual ~LegacyThermostat();

        void performLegacyAction();
        bool getLegacyStatus();
        string getLegacyDeviceType();
        void setLegacyTemperature(int temp);
        int getLegacyTemperature();

    private:
        int temperature;
        bool legacyStatus;
        string type;
};

#endif
