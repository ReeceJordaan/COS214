#ifndef TURNOFFLIGHTSCOMMAND_H
#define TURNOFFLIGHTSCOMMAND_H

#include "Light.h"
#include "SmartDeviceCommand.h"
#include <iostream>
using namespace std;

/**
 * @class TurnOffLightsCommand
 * @brief Command to turn off a light.
 *
 * The TurnOffLightsCommand class is a concrete implementation of the SmartDeviceCommand
 * interface. It encapsulates the action of turning off a specific light device.
 * This command can be executed to change the state of the light as part of the command pattern.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class implements the SmartDeviceCommand interface, providing a specific
 *              command to control light devices.
 *
 * @author Salome Kalaka
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see SmartDeviceCommand class, execute()
 * @todo Add error handling for cases when the light pointer is null.
 *
 * @warning Ensure that the light object is valid before executing the command to avoid dereferencing a null pointer.
 */
class TurnOffLightsCommand : public SmartDeviceCommand
{
    public:
        /**
         * @brief Constructs a TurnOffLightsCommand for a specific light.
         *
         * Initializes the command with a reference to the light that will be turned off.
         *
         * @param light A pointer to the Light object to be controlled.
         */
        TurnOffLightsCommand(Light* light);

        /**
         * @brief Destructor for the TurnOffLightsCommand class.
         *
         * Cleans up resources associated with the TurnOffLightsCommand instance.
         */
        ~TurnOffLightsCommand();

        /**
         * @brief Executes the command to turn off the light.
         *
         * This method invokes the performAction method on the light object,
         * changing its state to off.
         */
        void execute();
    
    private:
        /**
         * @brief Pointer to the Light object that this command will control.
         */
        Light* light;
};

#endif
