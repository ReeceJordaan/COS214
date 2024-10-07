#ifndef SMARTHOMESYSTEM_H
#define SMARTHOMESYSTEM_H

#include "SmartDevice.h"
#include <vector>
#include <iostream>
using namespace std;

class SmartHomeSystem : public SmartDevice
{
    public:
        SmartHomeSystem(bool status);
        virtual ~SmartHomeSystem();

        void performAction();
        bool getStatus();
        string getDeviceType();
        
        void add(SmartDevice* device);
        void remove(SmartDevice* device);
        SmartDevice* getChild(int index);

        void update();

    private:
        vector<SmartDevice*> devices;
};


#endif
