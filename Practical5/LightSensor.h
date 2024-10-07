#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

#include <string>
#include <iostream>
#include "Sensor.h"

using namespace std;

/**
 * @class LightSensor
 * @brief A concrete subject class in the Observer design pattern, representing a light sensor.
 *
 * The LightSensor class monitors the presence of motion and notifies observers when motion is detected. It acts as a concrete subject in the Observer pattern, allowing various observers to register and respond to changes in the sensor's state.
 *
 * @implements This class is a concrete implementation of the Sensor class.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention This class should be used in conjunction with observers that respond to motion detection.
 * 
 * @warning Ensure that observers are properly registered to receive updates from this sensor.
 * 
 * @note The sensor detects motion and manages its state accordingly.
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Salome Kalaka
 * 
 * @see getMotionDetected(), setMotionDetected()
 */
class LightSensor : public Sensor {
    public:
        /**
         * @brief Constructor for the LightSensor class.
         * 
         * Initializes the LightSensor with a default state.
         */
        LightSensor();

        /**
         * @brief Destructor for the LightSensor class.
         * 
         * Cleans up any resources used by the LightSensor.
         */
        ~LightSensor();

        /**
         * @brief Returns the current motion detection state.
         * 
         * This method returns whether motion has been detected by the sensor.
         * 
         * @return A boolean indicating whether motion is detected (true) or not (false).
         */
        bool getMotionDetected();

        /**
         * @brief Sets the value of the motion detection state.
         * 
         * This method updates the motion detection state of the sensor.
         * 
         * @param motionDetected A boolean representing the new motion detection state (true for motion detected, false otherwise).
         */
        void setMotionDetected(bool motionDetected);

    private:
        /**
         * @brief Stores the current state of the sensor.
         * 
         * This boolean value indicates whether motion has been detected (true) or not (false).
         */
        bool motionDetected;
};

#endif
