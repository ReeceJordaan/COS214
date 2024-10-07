#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"

using namespace std;

class LightSensor : public Sensor {
    public:
        LightSensor();
        ~LightSensor();

        //! Returns the value of motionDetected.
        bool getMotionDetected();
        //! Sets the value of motionDetected.
        void setMotionDetected(bool motionDetected);

    private:
        //! Stores the current state of the sensor.
        bool motionDetected;
};

#endif