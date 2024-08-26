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

void WarArchives::removeTacticalMemento(const std::string& label) {
    auto it = mementos.find(label);

    if (it != mementos.end()) {
        delete it->second;
        mementos.erase(it);
    }
}
