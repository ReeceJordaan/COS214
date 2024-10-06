#include "DoorLock.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

DoorLock::DoorLock(string type, bool status) : SmartDevice(type, status), doorStatus(true) {}

DoorLock::DoorLock(string type, bool status, doorStatus) : SmartDevice(type, status), doorStatus(doorStatus) {}

DoorLock::~DoorLock() {}

void DoorLock::performAction() {
    if (getStatus()) {
        cout << getDeviceType() << " is turned on." << endl;
    } else {
        cout << getDeviceType() << " is turned off." << endl;
    }
}

bool DoorLock::getStatus() {
    return status;
}

string DoorLock::getDeviceType() {
    return type;
}

void DoorLock::addDevice(SmartDevice* device) {
    try {
        throw LeafOperationException("Cannot add a device to a DoorLock node.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void DoorLock::remove(SmartDevice* device) {
    try {
        throw LeafOperationException("Cannot remove a device from a DoorLock node.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
    }
}

SmartDevice* DoorLock::getChild(int index) {
    try {
        throw LeafOperationException("DoorLock nodes do not have children.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
        return nullptr;
    }
}

void DoorLock::update() {
    status = true;
    this->performAction();
    cout << "Door is being locked due to sensor trigger." << endl;
}