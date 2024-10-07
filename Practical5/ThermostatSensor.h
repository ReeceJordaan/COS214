#ifndef THERMOSTATSENSOR_H
#define THERMOSTATSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"

using namespace std;

class ThermostatSensor : public Sensor {
    public:
        ThermostatSensor();
        ~ThermostatSensor();

        //! Returns the value of thresholdReached.
        bool getThresholdReached();
        //! Sets the value of thresholdReached.
        void setThresholdReached(bool thresholdReached);

    private:
        //! Stores the current state of the sensor.
        bool thresholdReached;
};

#endif