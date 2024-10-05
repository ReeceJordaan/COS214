#include "SmartDevice.h"
#include <iostream>
using namespace std;

SmartDevice::SmartDevice(string type, bool status) : sensorList(){
    this->type = type;
    this->status = status;
}

SmartDevice::~SmartDevice() {}