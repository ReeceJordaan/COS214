#ifndef DOORSENSOR_H
#define DOORSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"

using namespace std;

class DoorSensor : Sensor
{
    public:
        DoorSensor();
        virtual ~DoorSensor();

        void notifyDevices(); 
};

#endif
