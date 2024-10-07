#include "LegacyDoorLock.h"
#include <iostream>
using namespace std;

LegacyDoorLock::LegacyDoorLock(bool status) : legacyStatus(status) {}

LegacyDoorLock::~LegacyDoorLock() {}

void LegacyDoorLock::performLegacyAction() {
    if (getLegacyStatus()) {
        cout << getLegacyDeviceType() << " has been unlocked." << endl;
    } else {
        cout << getLegacyDeviceType() << " has been locked." << endl;
    }

    this->legacyStatus = !legacyStatus;
}

bool LegacyDoorLock::getLegacyStatus() {
    return legacyStatus;
}

void LegacyDoorLock::setLegacyStatus(bool status) {
this->legacyStatus = status;
}

string LegacyDoorLock::getLegacyDeviceType() {
    return "Legacy Door Lock";
}

void LegacyDoorLock::legacyUpdate() {
    performLegacyAction();
}
