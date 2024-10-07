#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include <iostream>
#include <vector>
#include "SmartDevice.h"

using namespace std;

class SmartDevice;

//Maintains a list of  observers (devices) that are
//interested in being notified
class Sensor
{
    public:
        Sensor();
        virtual ~Sensor();

        //! Adds devices to a sensor.
        void addDevice(SmartDevice* device);
        //! Removes devices from a sensor.
        void removeDevice(SmartDevice* device);
        //! Notifies all devices in the sensor's device list.
        void notifyDevices();

    protected:
        //! Stores a list of devices which are connected to the sensor.
        vector<SmartDevice*> deviceList;
};

#endif