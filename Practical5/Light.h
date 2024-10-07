#ifndef LIGHT_H
#define LIGHT_H

#include "SmartDevice.h"
#include "LightSensor.h"
#include "Sensor.h"
#include <iostream>

using namespace std;

/**
 * @class Light
 * @brief A concrete implementation of the SmartDevice, representing a controllable light.
 *
 * The Light class provides functionalities for switching the light on and off, as well as monitoring its state through a LightSensor. It participates in the Composite, Adapter, Command, and Observer design patterns, enabling integration with other smart devices and systems.
 *
 * @implements This class is a concrete implementation of the SmartDevice class.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention This class relies on a LightSensor for its operation.
 * 
 * @warning Ensure that the LightSensor is properly initialized to avoid unexpected behavior.
 * 
 * @note The device type returned by this class is "Light".
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Salome Kalaka
 * 
 * @see performAction(), getDeviceType(), update()
 */
class Light : public SmartDevice
{
    public:
        /**
         * @brief Constructor for the Light class.
         * 
         * Initializes the Light with the given status.
         * 
         * @param status A boolean representing whether the light is on (true) or off (false).
         */
        Light(bool status);

        /**
         * @brief Destructor for the Light class.
         * 
         * Cleans up any resources used by the Light.
         */
        virtual ~Light();

        /**
         * @brief Switches the light on or off.
         * 
         * This method performs the action of toggling the light's state based on its current status.
         */
        virtual void performAction();

        /**
         * @brief Returns the device type of the light.
         * 
         * This method returns the device type as "Light".
         * 
         * @return A string representing the device type ("Light").
         */
        virtual string getDeviceType();

        /**
         * @brief Updates the state of the light sensor and performs an action if necessary.
         * 
         * This method checks the state of the LightSensor and may adjust the light's state accordingly.
         */
        virtual void update();
};

#endif
