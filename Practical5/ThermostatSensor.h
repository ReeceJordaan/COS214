#ifndef THERMOSTATSENSOR_H
#define THERMOSTATSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"
using namespace std;

/**
 * @class ThermostatSensor
 * @brief Represents a thermostat sensor that monitors temperature thresholds.
 *
 * The ThermostatSensor class extends the Sensor class and serves as a concrete subject
 * in the observer design pattern. It maintains the state of temperature thresholds and
 * notifies any observing devices when the threshold state changes.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is a concrete implementation of Sensor, providing
 *              specific functionalities for monitoring temperature thresholds.
 *
 * @author Salome Kalaka
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see Sensor class, getThresholdReached(), setThresholdReached()
 * @todo Implement notification logic to inform observing devices when the threshold state changes.
 *
 * @warning Ensure that the methods to set and get threshold states are called in the correct sequence to maintain consistency.
 *
 * @attention This class can be integrated into smart home systems for effective temperature monitoring.
 */
class ThermostatSensor : public Sensor {
    public:
        /**
         * @brief Default constructor for the ThermostatSensor class.
         *
         * Initializes a new instance of the ThermostatSensor with a default state.
         */
        ThermostatSensor();

        /**
         * @brief Destructor for the ThermostatSensor class.
         *
         * Cleans up resources associated with the ThermostatSensor instance.
         */
        ~ThermostatSensor();

        /**
         * @brief Returns the value of the thresholdReached state.
         *
         * This method checks whether the temperature threshold has been reached.
         *
         * @return True if the threshold has been reached, false otherwise.
         */
        bool getThresholdReached();

        /**
         * @brief Sets the value of the thresholdReached state.
         *
         * Updates the state indicating whether the temperature threshold has been reached.
         *
         * @param thresholdReached The desired state to set for the threshold.
         */
        void setThresholdReached(bool thresholdReached);

    private:
        /**
         * @brief Stores the current state of the sensor indicating if the threshold is reached.
         */
        bool thresholdReached;
};

#endif
