#include "Sensor.h"
#include <iostream>
using namespace std;

Sensor::Sensor() {
    sensorList = vector<SmartDevice*>();
}

Sensor::~Sensor() {
    for (int i = 0; i < sensorList.size(); i++) {
        delete sensorList[i];
    }
}

void Sensor::addDevice(SmartDevice* device) {
    sensorList.push_back(device);
}

void Sensor::removeDevice(SmartDevice* device) {
    for (vector<SmartDevice*>::iterator it = sensorList.begin(); it != sensorList.end(); ++it) {
        if (*it == device) {
            sensorList.erase(it);
            delete device;
            break;
        }
    }
}
