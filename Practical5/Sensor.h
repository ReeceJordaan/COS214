#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include <iostream>
#include <vector>
#include "SmartDevice.h"

using namespace std;

/**
 * @class Sensor
 * @brief An abstract class representing the subject in the Observer design pattern.
 *
 * The Sensor class maintains a list of SmartDevice observers that are interested in being notified about changes in state.
 * It provides methods to add, remove, and notify devices when a change occurs, facilitating a publish-subscribe mechanism.
 *
 * @implements This class acts as a concrete subject in the Observer pattern.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention Ensure devices are properly added before attempting to notify them.
 * 
 * @warning The notifyDevices method will call update() on all registered devices; ensure they are prepared for this.
 * 
 * @note This class provides the basic functionality needed for an observable subject.
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Reece Jordaan
 * 
 * @see addDevice(), removeDevice(), notifyDevices()
 */
class Sensor
{
    public:
        /**
         * @brief Default constructor for the Sensor class.
         * 
         * Initializes the Sensor with an empty device list.
         */
        Sensor();

        /**
         * @brief Virtual destructor for the Sensor class.
         * 
         * Cleans up any resources used by the Sensor and its device list.
         */
        virtual ~Sensor();

        /**
         * @brief Adds a device to the sensor's device list.
         * 
         * This method registers a SmartDevice to be notified when the sensor's state changes.
         * 
         * @param device A pointer to the SmartDevice to be added to the device list.
         */
        void addDevice(SmartDevice* device);

        /**
         * @brief Removes a device from the sensor's device list.
         * 
         * This method unregisters a SmartDevice from receiving notifications from the sensor.
         * 
         * @param device A pointer to the SmartDevice to be removed from the device list.
         */
        void removeDevice(SmartDevice* device);

        /**
         * @brief Notifies all registered devices of a state change.
         * 
         * This method calls the update method on each device in the device list to inform them of the change.
         */
        void notifyDevices();

    protected:
        /**
         * @brief A vector storing the devices that are connected to the sensor.
         * 
         * This member contains pointers to SmartDevice objects that are registered to receive notifications.
         */
        vector<SmartDevice*> deviceList;
};

#endif
