#ifndef MACROROUTINE_H
#define MACROROUTINE_H

#include "SmartDeviceCommand.h"
#include <vector>
#include <iostream>
using namespace std;

class MacroRoutine
{
    public:
        MacroRoutine();
        ~MacroRoutine();
        
        void execute();
        void AddProcedure(SmartDeviceCommand* procedure);
        void RemoveProcedure(SmartDeviceCommand* procedure);

    private:
        vector<SmartDeviceCommand*> commands;
};


#endif
