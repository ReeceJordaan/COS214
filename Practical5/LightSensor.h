#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"

using namespace std;

class LightSensor : Sensor
{
    public:
        LightSensor();
        virtual ~LightSensor();

        void notifyDevices(); 
};

#endif
