#ifndef SMARTDEVICECOMMAND_H
#define SMARTDEVICECOMMAND_H

#include <vector>
#include <iostream>
using namespace std;

/**
 * @class SmartDeviceCommand
 * @brief An abstract command class for executing actions on smart devices.
 *
 * The SmartDeviceCommand class serves as the base class for commands in the Command design pattern.
 * It defines a common interface for executing commands related to smart devices.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is an abstract base class for specific command implementations.
 * 
 * @author Salome Kalaka
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see execute()
 * @todo Implement concrete command classes that inherit from SmartDeviceCommand.
 *
 * @warning This class cannot be instantiated directly; it serves as a base class for specific command implementations.
 *
 * @attention The execute() method must be implemented in subclasses.
 */
class SmartDeviceCommand
{
    public:
        /**
         * @brief Constructor for the SmartDeviceCommand class.
         * 
         * Initializes a new instance of the SmartDeviceCommand class.
         */
        SmartDeviceCommand();

        /**
         * @brief Virtual destructor for the SmartDeviceCommand class.
         * 
         * Ensures proper cleanup of resources for derived classes.
         */
        virtual ~SmartDeviceCommand();

        /**
         * @brief Pure virtual method for executing the command.
         * 
         * This method should be implemented by subclasses to define the specific action to be executed.
         */
        virtual void execute() = 0;
};

#endif
