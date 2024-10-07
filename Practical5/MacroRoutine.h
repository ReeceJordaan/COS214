#ifndef MACROROUTINE_H
#define MACROROUTINE_H

#include "SmartDeviceCommand.h"
#include <vector>
#include <iostream>

using namespace std;

/**
 * @class MacroRoutine
 * @brief The invoker class in the Command design pattern that manages and executes a sequence of commands.
 *
 * The MacroRoutine class allows for the grouping of multiple SmartDeviceCommand objects into a single routine. 
 * It is responsible for executing the commands in the order they are added, providing a way to manage complex operations as a single command.
 *
 * @implements This class acts as an invoker for the SmartDeviceCommand interface.
 *
 * @ingroup Pattern Wizards
 * 
 * @attention Ensure that commands are properly added before executing the macro routine.
 * 
 * @warning The execution order is determined by the order in which commands are added.
 * 
 * @note This class supports adding and removing commands dynamically.
 * 
 * @version 1.0
 * 
 * @date 07 October 2024
 * 
 * @author Salome Kalaka
 * 
 * @see execute(), AddProcedure(), RemoveProcedure()
 */
class MacroRoutine
{
    public:
        /**
         * @brief Default constructor for the MacroRoutine class.
         * 
         * Initializes the MacroRoutine with an empty command list.
         */
        MacroRoutine();

        /**
         * @brief Destructor for the MacroRoutine class.
         * 
         * Cleans up any resources used by the MacroRoutine and its commands.
         */
        ~MacroRoutine();
        
        /**
         * @brief Executes all commands in the macro routine.
         * 
         * This method iterates through the stored commands and executes each one in order.
         */
        void execute();

        /**
         * @brief Adds a new procedure to the macro routine.
         * 
         * This method adds a SmartDeviceCommand to the list of commands to be executed.
         * 
         * @param procedure A pointer to the SmartDeviceCommand to be added to the macro routine.
         */
        void AddProcedure(SmartDeviceCommand* procedure);

        /**
         * @brief Removes a procedure from the macro routine.
         * 
         * This method removes a specified SmartDeviceCommand from the list of commands.
         * 
         * @param procedure A pointer to the SmartDeviceCommand to be removed from the macro routine.
         */
        void RemoveProcedure(SmartDeviceCommand* procedure);

    private:
        /**
         * @brief A vector storing the commands to be executed in the macro routine.
         * 
         * This member contains pointers to SmartDeviceCommand objects that are part of the routine.
         */
        vector<SmartDeviceCommand*> commands;
};

#endif
