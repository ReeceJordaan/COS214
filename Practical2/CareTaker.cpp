#include "Memento.h"
#include "CareTaker.h"

Memento* CareTaker::undo() {
    if (!mementoStack.empty()) {
        Memento* memento = mementoStack.top();
        mementoStack.pop();
        return memento;
    }

    return nullptr;
}

void CareTaker::save(Memento* mem) {
    if (mem != nullptr) {
        mementoStack.push(mem);
    }
}

CareTaker::~CareTaker() {
    while (!mementoStack.empty()) {
        delete mementoStack.top();
        mementoStack.pop();
    }
}