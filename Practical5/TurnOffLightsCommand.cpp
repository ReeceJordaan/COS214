#include "TurnOffLightsCommand.h"
#include <iostream>
using namespace std;

TurnOffLightsCommand::TurnOffLightsCommand(Light* light) : light(light) {}

TurnOffLightsCommand::~TurnOffLightsCommand() {
    delete light;
    light = nullptr;
}

void TurnOffLightsCommand::execute() {
    if (light) {
        light->performAction();
    }
}