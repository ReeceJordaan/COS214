#include "TurnOffLightsCommand.h"
#include <iostream>
using namespace std;

TurnOffLightsCommand::TurnOffLightsCommand(Light* light) : light(light) {}

TurnOffLightsCommand::~TurnOffLightsCommand() { }

void TurnOffLightsCommand::execute() {
    if (light->getStatus()) {
        light->performAction();
    }
}