#include "ThermostatSensor.h"
#include "SmartDevice.h"

ThermostatSensor::ThermostatSensor() {
    thresholdReached = false;
}

ThermostatSensor::~ThermostatSensor() {}

bool ThermostatSensor::getThresholdReached() {
    return thresholdReached;
}

void ThermostatSensor::setThresholdReached(bool thresholdReached) {
    this->thresholdReached = thresholdReached;
}