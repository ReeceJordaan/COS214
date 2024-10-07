#ifndef SETTEMPERATURECOMMAND_H
#define SETTEMPERATURECOMMAND_H

#include "Thermostat.h"
#include "SmartDeviceCommand.h"
#include <iostream>

using namespace std;

/**
 * @class SetTemperatureCommand
 * @brief A command class that encapsulates the action of setting the temperature on a thermostat.
 *
 * The SetTemperatureCommand class is responsible for executing a command to change the temperature 
 * of a specified Thermostat. It follows the Command design pattern, allowing for the encapsulation 
 * of the temperature-setting action as an object, which can be executed, stored, and passed around.
 *
 * @implements This class implements the SmartDeviceCommand interface.
 *
 * @ingroup Pattern Wizards
 *
 * @attention Ensure that the thermostat is properly initialized before executing the command.
 * 
 * @warning Executing this command will alter the thermostat's temperature setting.
 * 
 * @note This class is a concrete implementation of the command pattern, allowing for flexible 
 * command execution.
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Salome Kalaka
 * 
 * @see execute()
 */
class SetTemperatureCommand : public SmartDeviceCommand
{
    public:
        /**
         * @brief Constructor for the SetTemperatureCommand class.
         * 
         * This constructor initializes the command with a reference to the thermostat to be controlled.
         * 
         * @param thermostat A pointer to the Thermostat that this command will control.
         */
        SetTemperatureCommand(Thermostat* thermostat);

        /**
         * @brief Destructor for the SetTemperatureCommand class.
         * 
         * Cleans up any resources used by the command.
         */
        ~SetTemperatureCommand();

        /**
         * @brief Executes the command to set the temperature on the thermostat.
         * 
         * This method invokes the appropriate method on the thermostat to change its temperature.
         */
        void execute();
    
    private:
        /**
         * @brief A pointer to the Thermostat being controlled by this command.
         * 
         * This member holds a reference to the specific Thermostat instance to be modified.
         */
        Thermostat* thermostat;
};

#endif
