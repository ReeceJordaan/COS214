#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "SmartDevice.h"
#include "ThermostatSensor.h"
#include <iostream>
using namespace std;

class Thermostat : public SmartDevice
{
    public:
        Thermostat(bool status, int temperature);
        Thermostat(bool status);
        virtual ~Thermostat();

        //! Switches the Thermostat on/off.
        virtual void performAction();
        //! Returns "Thermostat" as the device type.
        virtual string getDeviceType();
        //! Updates thermostatSensorState and performs an action if necessary.
        virtual void update();
        //! Returns the Thermostat's current temperature.
        virtual int getTemperature();
        //! Sets the Thermostat's temperature.
        virtual void setTemperature(int temp);

    private:
        //! Thermostat's current temperature.
        int temperature;
};


#endif
