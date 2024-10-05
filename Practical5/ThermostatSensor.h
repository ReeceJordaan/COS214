#ifndef THERMOSTATSENSOR_H
#define THERMOSTATSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"

using namespace std;

class ThermostatSensor : Sensor
{
    public:
        ThermostatSensor();
        virtual ~ThermostatSensor();

        void notifyDevices(); 
};

#endif
