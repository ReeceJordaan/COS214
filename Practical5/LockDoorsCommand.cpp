#include "LockDoorsCommand.h"
#include <iostream>
using namespace std;

LockDoorsCommand::LockDoorsCommand(DoorLock* doorLock) : doorLock(doorLock) {}

LockDoorsCommand::~LockDoorsCommand() { }

void LockDoorsCommand::execute() {
    if (!doorLock->getStatus()) {
        doorLock->performAction();
    }
}