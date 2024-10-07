#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H

#include <string>
#include <iostream>

using namespace std;

class LegacyThermostat
{
    public:
        LegacyThermostat(bool status, int temperature);
        ~LegacyThermostat();

        void performLegacyAction();
        bool getLegacyStatus();
        void setLegacyStatus(bool status);
        string getLegacyDeviceType();
        void legacyUpdate();

        void setLegacyTemperature(int temp);
        int getLegacyTemperature();

    private:
        int temperature;
        bool legacyStatus;
};

#endif
