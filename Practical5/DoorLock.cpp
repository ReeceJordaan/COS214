#include "DoorLock.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

DoorLock::DoorLock(bool status) : SmartDevice(status) {
    sensorState = false;
    sensor = nullptr;
}

DoorLock::~DoorLock() {}

void DoorLock::performAction() {
    if (getStatus()) {
        cout << getDeviceType() << " has been unlocked." << endl;
    } else {
        cout << getDeviceType() << " has been locked." << endl;
    }

    this->status = !status;
}

string DoorLock::getDeviceType() {
    return "Door Lock";
}

void DoorLock::update() {
    if(sensor != nullptr) {
        sensorState = ((DoorSensor*) sensor)->getInactivityDetected();

        // A door can only lock since unlocking the door simply due to activity defeats the purpose of a lock.
        if(sensorState && !status) {
            performAction();
        }
    } else {
        cout << getDeviceType() << " does not have a sensor." << endl;
    }
}