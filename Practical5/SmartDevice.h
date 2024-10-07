#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Sensor;

class SmartDevice {
    public:
        SmartDevice(bool status);
        virtual ~SmartDevice();

        //! Device performs an action such as turning on/off or locking/unlocking.
        virtual void performAction() = 0;
        //! Returns the device's type.
        virtual string getDeviceType() = 0;
        //! Updates the state of the subject that it is observing.
        virtual void update() = 0;

        //! Adds a device to the list of devices.
        virtual void add(SmartDevice* device);
        //! Removes a device to the list of devices.
        virtual void remove(SmartDevice* device);
        //! Retrieves a device from the list of devices at the nth position.
        virtual SmartDevice* getChild(int index);

        //! Returns the smart device's status.
        bool getStatus();
        //! Sets the smart device's status.
        void setStatus(bool status);

        //! Sets the SmartDevice's sensor.
        virtual void setSensor(Sensor* sensor);

    protected:
        //! Status of the smart device eg. On/Off
        bool status;
        //! State of the Sensor that the SmartDevice is observing.
        bool sensorState;
        //! Pointer to the Sensor that the SmartDevice is observing.
        Sensor* sensor;
};

#endif
