#include "SmartDevice.h"
#include <iostream>
using namespace std;

SmartDevice::SmartDevice(bool status) {
    this->status = status;
}

SmartDevice::~SmartDevice() {}



void SmartDevice::add(SmartDevice* device) { }

void SmartDevice::remove(SmartDevice* device) { }

SmartDevice* SmartDevice::getChild(int index) { }



void SmartDevice::addDevice(Sensor* sensor) {
    sensorList.push_back(sensor);
}

void SmartDevice::removeDevice(Sensor* device) {
    for (int i = 0; i < sensorList.size(); i++) {
        if (sensorList[i] == device) {
            delete sensorList[i];
            sensorList.erase(sensorList.begin() + i);
            cout << "Device removed from the Smart Home System." << std::endl;
            return;
        }
    }
    cout << "Device not found in the Smart Home System." << std::endl;
}

Sensor* SmartDevice::getDevice(int index) {
    if (index >= 0 && index < sensorList.size()) {
        return sensorList[index];
    } else {
        throw out_of_range("Index out of range.");
    }
}