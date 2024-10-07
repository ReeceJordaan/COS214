#include "Thermostat.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

Thermostat::Thermostat(bool status, int temperature) : SmartDevice(status) {
    this->temperature = temperature;
    sensorState = false;
    sensor = nullptr;

}

Thermostat::Thermostat(bool status) : SmartDevice(status) {
    temperature = 25;
    sensorState = false;
    sensor = nullptr;
}

Thermostat::~Thermostat() {}

void Thermostat::performAction() {
    if (getStatus()) {
        cout << getDeviceType() << " has been turned off because the temperature has reached an optimal level." << endl;
    } else {
        // A random temperature (It detects the optimal temperature)
        temperature = 20 + (rand() % 11);
        cout << getDeviceType() << " has been turned on and is adjusting the temperature to an optimal level of " << temperature << "C." << endl;
    }

    this->status = !status;
}

string Thermostat::getDeviceType() {
    return "Thermostat";
}

void Thermostat::update() {
    if (sensor != nullptr) {
        sensorState = ((ThermostatSensor*) sensor)->getThresholdReached();

        if((sensorState && !status) || (!sensorState && status)) {
            performAction();
        }
    } else {
        cout << getDeviceType() << " does not have a sensor." << endl;
    }
}

int Thermostat::getTemperature() {
    return temperature;
}

void Thermostat::setTemperature(int temp) {
    this->temperature = temp;
    cout << "Thermostat temperature set to " << temperature << "C." << endl;
}