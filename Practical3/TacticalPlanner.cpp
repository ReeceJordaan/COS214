#include "TacticalPlanner.h"
#include "Flanking.h"
#include "Ambush.h"
#include "Fortification.h"
#include <random>

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
    // Random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, 100);
    
    int successProbability = 50; // Base probability of success

    // Adjust probability based on strategy
    if (dynamic_cast<Flanking*>(strategy)) {
        successProbability += 10;
    } else if (dynamic_cast<Ambush*>(strategy) && isSurprisePossible) {
        successProbability += 20;
    } else if (dynamic_cast<Fortification*>(strategy)) {
        successProbability += 5;
    }

    // Adjust probability based on battlefield conditions
    successProbability -= enemyStrength / 10;      // Stronger enemy reduces success
    successProbability += terrainAdvantage / 10;   // Better terrain increases success

    // Cap probability between 0 and 100
    successProbability = std::max(0, std::min(100, successProbability));

    // Decide outcome based on probability
    int outcome = dist(gen);
    return outcome < successProbability;
}


