#include "SmartHomeSystem.h"
#include <iostream>
#include <stdexcept>
using namespace std;

SmartHomeSystem::SmartHomeSystem(bool status) : SmartDevice(status), devices() {}

SmartHomeSystem::~SmartHomeSystem() {
    /* for (int i = 0; i < devices.size(); i++) {
        delete devices[i];
    } */
}

void SmartHomeSystem::performAction() {
    cout << "Performing action for all devices in the " << getDeviceType() << endl;
    for (int i = 0; i < devices.size(); i++) {
        devices[i]->performAction();
    }
}

bool SmartHomeSystem::getStatus() {
    cout << "Getting status of all devices in " << getDeviceType() << endl;
    for (int i = 0; i < devices.size(); i++) {
        cout << devices[i]->getDeviceType() << ": " << devices[i]->getStatus() << endl;
    }
    return status;  // returns overall status
}

string SmartHomeSystem::getDeviceType() {
    return "Smart Home System";
}

void SmartHomeSystem::add(SmartDevice* device) {
    devices.push_back(device);
}

void SmartHomeSystem::remove(SmartDevice* device) {
    for (int i = 0; i < devices.size(); i++) {
        if (devices[i] == device) {
            delete devices[i];
            devices.erase(devices.begin() + i);
            cout << "Device removed from the Smart Home System." << std::endl;
            return;
        }
    }
    cout << "Device not found in the Smart Home System." << std::endl;
}

SmartDevice* SmartHomeSystem::getChild(int index) {
    if (index >= 0 && index < devices.size()) {
        return devices[index];
    } else {
        throw out_of_range("Index out of range.");
    }
}

void update() {
    std::cout << "Smart Home System update()" << std::endl;
}