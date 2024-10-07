#include "Light.h"
#include <iostream>
using namespace std;

Light::Light(bool status) : SmartDevice(status) {}

Light::~Light() {}

void Light::performAction() {
    if (getStatus()) {
        cout << getDeviceType() << " has been turned off." << endl;
    } else {
        cout << getDeviceType() << " has been turned on." << endl;
    }

    this->status = !status;
}

string Light::getDeviceType() {
    return "Light";
}

void Light::update() {
    lightSensorState = lightSensor->getMotionDetected();

    if((lightSensorState && !status) || (!lightSensorState && status)) {
        performAction();
    }
}