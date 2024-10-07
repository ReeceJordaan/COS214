#ifndef LIGHT_H
#define LIGHT_H

#include "SmartDevice.h"
#include "LightSensor.h"
#include <iostream>
using namespace std;

class Light : public SmartDevice
{
    public:
        Light(bool status);
        virtual ~Light();

        //! Switches the Light on/off.
        virtual void performAction();
        //! Returns "Light" as the device type.
        virtual string getDeviceType();
        //! Updates lightSensorState and performs an action if necessary.
        virtual void update();

    private:
        //! State of the LightSensor that Light is observing.
        bool lightSensorState;
        //! Pointer to the LightSensor that Light is observing.
        LightSensor* lightSensor;
};


#endif
