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
        virtual ~SmartThermostatIntegrator();

        void performAction();
        bool getStatus();
        string getDeviceType();
        
        void setTemperature(int temperature);
        int getTemperature();

    private:
        LegacyThermostat* adaptee;
        


};

#endif
