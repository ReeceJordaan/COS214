#include "DoorSensor.h"
#include "SmartDevice.h"

DoorSensor::DoorSensor() {}

DoorSensor::~DoorSensor() {}

void DoorSensor::notifyDevices() {
    cout << "Door sensor triggered. Notifying all connected devices." << endl;
    for (vector<SmartDevice*>::iterator it = sensorList.begin(); it != sensorList.end(); ++it) {
        (*it)->update();
    }
}
