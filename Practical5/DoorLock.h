#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "SmartDevice.h"
#include "DoorSensor.h"
#include <iostream>
using namespace std;

class DoorLock : public SmartDevice
{
    public:
        DoorLock(bool status);
        virtual ~DoorLock();

        //! Locks/Unlocks the door.
        virtual void performAction();
        //! Returns "Door Lock" as the device type.
        virtual string getDeviceType();
        //! Updates doorSensorState and performs an action if necessary.
        virtual void update();

    private:
        //! State of the DoorSensor that DoorLock is observing.
        bool doorSensorState;
        //! Pointer to the DoorSensor that DoorLock is observing.
        DoorSensor* doorSensor;
};


#endif
