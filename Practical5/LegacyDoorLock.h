#ifndef LEGACYDOORLOCK_H
#define LEGACYDOORLOCK_H

#include <string>
#include <iostream>

using namespace std;

/**
 * @class LegacyDoorLock
 * @brief The adaptee in the Adapter design pattern, representing an older door lock system.
 *
 * The LegacyDoorLock class represents a legacy door lock system that performs basic locking and unlocking actions. It is part of the Adapter pattern, where it acts as the adaptee, allowing integration with modern systems through an adapter.
 *
 * @implements This class is the adaptee in the Adapter pattern, providing legacy functionality for door locking systems.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention This class provides legacy door lock functionalities and may require an adapter to work with modern systems.
 * 
 * @warning Ensure that modern systems using this class handle its legacy methods correctly through an adapter.
 * 
 * @note The device type for this class is returned as "Legacy Door Lock".
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Salome Kalaka
 * 
 * @see performLegacyAction(), getLegacyStatus(), setLegacyStatus(), getLegacyDeviceType(), legacyUpdate()
 */
class LegacyDoorLock
{
    public:
        /**
         * @brief Constructor for the LegacyDoorLock class.
         * 
         * Initializes the LegacyDoorLock with the given lock status.
         * 
         * @param status A boolean representing whether the door is locked (true) or unlocked (false).
         */
        LegacyDoorLock(bool status);

        /**
         * @brief Destructor for the LegacyDoorLock class.
         * 
         * Cleans up any resources used by the LegacyDoorLock.
         */
        ~LegacyDoorLock();

        /**
         * @brief Performs the legacy lock/unlock action.
         * 
         * This method performs the legacy action of locking or unlocking the door.
         */
        void performLegacyAction();

        /**
         * @brief Returns the legacy lock status.
         * 
         * This method returns whether the door is locked or unlocked in the legacy system.
         * 
         * @return A boolean representing the lock status (true for locked, false for unlocked).
         */
        bool getLegacyStatus();

        /**
         * @brief Sets the legacy lock status.
         * 
         * This method updates the lock status of the legacy door lock.
         * 
         * @param status A boolean representing the new lock status (true for locked, false for unlocked).
         */
        void setLegacyStatus(bool status);

        /**
         * @brief Returns the device type of the legacy door lock.
         * 
         * This method returns the device type as "Legacy Door Lock".
         * 
         * @return A string representing the device type ("Legacy Door Lock").
         */
        string getLegacyDeviceType();

        /**
         * @brief Updates the legacy door lock system.
         * 
         * This method provides a legacy update mechanism, performing necessary actions in the legacy system.
         */
        void legacyUpdate();

    private:
        /**
         * @brief Stores the current lock status of the legacy door lock.
         * 
         * This boolean value represents whether the legacy door lock is currently locked (true) or unlocked (false).
         */
        bool legacyStatus;
};

#endif
