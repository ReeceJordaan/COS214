#include "Sensor.h"
#include <iostream>
using namespace std;

Sensor::Sensor() {
    deviceList = vector<SmartDevice*>();
}

Sensor::~Sensor() {
    deviceList.clear();
}

void Sensor::addDevice(SmartDevice* device) {
    deviceList.push_back(device);
    device->setSensor(this);
}

void Sensor::removeDevice(SmartDevice* device) {
    for (int i = 0; i < deviceList.size(); i++) {
        if (deviceList[i] == device) {
            device->setSensor(nullptr);
            deviceList.erase(deviceList.begin() + i);
            cout << "Device removed from the sensor." << std::endl;
            return;
        }
    }
    cout << "Device not found in the sensor." << std::endl;
}

void Sensor::notifyDevices() {
    cout << "A sensor has been triggered. Notifying all connected devices." << endl;

    for (vector<SmartDevice*>::iterator it = deviceList.begin(); it != deviceList.end(); ++it) {
        (*it)->update();
    }
}