#ifndef DOORSENSOR_H
#define DOORSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"

using namespace std;

/**
 * @class DoorSensor
 * @brief A concrete subject in the Observer design pattern, representing a door sensor that detects inactivity.
 *
 * The DoorSensor class is responsible for detecting door inactivity and notifying observers. It inherits from the Sensor class, making it a concrete subject in the Observer pattern.
 *
 * @implements This class is a derived class of the Sensor class and acts as a concrete subject in the Observer pattern.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention Ensure that observers are correctly registered to this sensor to receive updates.
 * 
 * @warning If no observers are registered, no notifications will be sent when inactivity is detected.
 * 
 * @note This class detects inactivity through the boolean value of inactivityDetected.
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Reece Jordaan
 * 
 * @see Sensor class, getInactivityDetected(), setInactivityDetected()
 */
class DoorSensor : public Sensor {
    public:
        /**
         * @brief Constructor for the DoorSensor class.
         * 
         * Initializes the DoorSensor with default values.
         */
        DoorSensor();

        /**
         * @brief Destructor for the DoorSensor class.
         * 
         * Cleans up any resources used by the DoorSensor.
         */
        ~DoorSensor();

        /**
         * @brief Returns the inactivity detection state.
         * 
         * This method returns whether inactivity has been detected by the sensor.
         * 
         * @return A boolean indicating if inactivity is detected (true) or not (false).
         */
        bool getInactivityDetected();

        /**
         * @brief Sets the inactivity detection state.
         * 
         * This method updates the sensor's inactivity state.
         * 
         * @param inactivityDetected A boolean indicating the new inactivity state of the sensor.
         */
        void setInactivityDetected(bool inactivityDetected);

    private:
        /**
         * @brief Stores the current state of inactivity detected by the sensor.
         * 
         * This boolean value represents whether the sensor has detected inactivity.
         */
        bool inactivityDetected;
};

#endif
