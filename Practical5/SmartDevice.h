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

        //! Device performs an action such as turning on/off or locking/unlocking.
        virtual void performAction() = 0;
        //! Returns the device's type.
        virtual string getDeviceType() = 0;
        //! Updates the state of the subject that it is observing.
        virtual void update() = 0;

        //! Adds to the composite.
        virtual void add(SmartDevice* device);
        //! Removes from the composite.
        virtual void remove(SmartDevice* device);
        //! Returns nth element in the composite.
        virtual SmartDevice* getChild(int index);

        //! Returns the smart device's status.
        bool getStatus();
        //! Sets the smart device's status.
        void setStatus(bool status);

    protected:
        //! Status of the smart device eg. On/Off
        bool status;
};

#endif
