#ifndef DOORSENSOR_H
#define DOORSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"

using namespace std;

class DoorSensor : public Sensor {
    public:
        DoorSensor();
        virtual ~DoorSensor();

        //! Returns the value of inactivityDetected.
        bool getInactivityDetected();
        //! Sets the value of inactivityDetected.
        void setInactivityDetected(bool inactivityDetected);

    private:
        //! Stores the current state of the sensor.
        bool inactivityDetected;
};

#endif