#ifndef SMARTDOORLOCKINTEGRATOR_H
#define SMARTDOORLOCKINTEGRATOR_H

#include <string>
#include <iostream>
#include "DoorLock.h"
#include "LegacyDoorLock.h"

using namespace std;

/**
 * @class SmartDoorLockIntegrator
 * @brief An adapter class that integrates LegacyDoorLock functionality into the DoorLock interface.
 *
 * The SmartDoorLockIntegrator class adapts the LegacyDoorLock to conform to the DoorLock interface,
 * allowing it to be used as a smart device in the system. It acts as a bridge between the legacy 
 * system and the current implementation, enabling seamless interaction.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is an adapter that extends the DoorLock interface.
 * 
 * @author Salome Kalaka
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see DoorLock class, LegacyDoorLock class, performAction(), getStatus(), setStatus(), update()
 * @todo Implement any additional functionalities needed for better integration.
 *
 * @warning Ensure that the adaptee (LegacyDoorLock) is properly managed to avoid memory leaks.
 *
 * @attention This class is specifically designed to adapt the LegacyDoorLock to the DoorLock interface.
 */
class SmartDoorLockIntegrator : public DoorLock
{
    public:
        /**
         * @brief Constructor for the SmartDoorLockIntegrator class.
         * 
         * Initializes a new instance of the SmartDoorLockIntegrator class with the provided legacy door lock.
         * 
         * @param legacyDoorLock A pointer to the LegacyDoorLock that this adapter will integrate.
         */
        SmartDoorLockIntegrator(LegacyDoorLock* legacyDoorLock);

        /**
         * @brief Destructor for the SmartDoorLockIntegrator class.
         * 
         * Cleans up resources associated with the SmartDoorLockIntegrator instance.
         */
        ~SmartDoorLockIntegrator();

        /**
         * @brief Locks/Unlocks the door using the adapted LegacyDoorLock functionality.
         * 
         * This method implements the performAction() method defined in the DoorLock interface.
         */
        void performAction();

        /**
         * @brief Returns the status of the legacy door lock.
         * 
         * This method implements the getStatus() method defined in the DoorLock interface.
         * 
         * @return The current status of the door lock (true if locked, false otherwise).
         */
        bool getStatus();

        /**
         * @brief Sets the status of the legacy door lock.
         * 
         * This method implements the setStatus() method defined in the DoorLock interface.
         * 
         * @param status The desired status to set (true for locked, false for unlocked).
         */
        void setStatus(bool status);

        /**
         * @brief Returns "Smart Door Lock" as the device type.
         * 
         * This method implements the getDeviceType() method defined in the DoorLock interface.
         * 
         * @return A string representing the device type.
         */
        string getDeviceType();

        /**
         * @brief Updates the state of the adapter based on the legacy door lock status.
         * 
         * This method implements the update() method defined in the DoorLock interface.
         */
        void update();

    private:
        /**
         * @brief Pointer to the LegacyDoorLock being adapted.
         * 
         * This pointer is used to call the legacy door lock's methods.
         */
        LegacyDoorLock* adaptee;
};

#endif
