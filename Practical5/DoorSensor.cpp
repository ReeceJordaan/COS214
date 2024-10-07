#include "DoorSensor.h"
#include "SmartDevice.h"

DoorSensor::DoorSensor() {
    inactivityDetected = false;
}

DoorSensor::~DoorSensor() {}

bool DoorSensor::getInactivityDetected() {
    return inactivityDetected;
}

void DoorSensor::setInactivityDetected(bool inactivityDetected) {
    this->inactivityDetected = inactivityDetected;
}