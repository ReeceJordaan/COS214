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
    if (sensor != nullptr) {
        sensorState = ((ThermostatSensor*) sensor)->getThresholdReached();

        if((sensorState && !status) || (!sensorState && status)) {
            adaptee->legacyUpdate();
        }
    } else {
        cout << adaptee->getLegacyDeviceType() << " does not have a sensor." << endl;
    }
}

void SmartThermostatIntegrator::setTemperature(int temperature) {
    adaptee->setLegacyTemperature(temperature);
}

int SmartThermostatIntegrator::getTemperature() {
    return adaptee->getLegacyTemperature();
}