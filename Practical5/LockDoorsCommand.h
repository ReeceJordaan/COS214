#ifndef LOCKDOORSCOMMAND_H
#define LOCKDOORSCOMMAND_H

#include "DoorLock.h"
#include "SmartDeviceCommand.h"
#include <iostream>

using namespace std;

/**
 * @class LockDoorsCommand
 * @brief A concrete command class that implements the SmartDeviceCommand interface to lock doors.
 *
 * The LockDoorsCommand class encapsulates the action of locking a door by interacting with a DoorLock object. 
 * This class is part of the Command design pattern, allowing for parameterization of actions and the ability to queue commands.
 *
 * @implements This class is a concrete implementation of the SmartDeviceCommand interface.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention This class requires a valid DoorLock object to function correctly.
 * 
 * @warning Ensure that the DoorLock is properly initialized before executing the command.
 * 
 * @note The execute method performs the locking action on the associated DoorLock.
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Reece Jordaan
 * 
 * @see execute()
 */
class LockDoorsCommand : public SmartDeviceCommand
{
    public:
        /**
         * @brief Constructor for the LockDoorsCommand class.
         * 
         * Initializes the command with a reference to the DoorLock to be locked.
         * 
         * @param doorLock A pointer to the DoorLock object that this command will control.
         */
        LockDoorsCommand(DoorLock* doorLock);

        /**
         * @brief Destructor for the LockDoorsCommand class.
         * 
         * Cleans up any resources used by the LockDoorsCommand.
         */
        ~LockDoorsCommand();

        /**
         * @brief Executes the command to lock the door.
         * 
         * This method invokes the locking action on the associated DoorLock.
         */
        void execute();

    private:
        /**
         * @brief Pointer to the DoorLock that this command will control.
         * 
         * This member stores the reference to the DoorLock object on which the command operates.
         */
        DoorLock* doorLock;
};

#endif
