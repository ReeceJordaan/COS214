#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>
#include <iostream>
#include "SmartDevice.h"

using namespace std;

class SmartDevice
{
    public:
        SmartDevice(string type, bool status);
        virtual ~SmartDevice();

        virtual void performAction() = 0;
        virtual bool getStatus() = 0;
        virtual string getDeviceType() = 0;
        virtual void addDevice(SmartDevice* device) = 0;
        virtual void remove(SmartDevice* device) = 0;
        virtual SmartDevice* getChild(int index) = 0;
        virtual void update() = 0;

    protected:
        string type;
        bool status;
};

#endif
