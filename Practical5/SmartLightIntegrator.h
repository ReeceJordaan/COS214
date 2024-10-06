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
        virtual ~SmartLightIntegrator();

        void performAction();
        bool getStatus();
        string getDeviceType();

    private:
        LegacyLight* adaptee;
        


};

#endif
