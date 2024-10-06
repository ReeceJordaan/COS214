#include "LegacyThermostat.h"
#include <iostream>
using namespace std;

LegacyThermostat::LegacyThermostat(bool status, int temperature) : temperature(temperature), legacyStatus(status), type("Legacy Thermostat") {}

LegacyThermostat::~LegacyThermostat() {}

void LegacyThermostat::performLegacyAction() {
    cout << "Legacy Thermostat performing action..." << endl;
    legacyStatus = !legacyStatus;
    cout << "Thermostat is now " << (legacyStatus ? "on" : "off") << endl;
}

bool LegacyThermostat::getLegacyStatus() {
    return legacyStatus;
}

string LegacyThermostat::getLegacyDeviceType() {
    return type;
}

int LegacyThermostat::getLegacyTemperature() {
    return temperature;
}

void LegacyThermostat::setLegacyTemperature(int temp) {
    temperature = temp;
    cout << "Legacy Thermostat temperature set to " << temperature << " degrees." << endl;
}
