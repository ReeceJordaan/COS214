#ifndef SMARTHOMESYSTEM_H
#define SMARTHOMESYSTEM_H

#include "SmartDevice.h"
#include <vector>
#include <iostream>
using namespace std;

class SmartHomeSystem : public SmartDevice {
    public:
        SmartHomeSystem(bool status);
        ~SmartHomeSystem();

        //! Iterates through the devices and performs each device's action.
        void performAction();
        //! Iterates through the devices and gets each device's status.
        bool getStatus();
        //! Iterates through the devices and gets each device's type.
        string getDeviceType();
        
        //! Adds a device to the list of devices.
        void add(SmartDevice* device);
        //! Removes a device to the list of devices.
        void remove(SmartDevice* device);
        //! Retrieves a device from the list of devices at the nth position.
        SmartDevice* getChild(int index);

        //! Iterates through the devices and updates each device.
        void update();

    private:
        vector<SmartDevice*> devices;
};


#endif
