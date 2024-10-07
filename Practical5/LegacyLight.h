#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H

#include <string>
#include <iostream>

using namespace std;

/**
 * @class LegacyThermostat
 * @brief The adaptee in the Adapter design pattern, representing an older thermostat system.
 *
 * The LegacyThermostat class provides legacy functionality for controlling temperature settings. It acts as the adaptee in the Adapter pattern, allowing modern systems to interact with legacy thermostat functionalities through an adapter.
 *
 * @implements This class is the adaptee in the Adapter pattern, providing legacy thermostat functionalities.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention This class may require an adapter to interface with modern systems.
 * 
 * @warning Ensure that legacy methods are correctly handled through an adapter to avoid integration issues.
 * 
 * @note The device type returned by this class is "Legacy Thermostat".
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Reece Jordaan
 * 
 * @see performLegacyAction(), getLegacyStatus(), setLegacyStatus(), getLegacyDeviceType(), legacyUpdate(), setLegacyTemperature(), getLegacyTemperature()
 */
class LegacyThermostat
{
    public:
        /**
         * @brief Constructor for the LegacyThermostat class.
         * 
         * Initializes the LegacyThermostat with the given status and temperature.
         * 
         * @param status A boolean representing whether the thermostat is active (true) or inactive (false).
         * @param temperature An integer representing the initial temperature setting of the thermostat.
         */
        LegacyThermostat(bool status, int temperature);

        /**
         * @brief Destructor for the LegacyThermostat class.
         * 
         * Cleans up any resources used by the LegacyThermostat.
         */
        ~LegacyThermostat();

        /**
         * @brief Performs the legacy action to adjust the thermostat.
         * 
         * This method controls the thermostat's state in the legacy system.
         */
        void performLegacyAction();

        /**
         * @brief Returns the legacy thermostat status.
         * 
         * This method returns whether the thermostat is active or inactive in the legacy system.
         * 
         * @return A boolean representing the thermostat's status (true for active, false for inactive).
         */
        bool getLegacyStatus();

        /**
         * @brief Sets the legacy thermostat status.
         * 
         * This method updates the thermostat's status in the legacy system.
         * 
         * @param status A boolean representing the new thermostat status (true for active, false for inactive).
         */
        void setLegacyStatus(bool status);

        /**
         * @brief Returns the device type of the legacy thermostat.
         * 
         * This method returns the device type as "Legacy Thermostat".
         * 
         * @return A string representing the device type ("Legacy Thermostat").
         */
        string getLegacyDeviceType();

        /**
         * @brief Updates the legacy thermostat system.
         * 
         * This method provides a legacy update mechanism, allowing actions to be performed in the legacy thermostat system.
         */
        void legacyUpdate();

        /**
         * @brief Sets the legacy temperature setting.
         * 
         * This method updates the temperature of the legacy thermostat.
         * 
         * @param temp An integer representing the new temperature setting for the thermostat.
         */
        void setLegacyTemperature(int temp);

        /**
         * @brief Returns the legacy temperature setting.
         * 
         * This method returns the current temperature setting of the legacy thermostat.
         * 
         * @return An integer representing the current temperature setting.
         */
        int getLegacyTemperature();

    private:
        /**
         * @brief Stores the current temperature setting of the legacy thermostat.
         * 
         * This integer value indicates the current temperature controlled by the legacy thermostat.
         */
        int temperature;

        /**
         * @brief Stores the current status of the legacy thermostat.
         * 
         * This boolean value indicates whether the legacy thermostat is active (true) or inactive (false).
         */
        bool legacyStatus;
};

#endif
