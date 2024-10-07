#include "LegacyLight.h"
#include <iostream>
using namespace std;

LegacyLight::LegacyLight(bool status) : legacyStatus(status) {}

LegacyLight::~LegacyLight() {}

void LegacyLight::performLegacyAction() {
    if (getLegacyStatus()) {
        cout << getLegacyDeviceType() << " has been turned off." << endl;
    } else {
        cout << getLegacyDeviceType() << " has been turned on." << endl;
    }

    this->legacyStatus = !legacyStatus;
}

bool LegacyLight::getLegacyStatus() {
    return legacyStatus;
}

void LegacyLight::setLegacyStatus(bool status) {
    this->legacyStatus = status;
}

string LegacyLight::getLegacyDeviceType() {
    return "Legacy Light";
}

void LegacyLight::legacyUpdate() {
    performLegacyAction();
}