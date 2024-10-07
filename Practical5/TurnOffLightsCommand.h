#ifndef TURNOFFLIGHTSCOMMAND_H
#define TURNOFFLIGHTSCOMMAND_H

#include "Light.h"
#include "SmartDeviceCommand.h"
#include <iostream>
using namespace std;

class TurnOffLightsCommand : public SmartDeviceCommand
{
    public:
        TurnOffLightsCommand(Light* light);
        ~TurnOffLightsCommand();
        
        void execute();
    
    private:
        Light* light;
};


#endif
