#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "SmartDevice.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

class DoorLock : public SmartDevice
{
    public:
        DoorLock(string type, bool status);
        virtual ~DoorLock();

        void performAction();
        bool getStatus();
        string getDeviceType();

        //Since DoorLock is a Leaf node in the 
        //composite pattern (i.e., it doesn't contain other 
        //devices), you can either make these functions throw
        // an exception or provide a default implementation 
        //(e.g., doing nothing). Alternatively, you could
        // override them with an exception to indicate that
        // adding/removing a device is not allowed for a DoorLock
        // node.
        void addDevice(SmartDevice* device);
        void remove(SmartDevice* device);
        SmartDevice* getChild(int index);
};


#endif
