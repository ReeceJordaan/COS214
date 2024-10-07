#ifndef SMARTLIGHTINTEGRATOR_H
#define SMARTLIGHTINTEGRATOR_H

#include <string>
#include <iostream>
#include "Light.h"
#include "LegacyLight.h"

using namespace std;

class SmartLightIntegrator : public Light
{
    public:
        SmartLightIntegrator(LegacyLight* legacyLight);
        ~SmartLightIntegrator();

        void performAction();
        bool getStatus();
        void setStatus(bool status);
        string getDeviceType();
        void update();

    private:
        LegacyLight* adaptee;
        


};

#endif
