#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>
#include <iostream>
#include <vector>
#include "SmartDevice.h"
#include "Sensor.h"

using namespace std;

class SmartDevice
{
    public:
        SmartDevice(bool status);
        virtual ~SmartDevice();

        virtual void performAction() = 0;
        virtual bool getStatus() = 0;
        virtual string getDeviceType() = 0;

        // For adding to composite
        virtual void add(SmartDevice* device);
        virtual void remove(SmartDevice* device);
        virtual SmartDevice* getChild(int index);

        // For adding sensors
        void addDevice(Sensor* device); // = 0;
        void removeDevice(Sensor* device); // = 0;
        Sensor* getDevice(int index); // = 0;

        virtual void update() = 0;

    protected:
        bool status;

    private:
        vector<Sensor*> sensorList;
};

#endif
