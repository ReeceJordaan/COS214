#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

#include <string>
#include <iostream>
#include "Thermostat.h"
#include "LegacyThermostat.h"

using namespace std;

class SmartThermostatIntegrator : public Thermostat
{
    public:
        SmartThermostatIntegrator(LegacyThermostat* legacyThermostat);
        ~SmartThermostatIntegrator();

        void performAction();
        bool getStatus();
        void setStatus(bool status);
        string getDeviceType();
        void update();
        
        void setTemperature(int temperature);
        int getTemperature();

    private:
        LegacyThermostat* adaptee;
        


};

#endif
