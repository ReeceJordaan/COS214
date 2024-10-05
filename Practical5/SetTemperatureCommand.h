#ifndef SETTEMPERATURECOMMAND_H
#define SETTEMPERATURECOMMAND_H

#include "Thermostat.h"
#include "SmartDeviceCommand.h"
#include <iostream>
using namespace std;

class SetTemperatureCommand : public SmartDeviceCommand
{
    public:
        SetTemperatureCommand(Thermostat* thermostat);
        virtual ~SetTemperatureCommand();

        void execute();
    
    private:
        Thermostat* thermostat;
};


#endif
