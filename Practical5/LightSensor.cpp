#include "LightSensor.h"
#include "SmartDevice.h"

LightSensor::LightSensor() {
    motionDetected = false;
}

LightSensor::~LightSensor() {}

bool LightSensor::getMotionDetected() {
    return motionDetected;
}

void LightSensor::setMotionDetected(bool motionDetected) {
    this->motionDetected = motionDetected;
}