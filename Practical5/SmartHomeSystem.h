#ifndef SMARTHOMESYSTEM_H
#define SMARTHOMESYSTEM_H

#include "SmartDevice.h"
#include <vector>
#include <iostream>
using namespace std;

/**
 * @class SmartHomeSystem
 * @brief Composite class representing a smart home system that manages multiple smart devices.
 *
 * The SmartHomeSystem class serves as a composite for managing a collection of smart devices.
 * It implements the SmartDevice interface and allows clients to interact with a group of devices
 * as if they were a single device. The system can perform actions, get statuses, and update
 * the state of all devices it manages.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is a composite that extends the SmartDevice interface.
 *
 * @author Salome Kalaka
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see SmartDevice class, performAction(), getStatus(), getDeviceType(), add(), remove(), getChild(), update()
 * @todo Consider adding methods for retrieving all devices or clearing the device list.
 *
 * @warning Ensure that the list of devices is properly managed to avoid memory leaks.
 *
 * @attention This class is designed to manage multiple smart devices in a cohesive manner.
 */
class SmartHomeSystem : public SmartDevice {
    public:
        /**
         * @brief Constructor for the SmartHomeSystem class.
         * 
         * Initializes a new instance of the SmartHomeSystem class with the specified status.
         * 
         * @param status The initial status of the smart home system (true for active, false for inactive).
         */
        SmartHomeSystem(bool status);

        /**
         * @brief Destructor for the SmartHomeSystem class.
         * 
         * Cleans up resources associated with the SmartHomeSystem instance and its devices.
         */
        ~SmartHomeSystem();

        /**
         * @brief Iterates through the devices and performs each device's action.
         * 
         * This method implements the performAction() method defined in the SmartDevice interface.
         */
        void performAction();

        /**
         * @brief Iterates through the devices and gets each device's status.
         * 
         * This method implements the getStatus() method defined in the SmartDevice interface.
         * 
         * @return True if any device is active, false if all are inactive.
         */
        bool getStatus();

        /**
         * @brief Iterates through the devices and gets each device's type.
         * 
         * This method implements the getDeviceType() method defined in the SmartDevice interface.
         * 
         * @return A string representing the type of the smart home system.
         */
        string getDeviceType();

        /**
         * @brief Adds a device to the list of devices.
         * 
         * @param device A pointer to the SmartDevice to be added to the system.
         */
        void add(SmartDevice* device);

        /**
         * @brief Removes a device from the list of devices.
         * 
         * @param device A pointer to the SmartDevice to be removed from the system.
         */
        void remove(SmartDevice* device);

        /**
         * @brief Retrieves a device from the list of devices at the nth position.
         * 
         * @param index The index of the device to retrieve.
         * @return A pointer to the SmartDevice at the specified index, or nullptr if out of bounds.
         */
        SmartDevice* getChild(int index);

        /**
         * @brief Iterates through the devices and updates each device.
         * 
         * This method updates the state of each device that the smart home system manages.
         */
        void update();

    private:
        /**
         * @brief A collection of SmartDevice pointers representing the devices managed by the system.
         */
        vector<SmartDevice*> devices;
};

#endif
