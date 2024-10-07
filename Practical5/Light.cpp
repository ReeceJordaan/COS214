#include "Light.h"
#include "LeafOperationException.h"
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

bool Light::getStatus() {
    return status;
}

string Light::getDeviceType() {
    return "Light";
}

/*

void Light::addDevice(SmartDevice* device) {
    try {
        throw LeafOperationException("Cannot add a device to a Light node.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void Light::remove(SmartDevice* device) {
    try {
        throw LeafOperationException("Cannot remove a device from a Light node.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
    }
}

SmartDevice* Light::getChild(int index) {
    try {
        throw LeafOperationException("Light nodes do not have children.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
        return nullptr;
    }
}

*/

void Light::update() {
    this->performAction();
    cout << "Light is turned on due to sensor trigger." << endl;
}