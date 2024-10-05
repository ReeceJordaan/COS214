#ifndef SMARTDEVICECOMMAND_H
#define SMARTDEVICECOMMAND_H

#include <vector>
#include <iostream>
using namespace std;

class SmartDeviceCommand
{
    public:
        SmartDeviceCommand();
        virtual ~SmartDeviceCommand();

        virtual void execute() = 0;
};


#endif
