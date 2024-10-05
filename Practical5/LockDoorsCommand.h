#ifndef LOCKDOORSCOMMAND_H
#define LOCKDOORSCOMMAND_H

#include "DoorLock.h"
#include "SmartDeviceCommand.h"
#include <iostream>
using namespace std;

class LockDoorsCommand : public SmartDeviceCommand
{
    public:
        LockDoorsCommand(DoorLock* doorLock);
        virtual ~LockDoorsCommand();

        void execute();
    
    private:
        DoorLock* doorLock;
};


#endif
