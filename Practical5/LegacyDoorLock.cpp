#include "LegacyDoorLock.h"
#include <iostream>
using namespace std;

LegacyDoorLock::LegacyDoorLock(bool status) : legacyStatus(status), type("Legacy DoorLock") {}

LegacyDoorLock::~LegacyDoorLock() {}

void LegacyDoorLock::performLegacyAction() {
    cout << "Legacy DoorLock performing action..." << endl;
    legacyStatus = !legacyStatus;
    cout << "DoorLock is now " << (legacyStatus ? "on" : "off") << endl;
}

bool LegacyDoorLock::getLegacyStatus() {
    return legacyStatus;
}

string LegacyDoorLock::getLegacyDeviceType() {
    return type;
}
