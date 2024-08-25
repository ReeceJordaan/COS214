#include "TacticalPlanner.h"
#include <iostream>

TacticalPlanner::TacticalPlanner(){
    currentStrategy = nullptr;
}

void TacticalPlanner::setStrategy(BattleStrategy* strategy) {
    if (currentStrategy != nullptr) {
        delete currentStrategy;
    }
    currentStrategy = strategy;
}

TacticalMemento* TacticalPlanner::createMemento() {
    return new TacticalMemento(currentStrategy);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
    if (currentStrategy != nullptr) {
        delete currentStrategy;
    }
    currentStrategy = memento->getStoredStrategy();
}

void TacticalPlanner::executeCurrentStrategy() {
    if (currentStrategy != nullptr) {
        currentStrategy->engage();
    } else {
        std::cout << "No strategy set." << std::endl;
    }
}

TacticalPlanner::~TacticalPlanner() {
    if (currentStrategy != nullptr) {
        delete currentStrategy;
    }
}