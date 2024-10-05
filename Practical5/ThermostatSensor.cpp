#include "ThermostatSensor.h"
#include "SmartDevice.h"

ThermostatSensor::ThermostatSensor() {}

ThermostatSensor::~ThermostatSensor() {}

void ThermostatSensor::notifyDevices() {
    cout << "Temperature change detected. Notifying all connected devices." << endl;
    for (vector<SmartDevice*>::iterator it = sensorList.begin(); it != sensorList.end(); ++it) {
        (*it)->update();
    }
}
