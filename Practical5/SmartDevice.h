#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>
#include <iostream>
#include <vector>
#include "SmartDevice.h"
#include "Sensor.h"

using namespace std;

/**
 * @class SmartDevice
 * @brief An abstract class representing a smart device that can perform actions and observe sensor states.
 *
 * The SmartDevice class serves as a component in the Composite design pattern, allowing for 
 * the composition of smart devices into a tree structure. It also acts as a Subject in the Observer 
 * design pattern, enabling devices to observe changes in sensor states.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is an abstract base class for specific smart device implementations.
 * 
 * @author Salome Kalaka
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see performAction(), getDeviceType(), update(), add(), remove(), getChild()
 * @todo Implement concrete subclasses that inherit from SmartDevice.
 *
 * @warning This class cannot be instantiated directly; it serves as a base class for specific smart devices.
 *
 * @attention The performAction(), getDeviceType(), and update() methods must be implemented in subclasses.
 */
class SmartDevice
{
    public:
        /**
         * @brief Constructor for the SmartDevice class.
         * 
         * Initializes the smart device with a specified status.
         * 
         * @param status A boolean indicating the initial status of the smart device (true for on, false for off).
         */
        SmartDevice(bool status);

        /**
         * @brief Virtual destructor for the SmartDevice class.
         * 
         * Ensures proper cleanup of resources for derived classes.
         */
        virtual ~SmartDevice();

        /**
         * @brief Pure virtual method for performing device-specific actions.
         * 
         * This method should be implemented by subclasses to define the specific action for the device.
         */
        virtual void performAction() = 0;

        /**
         * @brief Pure virtual method to retrieve the type of the device.
         * 
         * This method should be implemented by subclasses to return a string representation of the device type.
         * 
         * @return A string representing the device type.
         */
        virtual string getDeviceType() = 0;

        /**
         * @brief Pure virtual method to update the state of the subject being observed.
         * 
         * This method should be implemented by subclasses to handle updates from the sensor.
         */
        virtual void update() = 0;

        /**
         * @brief Adds a device to the list of devices.
         * 
         * This method allows for the addition of child devices in a composite structure.
         * 
         * @param device A pointer to the SmartDevice to be added.
         */
        virtual void add(SmartDevice* device);

        /**
         * @brief Removes a device from the list of devices.
         * 
         * This method allows for the removal of child devices in a composite structure.
         * 
         * @param device A pointer to the SmartDevice to be removed.
         */
        virtual void remove(SmartDevice* device);

        /**
         * @brief Retrieves a device from the list of devices at the specified index.
         * 
         * @param index The index of the child device to retrieve.
         * @return A pointer to the SmartDevice at the specified index.
         */
        virtual SmartDevice* getChild(int index);

        /**
         * @brief Returns the current status of the smart device.
         * 
         * @return A boolean representing the smart device's status (true for on, false for off).
         */
        bool getStatus();

        /**
         * @brief Sets the status of the smart device.
         * 
         * @param status A boolean indicating the new status of the smart device.
         */
        void setStatus(bool status);

    protected:
        /**
         * @brief The status of the smart device (true for on, false for off).
         */
        bool status;
};

#endif
