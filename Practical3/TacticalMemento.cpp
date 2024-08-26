#include "TacticalMemento.h"

TacticalMemento::TacticalMemento(BattleStrategy* strategy, int enemyStrength, int terrainAdvantage, bool isSurprisePossible, bool wasSuccessful) {
    this->storedStrategy = strategy->clone();
    this->enemyStrength = enemyStrength;
    this->terrainAdvantage = terrainAdvantage;
    this->isSurprisePossible = isSurprisePossible;
    this->wasSuccessful = wasSuccessful;
}

TacticalMemento::~TacticalMemento() {
    if(storedStrategy != nullptr) {
        delete storedStrategy;
    }
}

BattleStrategy* TacticalMemento::getStoredStrategy() {
    return storedStrategy;
}

int TacticalMemento::getEnemyStrength() {
    return enemyStrength;
}

int TacticalMemento::getTerrainAdvantage() {
    return terrainAdvantage;
}

bool TacticalMemento::getIsSurprisePossible() {
    return isSurprisePossible;
}

bool TacticalMemento::getWasSuccessful() {
    return wasSuccessful;
}