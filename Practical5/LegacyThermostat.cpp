#include "LegacyThermostat.h"
#include <iostream>
using namespace std;

LegacyThermostat::LegacyThermostat(bool status, int temperature) : temperature(temperature), legacyStatus(status) { }

LegacyThermostat::~LegacyThermostat() {}

void LegacyThermostat::performLegacyAction() {
    if (getLegacyStatus()) {
        cout << getLegacyDeviceType() << " has been turned off because the temperature has reached an optimal level." << endl;
    } else {
        temperature = 20 + (rand() % 11);
        cout << getLegacyDeviceType() << " has been turned on and is adjusting the temperature to an optimal level of " << temperature << "°C." << endl;
    }

    this->legacyStatus = !legacyStatus;
}

bool LegacyThermostat::getLegacyStatus() {
    return legacyStatus;
}

void LegacyThermostat::setLegacyStatus(bool status) {
    this->legacyStatus = status;
}

string LegacyThermostat::getLegacyDeviceType() {
    return "Legacy Thermostat";
}

void LegacyThermostat::legacyUpdate() {
    performLegacyAction();
}

int LegacyThermostat::getLegacyTemperature() {
    return temperature;
}

void LegacyThermostat::setLegacyTemperature(int temp) {
    temperature = temp;
    cout << "Legacy Thermostat temperature set to " << temperature << "°C." << endl;
}
