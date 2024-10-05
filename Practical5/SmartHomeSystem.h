#ifndef SMARTHOMESYSTEM_H
#define SMARTHOMESYSTEM_H

#include "SmartDevice.h"
#include <vector>
#include <iostream>
using namespace std;

class SmartHomeSystem : public SmartDevice
{
    public:
        SmartHomeSystem(string type, bool status);
        virtual ~SmartHomeSystem();

        void performAction();
        bool getStatus();
        string getDeviceType();
        void addDevice(SmartDevice* device);
        void remove(SmartDevice* device);
        SmartDevice* getChild(int index);

    private:
        vector<SmartDevice*> devices;
};


#endif
