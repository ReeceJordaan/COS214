#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "SmartDevice.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

class Thermostat : public SmartDevice
{
    public:
        Thermostat(string type, bool status, int temperature);
        Thermostat(string type, bool status);
        virtual ~Thermostat();

        void performAction();
        bool getStatus();
        string getDeviceType();

        virtual void setTemperature(int temperature) = 0;
        virtual int getTemperature() = 0;

        //Since Thermostat is a Leaf node in the 
        //composite pattern (i.e., it doesn't contain other 
        //devices), you can either make these functions throw
        // an exception or provide a default implementation 
        //(e.g., doing nothing). Alternatively, you could
        // override them with an exception to indicate that
        // adding/removing a device is not allowed for a Thermostat
        // node.
        void addDevice(SmartDevice* device);
        void remove(SmartDevice* device);
        SmartDevice* getChild(int index);
        void update();
    private:
        int temperature;
};


#endif
