#include "WarArchives.h"

WarArchives::~WarArchives() {
    for (auto& pair : mementos) {
        delete pair.second;
    }
}

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
    mementos[label] = memento;
}

TacticalMemento* WarArchives::getMemento(const std::string& label) {
    return mementos.count(label) ? mementos[label] : nullptr;
}
