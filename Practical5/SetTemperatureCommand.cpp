#include "SetTemperatureCommand.h"
#include <iostream>
using namespace std;

SetTemperatureCommand::SetTemperatureCommand(Thermostat* thermostat) : thermostat(thermostat) {}

SetTemperatureCommand::~SetTemperatureCommand() {
    delete thermostat;
    thermostat = nullptr;
}

void SetTemperatureCommand::execute() {
    if (thermostat) {
        thermostat->performAction();
    }
}