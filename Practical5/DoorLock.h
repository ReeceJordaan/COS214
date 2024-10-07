#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "SmartDevice.h"
#include "DoorSensor.h"
#include <iostream>
using namespace std;

/**
 * @class DoorLock
 * @brief A smart door lock device that can be locked or unlocked and responds to changes in the DoorSensor's state.
 *
 * The DoorLock class implements various design patterns, including Composite, Adapter, Command, and Observer.
 * It performs actions based on the state of the door sensor it is observing.
 *
 * @implements This class inherits from SmartDevice and observes a DoorSensor.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention Ensure the DoorSensor is properly initialized before using the DoorLock.
 * 
 * @warning Improper initialization of the DoorSensor could lead to undefined behavior.
 * 
 * @note The device type for this class is always "Door Lock".
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Salome Kalaka
 * 
 * @see SmartDevice class, DoorSensor class, performAction(), getDeviceType(), update()
 */
class DoorLock : public SmartDevice
{
    public:
        /**
         * @brief Constructor for the DoorLock class.
         * 
         * Initializes the DoorLock with the given lock status.
         * 
         * @param status A boolean representing whether the door is locked (true) or unlocked (false).
         */
        DoorLock(bool status);

        /**
         * @brief Destructor for the DoorLock class.
         * 
         * Cleans up any resources used by the DoorLock.
         */
        virtual ~DoorLock();

        /**
         * @brief Locks or unlocks the door.
         * 
         * This method toggles the lock status of the door. It is part of the Command pattern.
         */
        virtual void performAction();

        /**
         * @brief Returns the device type.
         * 
         * This method always returns "Door Lock" as the type of the device.
         * 
         * @return A string representing the device type.
         */
        virtual string getDeviceType();

        /**
         * @brief Updates the state based on the DoorSensor's status.
         * 
         * This method checks the DoorSensor's state and performs actions if necessary. It is part of the Observer pattern.
         */
        virtual void update();
};

#endif
