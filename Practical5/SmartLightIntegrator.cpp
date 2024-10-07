#include "SmartLightIntegrator.h"
#include "LeafOperationException.h"
#include "Light.h"
#include <iostream>
using namespace std;

SmartLightIntegrator::SmartLightIntegrator(LegacyLight* legacyLight) : Light(legacyLight->getLegacyStatus()), adaptee(legacyLight) {}

SmartLightIntegrator::~SmartLightIntegrator() {}

void SmartLightIntegrator::performAction() {
    adaptee->performLegacyAction();
}

bool SmartLightIntegrator::getStatus() {
    return adaptee->getLegacyStatus();
}

void SmartLightIntegrator::setStatus(bool status) {
    adaptee->setLegacyStatus(status);
}

string SmartLightIntegrator::getDeviceType() {
    return adaptee->getLegacyDeviceType();
}

void SmartLightIntegrator::update() {
    if (sensor != nullptr) {
        sensorState = ((LightSensor*) sensor)->getMotionDetected();

        if((sensorState && !getStatus()) || (!sensorState && getStatus())) {
            adaptee->legacyUpdate();
        }
    } else {
        cout << adaptee->getLegacyDeviceType() << " does not have a sensor." << endl;
    }
}
