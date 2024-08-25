#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
    mementos[label] = memento;
}

TacticalMemento* WarArchives::getTacticalMemento(const std::string& label) {
    if (mementos.find(label) != mementos.end()) {
        return mementos[label];
    }
    return nullptr;
}

void WarArchives::removeTacticalMemento(const std::string& label) {
    auto it = mementos.find(label);
    if (it != mementos.end()) {
        delete it->second;
        mementos.erase(it);
    }
}

WarArchives::~WarArchives() {
    for (auto& pair : mementos) {
        delete pair.second;
    }
    mementos.clear();
}