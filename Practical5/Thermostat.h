#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "SmartDevice.h"
#include "ThermostatSensor.h"
#include <iostream>
using namespace std;

/**
 * @class Thermostat
 * @brief Represents a thermostat device that can be controlled and observed.
 *
 * The Thermostat class extends the SmartDevice class, implementing the functionality
 * for controlling the thermostat and observing temperature changes through its
 * associated ThermostatSensor. It acts as a leaf component in the composite pattern,
 * a target in the adapter pattern, a concrete observer in the observer pattern,
 * and a receiver in the command pattern.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is a concrete implementation of SmartDevice, providing
 *              specific functionalities for a thermostat.
 *
 * @author Reece Jordaan
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see SmartDevice class, performAction(), getDeviceType(), update(), getTemperature(), setTemperature()
 * @todo Consider adding error handling for temperature settings to ensure valid ranges.
 *
 * @warning Ensure that the thermostatSensor pointer is valid before using it to avoid dereferencing null.
 *
 * @attention This class can be extended or integrated into smart home systems for temperature management.
 */
class Thermostat : public SmartDevice
{
    public:
        /**
         * @brief Constructor for the Thermostat class with initial status and temperature.
         *
         * Initializes a new instance of the Thermostat with the specified status and temperature.
         *
         * @param status The initial status of the thermostat (true for on, false for off).
         * @param temperature The initial temperature of the thermostat.
         */
        Thermostat(bool status, int temperature);

        /**
         * @brief Constructor for the Thermostat class with initial status only.
         *
         * Initializes a new instance of the Thermostat with the specified status and a default temperature.
         *
         * @param status The initial status of the thermostat (true for on, false for off).
         */
        Thermostat(bool status);

        /**
         * @brief Destructor for the Thermostat class.
         *
         * Cleans up resources associated with the Thermostat instance and its sensor.
         */
        virtual ~Thermostat();

        /**
         * @brief Switches the thermostat on or off by performing the action.
         *
         * This method implements the performAction() method defined in the SmartDevice interface.
         */
        virtual void performAction();

        /**
         * @brief Returns the device type as a string.
         *
         * This method implements the getDeviceType() method defined in the SmartDevice interface.
         *
         * @return A string representing the device type ("Thermostat").
         */
        virtual string getDeviceType();

        /**
         * @brief Updates the state of the thermostat based on the associated sensor.
         *
         * This method implements the update() method defined in the SmartDevice interface.
         */
        virtual void update();

        /**
         * @brief Returns the current temperature of the thermostat.
         *
         * This method implements the getTemperature() method defined in the Thermostat interface.
         *
         * @return The current temperature set on the thermostat.
         */
        virtual int getTemperature();

        /**
         * @brief Sets the temperature of the thermostat.
         *
         * This method implements the setTemperature() method defined in the Thermostat interface.
         *
         * @param temp The desired temperature to set on the thermostat.
         */
        virtual void setTemperature(int temp);

    protected:
        /**
         * @brief State of the ThermostatSensor that the Thermostat is observing.
         */
        bool thermostatSensorState;

        /**
         * @brief Pointer to the ThermostatSensor that the Thermostat is observing.
         */
        ThermostatSensor* thermostatSensor;

    private:
        /**
         * @brief Thermostat's current temperature.
         */
        int temperature;
};

#endif
