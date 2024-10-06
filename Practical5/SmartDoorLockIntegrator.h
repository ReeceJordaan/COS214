#ifndef SMARTDOORLOCKINTEGRATOR_H
#define SMARTDOORLOCKINTEGRATOR_H

#include <string>
#include <iostream>
#include "DoorLock.h"
#include "LegacyDoorLock.h"

using namespace std;

class SmartDoorLockIntegrator : public DoorLock
{
    public:
        SmartDoorLockIntegrator(LegacyDoorLock* legacyDoorLock);
        virtual ~SmartDoorLockIntegrator();

        void performAction();
        bool getStatus();
        string getDeviceType();

    private:
        LegacyDoorLock* adaptee;
        


};

#endif
