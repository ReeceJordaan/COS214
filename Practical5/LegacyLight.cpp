#include "LegacyLight.h"
#include <iostream>
using namespace std;

LegacyLight::LegacyLight(bool status) : legacyStatus(status), type("Legacy Light") {}

LegacyLight::~LegacyLight() {}

void LegacyLight::performLegacyAction() {
    cout << "Legacy Light performing action..." << endl;
    legacyStatus = !legacyStatus;
    cout << "Light is now " << (legacyStatus ? "on" : "off") << endl;
}

bool LegacyLight::getLegacyStatus() {
    return legacyStatus;
}

string LegacyLight::getLegacyDeviceType() {
    return type;
}
