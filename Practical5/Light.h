#ifndef LIGHT_H
#define LIGHT_H

#include "SmartDevice.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

class Light : public SmartDevice
{
    public:
        Light(bool status);
        virtual ~Light();

        void performAction();
        bool getStatus();
        string getDeviceType();

        //Since Light is a Leaf node in the 
        //composite pattern (i.e., it doesn't contain other 
        //devices), you can either make these functions throw
        // an exception or provide a default implementation 
        //(e.g., doing nothing). Alternatively, you could
        // override them with an exception to indicate that
        // adding/removing a device is not allowed for a Light
        // node.
        
        //void addDevice(SmartDevice* device);
        //void remove(SmartDevice* device);
        //SmartDevice* getChild(int index);
        
        void update();
};


#endif
