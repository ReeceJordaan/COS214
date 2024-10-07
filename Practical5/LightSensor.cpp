#include "LightSensor.h"
#include "SmartDevice.h"

LightSensor::LightSensor() {}

LightSensor::~LightSensor() {}

void LightSensor::notifyDevices() {
    cout << "Light detected. Notifying all connected devices." << endl;
    
    for (vector<SmartDevice*>::iterator it = sensorList.begin(); it != sensorList.end(); ++it) {
        (*it)->update();
    }
}
