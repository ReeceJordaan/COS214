#include "SmartDoorLockIntegrator.h"
#include "LeafOperationException.h"
#include "DoorLock.h"
#include <iostream>
using namespace std;

SmartDoorLockIntegrator::SmartDoorLockIntegrator(LegacyDoorLock* legacyDoorLock)
    : DoorLock(true), adaptee(legacyDoorLock) {}

SmartDoorLockIntegrator::~SmartDoorLockIntegrator() {}

void SmartDoorLockIntegrator::performAction() {
    adaptee->performLegacyAction();
}

bool SmartDoorLockIntegrator::getStatus() {
    return adaptee->getLegacyStatus();
}

void SmartDoorLockIntegrator::setStatus(bool status) {
    adaptee->setLegacyStatus(status);
}

string SmartDoorLockIntegrator::getDeviceType() {
    return adaptee->getLegacyDeviceType();
}

void SmartDoorLockIntegrator::update() {
    if (sensor != nullptr) {
        sensorState = ((DoorSensor*) sensor)->getInactivityDetected();

        if(sensorState && !status) {
            adaptee->legacyUpdate();
        }
    } else {
        cout << adaptee->getLegacyDeviceType() << " does not have a sensor." << endl;
    }
}