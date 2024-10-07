#include "DoorLock.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

DoorLock::DoorLock(bool status) : SmartDevice(status), doorStatus(true) {}

DoorLock::DoorLock(bool status, bool doorStatus) : SmartDevice(status), doorStatus(doorStatus) {}

DoorLock::~DoorLock() {}

void DoorLock::performAction() {
    if (getStatus()) {
        cout << getDeviceType() << " has been unlocked." << endl;
    } else {
        cout << getDeviceType() << " has been locked." << endl;
    }

    this->status = !status;
}

bool DoorLock::getStatus() {
    return status;
}

string DoorLock::getDeviceType() {
    return "Door Lock";
}

/*

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

*/

void DoorLock::update() {
    status = true;
    this->performAction();
    cout << "Door is being locked due to sensor trigger." << endl;
}