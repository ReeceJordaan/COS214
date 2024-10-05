#include "LockDoorsCommand.h"
#include <iostream>
using namespace std;

LockDoorsCommand::LockDoorsCommand(DoorLock* doorLock) : doorLock(doorLock) {}

LockDoorsCommand::~LockDoorsCommand() {
    delete doorLock;
    doorLock = nullptr;
}

void LockDoorsCommand::execute() {
    if (doorLock) {
        doorLock->performAction();
    }
}