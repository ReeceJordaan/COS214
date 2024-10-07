#include "SmartHomeSystem.h"
#include <iostream>
#include <stdexcept>
using namespace std;

SmartHomeSystem::SmartHomeSystem(bool status) : SmartDevice(status), devices() {}

SmartHomeSystem::~SmartHomeSystem() {
    devices.clear();
}

void SmartHomeSystem::performAction() {
    status = !status;
    cout << "Switching all devices in the Smart Home System to the " << (status == 0 ? "OFF/UNLOCKED" : "ON/LOCKED") << " state." << endl;

    for (int i = 0; i < devices.size(); i++) {
        if(devices[i]->getStatus() != status) {
            devices[i]->performAction();
        }
    }
}

bool SmartHomeSystem::getStatus() {
    cout << "Getting status of all devices in the Smart Home System." << endl;

    for (int i = 0; i < devices.size(); i++) {
        cout << devices[i]->getDeviceType() << ": " << devices[i]->getStatus() << endl;
    }

    return status;  // Returns overall status. All devices are either ON (status = 1) otherwise (status = 0)
}

string SmartHomeSystem::getDeviceType() {
    cout << "Getting type of all devices in the Smart Home System." << endl;
    string types = "";

    for (int i = 0; i < devices.size(); i++) {
        types += "Device " + to_string(i) + ": " + devices[i]->getDeviceType() + "\n";
    }

    return types;
}

void SmartHomeSystem::add(SmartDevice* device) {
    devices.push_back(device);
}

void SmartHomeSystem::remove(SmartDevice* device) {
    for (int i = 0; i < devices.size(); i++) {
        if (devices[i] == device) {
            devices.erase(devices.begin() + i);
            cout << devices[i]->getDeviceType() << " removed from the Smart Home System." << std::endl;
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

void SmartHomeSystem::update() {
    cout << "Updating all of the devices in the Smart Home System." << endl;

    for (int i = 0; i < devices.size(); i++) {
        devices[i]->update();
    }
}