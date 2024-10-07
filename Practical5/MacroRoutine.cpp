#include "MacroRoutine.h"
#include <iostream>
using namespace std;

MacroRoutine::MacroRoutine() : commands() {
    
}

MacroRoutine::~MacroRoutine() {
    for (int i = 0; i < commands.size(); i++) {
        delete commands[i];
    }

    commands.clear();
}

void MacroRoutine::execute() {
    for (int i = 0; i < commands.size(); i++) {
        if(commands[i]) {
            commands[i]->execute();
        }
    }
}

void MacroRoutine::AddProcedure(SmartDeviceCommand* procedure) {
    commands.push_back(procedure);
}

void MacroRoutine::RemoveProcedure(SmartDeviceCommand* procedure) {
    for (int i = 0; i < commands.size(); i++) {
        if (commands[i] == procedure) {
            delete commands[i];
            commands.erase(commands.begin() + i);
            break;
        }
    }
}