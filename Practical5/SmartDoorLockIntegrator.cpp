#include "SmartDoorLockIntegrator.h"
#include "LeafOperationException.h"
#include "DoorLock.h"
#include <iostream>
using namespace std;

SmartDoorLockIntegrator::SmartDoorLockIntegrator(LegacyDoorLock* legacyDoorLock)
    : DoorLock("Legacy DoorLock", true), adaptee(legacyDoorLock) {}

SmartDoorLockIntegrator::~SmartDoorLockIntegrator() {}

void SmartDoorLockIntegrator::performAction() {
    adaptee->performLegacyAction();
}

bool SmartDoorLockIntegrator::getStatus() {
    return adaptee->getLegacyStatus();
}

string SmartDoorLockIntegrator::getDeviceType() {
    return adaptee->getLegacyDeviceType();
}