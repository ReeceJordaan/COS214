#include "SmartDevice.h"
#include "LeafOperationException.h"
#include <iostream>
using namespace std;

SmartDevice::SmartDevice(bool status) {
    this->status = status;
}

SmartDevice::~SmartDevice() {}

bool SmartDevice::getStatus() {
    return status;
}

void SmartDevice::setStatus(bool status) {
    this->status = status;
}

void SmartDevice::add(SmartDevice* device) {
    try {
        throw LeafOperationException("Cannot add a device to a leaf node.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void SmartDevice::remove(SmartDevice* device) {
    try {
        throw LeafOperationException("Cannot remove a device from a leaf node.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
    }
}

SmartDevice* SmartDevice::getChild(int index) {
    try {
        throw LeafOperationException("Leaf nodes do not have children.");
    } catch (const LeafOperationException& e) {
        cout << "Error: " << e.what() << endl;
        return nullptr;
    }
}

void SmartDevice::setSensor(Sensor* sensor) {
    this-> sensor = sensor;
}