#include "TacticalMemento.h"

TacticalMemento::TacticalMemento(BattleStrategy* strategy){
    storedStrategy = strategy;
}

BattleStrategy* TacticalMemento::getStoredStrategy() const {
    return storedStrategy;
}

TacticalMemento::~TacticalMemento() {
    delete storedStrategy;
}