#include "Light.h"
#include <iostream>
using namespace std;

Light::Light(bool status) : SmartDevice(status) {
    sensorState = false;
    sensor = nullptr;
}

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
    if(sensor != nullptr) {
        sensorState = ((LightSensor*) sensor)->getMotionDetected();

        if((sensorState && !status) || (!sensorState && status)) {
            performAction();
        }
    } else {
        cout << getDeviceType() << " does not have a sensor." << endl;
    }
}