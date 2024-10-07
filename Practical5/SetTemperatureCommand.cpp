#include "SetTemperatureCommand.h"
#include <iostream>
using namespace std;

SetTemperatureCommand::SetTemperatureCommand(Thermostat* thermostat) : thermostat(thermostat) {}

SetTemperatureCommand::~SetTemperatureCommand() { }

void SetTemperatureCommand::execute() {
    if (!thermostat->getStatus()) {
        thermostat->performAction();
    }
}