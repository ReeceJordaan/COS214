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
    lightSensorState = lightSensor->getMotionDetected();

    if((lightSensorState && !status) || (!lightSensorState && status)) {
        adaptee->legacyUpdate();
    }
}
