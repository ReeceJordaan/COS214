#include "SmartLightIntegrator.h"
#include "LeafOperationException.h"
#include "Light.h"
#include <iostream>
using namespace std;

SmartLightIntegrator::SmartLightIntegrator(LegacyLight* legacyLight)
    : Light("Legacy Light", true), adaptee(legacyLight) {}

SmartLightIntegrator::~SmartLightIntegrator() {}

void SmartLightIntegrator::performAction() {
    adaptee->performLegacyAction();
}

bool SmartLightIntegrator::getStatus() {
    return adaptee->getLegacyStatus();
}

string SmartLightIntegrator::getDeviceType() {
    return adaptee->getLegacyDeviceType();
}
