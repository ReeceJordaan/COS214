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
        ~SmartDoorLockIntegrator();

        void performAction();
        bool getStatus();
        void setStatus(bool status);
        string getDeviceType();
        void update();

    private:
        LegacyDoorLock* adaptee;
        


};

#endif
