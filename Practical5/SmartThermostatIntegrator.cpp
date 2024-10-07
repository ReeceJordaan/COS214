#include "SmartThermostatIntegrator.h"
#include "LeafOperationException.h"
#include "Thermostat.h"
#include <iostream>
using namespace std;

SmartThermostatIntegrator::SmartThermostatIntegrator(LegacyThermostat* legacyThermostat) : Thermostat("Legacy Thermostat", true), adaptee(legacyThermostat) {}

SmartThermostatIntegrator::~SmartThermostatIntegrator() {}

void SmartThermostatIntegrator::performAction() {
    adaptee->performLegacyAction();
}

bool SmartThermostatIntegrator::getStatus() {
    return adaptee->getLegacyStatus();
}

void SmartThermostatIntegrator::setStatus(bool status) {
    adaptee->setLegacyStatus(status);
}

string SmartThermostatIntegrator::getDeviceType() {
    return adaptee->getLegacyDeviceType();
}

void SmartThermostatIntegrator::update() {
    thermostatSensorState = thermostatSensor->getThresholdReached();

    if((thermostatSensorState && !status) || (!thermostatSensorState && status)) {
        adaptee->legacyUpdate();
    }
}

void SmartThermostatIntegrator::setTemperature(int temperature) {
    adaptee->setLegacyTemperature(temperature);
}

int SmartThermostatIntegrator::getTemperature() {
    return adaptee->getLegacyTemperature();
}