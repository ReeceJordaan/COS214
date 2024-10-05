#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include <iostream>
#include "SmartDevice.h"

using namespace std;

//Maintains a list of  observers (devices) that are
//interested in being notified
class Sensor
{
    public:
        Sensor();
        virtual ~Sensor();

        //diffferent devices detect differently thus they'll
        //have different notifyDevices implementations.
        virtual void notifyDevices() = 0; 
        void addDevice(SmartDevice* device);
        void removeDevice(SmartDevice* device);

    private:
        vector<SmartDevice*> sensorList;
};

#endif
