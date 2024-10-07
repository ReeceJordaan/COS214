#ifndef LEGACYLIGHT_H
#define LEGACYLIGHT_H

#include <string>
#include <iostream>

using namespace std;

/**
 * @class LegacyLight
 * @brief The adaptee in the Adapter design pattern, representing an older lighting system.
 *
 * The LegacyLight class provides legacy functionality for controlling lights. It is part of the Adapter design pattern, where it serves as the adaptee, enabling legacy light systems to be integrated with modern interfaces via an adapter.
 *
 * @implements This class is the adaptee in the Adapter pattern, offering legacy lighting functionalities.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention This class may require an adapter to interface with modern systems.
 * 
 * @warning Incorrect handling of the legacy methods without an adapter may lead to integration issues.
 * 
 * @note The device type returned by this class is "Legacy Light".
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Salome Kalaka
 * 
 * @see performLegacyAction(), getLegacyStatus(), setLegacyStatus(), getLegacyDeviceType(), legacyUpdate()
 */
class LegacyLight
{
    public:
        /**
         * @brief Constructor for the LegacyLight class.
         * 
         * Initializes the LegacyLight with the given status.
         * 
         * @param status A boolean representing whether the light is on (true) or off (false).
         */
        LegacyLight(bool status);

        /**
         * @brief Destructor for the LegacyLight class.
         * 
         * Cleans up any resources used by the LegacyLight.
         */
        ~LegacyLight();

        /**
         * @brief Performs the legacy action to turn the light on or off.
         * 
         * This method controls the light's state in the legacy system.
         */
        void performLegacyAction();

        /**
         * @brief Returns the legacy light status.
         * 
         * This method returns whether the light is on or off in the legacy system.
         * 
         * @return A boolean representing the light's status (true for on, false for off).
         */
        bool getLegacyStatus();

        /**
         * @brief Sets the legacy light status.
         * 
         * This method updates the light's status in the legacy system.
         * 
         * @param status A boolean representing the new light status (true for on, false for off).
         */
        void setLegacyStatus(bool status);

        /**
         * @brief Returns the device type of the legacy light.
         * 
         * This method returns the device type as "Legacy Light".
         * 
         * @return A string representing the device type ("Legacy Light").
         */
        string getLegacyDeviceType();

        /**
         * @brief Updates the legacy lighting system.
         * 
         * This method provides a legacy update mechanism, allowing actions to be performed in the legacy lighting system.
         */
        void legacyUpdate();

    private:
        /**
         * @brief Stores the current status of the legacy light.
         * 
         * This boolean value indicates whether the legacy light is on (true) or off (false).
         */
        bool legacyStatus;
};

#endif
