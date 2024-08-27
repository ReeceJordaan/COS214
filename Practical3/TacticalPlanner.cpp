#include "TacticalPlanner.h"
#include "BattleStrategy.h"
#include "TacticalMemento.h"
#include "Flanking.h"
#include "Ambush.h"
#include "Fortification.h"
#include <iostream>

TacticalPlanner::TacticalPlanner() {
    currentStrategy = nullptr;
}

TacticalPlanner::~TacticalPlanner() {
    if(currentStrategy != nullptr) {
        delete currentStrategy;
        currentStrategy = nullptr;
    }
}

TacticalMemento* TacticalPlanner::createMemento() {
    return new TacticalMemento(currentStrategy->clone(), enemyStrength, terrainAdvantage, isSurprisePossible, wasSuccessful);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
    if(currentStrategy != nullptr) {
        delete currentStrategy;
    }

    currentStrategy = memento->getStoredStrategy()->clone();
}

void TacticalPlanner::setCurrentStrategy(BattleStrategy* strategy, int enemyStrength, int terrainAdvantage, bool isSurprisePossible) {
    if(currentStrategy != nullptr) {
        delete currentStrategy;
    }

    this->currentStrategy = strategy->clone();
    this->enemyStrength = enemyStrength;
    this->terrainAdvantage = terrainAdvantage;
    this->isSurprisePossible = isSurprisePossible;
    this->wasSuccessful = decideOutcome(currentStrategy, enemyStrength, terrainAdvantage, isSurprisePossible);
}

bool TacticalPlanner::decideOutcome(BattleStrategy* strategy, int enemyStrength, int terrainAdvantage, bool isSurprisePossible) {
    int random = std::rand() % 100;
    int successProbability = 50;

    if (dynamic_cast<Flanking*>(strategy)) {
        successProbability += 10;
    } else if (dynamic_cast<Ambush*>(strategy) && isSurprisePossible) {
        successProbability += 20;
    } else if (dynamic_cast<Fortification*>(strategy)) {
        successProbability += 5;
    }

    successProbability -= enemyStrength / 10;      // Stronger enemy reduces success
    successProbability += terrainAdvantage / 10;   // Better terrain increases success

    return random < std::max(0, std::min(100, successProbability));
}


