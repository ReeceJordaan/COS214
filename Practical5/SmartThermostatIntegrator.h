#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

#include <string>
#include <iostream>
#include "Thermostat.h"
#include "LegacyThermostat.h"

using namespace std;

/**
 * @class SmartThermostatIntegrator
 * @brief Adapter class that integrates a LegacyThermostat into the SmartDevice framework.
 *
 * The SmartThermostatIntegrator class serves as an adapter, allowing the use of a LegacyThermostat
 * as a SmartDevice. It implements the Thermostat interface and delegates the functionality
 * to the adaptee, bridging the gap between the new system and the legacy system.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is an adapter that extends the Thermostat interface.
 *
 * @author Salome Kalaka
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see Thermostat class, performAction(), getStatus(), setStatus(), getDeviceType(), update(), setTemperature(), getTemperature()
 * @todo Consider adding error handling for legacy thermostat interactions.
 *
 * @warning Ensure that the adaptee pointer is valid before using it to avoid dereferencing null.
 *
 * @attention This class allows seamless integration of legacy systems into the current smart home architecture.
 */
class SmartThermostatIntegrator : public Thermostat
{
    public:
        /**
         * @brief Constructor for the SmartThermostatIntegrator class.
         * 
         * Initializes a new instance of the SmartThermostatIntegrator with the specified legacy thermostat.
         * 
         * @param legacyThermostat A pointer to the LegacyThermostat instance to be adapted.
         */
        SmartThermostatIntegrator(LegacyThermostat* legacyThermostat);

        /**
         * @brief Destructor for the SmartThermostatIntegrator class.
         * 
         * Cleans up resources associated with the SmartThermostatIntegrator instance and its adaptee.
         */
        ~SmartThermostatIntegrator();

        /**
         * @brief Switches the thermostat on or off by performing the action on the adaptee.
         * 
         * This method implements the performAction() method defined in the Thermostat interface.
         */
        void performAction();

        /**
         * @brief Retrieves the status of the legacy thermostat.
         * 
         * This method implements the getStatus() method defined in the Thermostat interface.
         * 
         * @return The status of the legacy thermostat (true for on, false for off).
         */
        bool getStatus();

        /**
         * @brief Sets the status of the legacy thermostat.
         * 
         * This method implements the setStatus() method defined in the Thermostat interface.
         * 
         * @param status The desired status to set (true for on, false for off).
         */
        void setStatus(bool status);

        /**
         * @brief Returns the device type as a string.
         * 
         * This method implements the getDeviceType() method defined in the Thermostat interface.
         * 
         * @return A string representing the device type ("Smart Thermostat").
         */
        string getDeviceType();

        /**
         * @brief Updates the state of the legacy thermostat through the adaptee.
         * 
         * This method implements the update() method defined in the Thermostat interface.
         */
        void update();
        
        /**
         * @brief Sets the temperature of the legacy thermostat.
         * 
         * This method implements the setTemperature() method defined in the Thermostat interface.
         * 
         * @param temperature The desired temperature to set.
         */
        void setTemperature(int temperature);
        
        /**
         * @brief Retrieves the current temperature of the legacy thermostat.
         * 
         * This method implements the getTemperature() method defined in the Thermostat interface.
         * 
         * @return The current temperature set on the legacy thermostat.
         */
        int getTemperature();

    private:
        /**
         * @brief Pointer to the LegacyThermostat instance being adapted.
         */
        LegacyThermostat* adaptee;
};

#endif
