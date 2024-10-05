#include "Thermostat.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

Thermostat::Thermostat(string type, bool status, int temperature) : SmartDevice(type, status), temperature(temperature) {}

Thermostat::Thermostat(string type, bool status) : SmartDevice(type, status), temperature(25) {}

Thermostat::~Thermostat() {}

void Thermostat::performAction() {
    if (getStatus()) {
        cout << getDeviceType() << " is turned on." << endl;
    } else {
        cout << getDeviceType() << " is turned off." << endl;
    }
}

bool Thermostat::getStatus() {
    return status;
}

string Thermostat::getDeviceType() {
    return type;
}

void Thermostat::addDevice(SmartDevice* device) {
    try {
        throw LeafOperationException("Cannot add a device to a Thermostat node.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void Thermostat::remove(SmartDevice* device) {
    try {
        throw LeafOperationException("Cannot remove a device from a Thermostat node.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
    }
}

SmartDevice* Thermostat::getChild(int index) {
    try {
        throw LeafOperationException("Thermostat nodes do not have children.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
        return nullptr;
    }
}

void Thermostat::update() {
    cout << "Thermostat is adjusting temperature due to sensor trigger." << endl;
    temperature = 25;
    cout << "Temperature is now " << temperature << "degrees celcius." << endl;
}