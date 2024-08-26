#include "TacticalCommand.h"
#include "Flanking.h"
#include "Ambush.h"
#include "Fortification.h"
#include <iostream>
#include <ctime>

TacticalCommand::TacticalCommand(int enemyStrength, int terrainAdvantage, bool isSurprisePossible) {
    planner = new TacticalPlanner();
    archives = new WarArchives();
    strategy = nullptr;
    this->enemyStrength = enemyStrength;
    this->terrainAdvantage = terrainAdvantage;
    this->isSurprisePossible = isSurprisePossible;
}

void TacticalCommand::setStrategy(BattleStrategy* strategy) {
    if (this->strategy != strategy) {
        delete this->strategy;
    }

    this->strategy = strategy->clone();
    planner->setCurrentStrategy(this->strategy, enemyStrength, terrainAdvantage, isSurprisePossible);
}

void TacticalCommand::chooseBestStrategy() {
    std::cout << "Choosing the best strategy based on previous engagements..." << std::endl;

    int randomStrategy = std::rand() % 4;

    if (randomStrategy == 0) {
        std::cout << "Choosing Flanking strategy based on battlefield conditions..." << std::endl;
        setStrategy(new Flanking());
    } else if (randomStrategy == 1) {
        std::cout << "Choosing Fortification strategy based on battlefield conditions..." << std::endl;
        setStrategy(new Fortification());
    } else if (randomStrategy == 2) {
        std::cout << "Choosing Ambush strategy based on battlefield conditions..." << std::endl;
        setStrategy(new Ambush());
    } else {
        std::cout << "Reusing a successful strategy from previous engagements..." << std::endl;

        std::string label = "Last Engagement";
        TacticalMemento* bestMemento = archives->getMemento(label);

        if (bestMemento != nullptr) {
            planner->restoreMemento(bestMemento);
        } else {
            setStrategy(new Flanking());
        }
    }
}

void TacticalCommand::executeStrategy() {
    if (strategy != nullptr) {
        strategy->engage();
        TacticalMemento* memento = planner->createMemento();
        archives->addTacticalMemento(memento, "Last Engagement");
    } else {
        std::cout << "No strategy set. Unable to execute." << std::endl;
    }
}

TacticalCommand::~TacticalCommand() {
    if (strategy != nullptr) {
        delete strategy;
        strategy = nullptr;
    }

    if (archives != nullptr) {
        delete archives;
        archives = nullptr;
    }
    
    if (planner != nullptr) {
        delete planner;
        planner = nullptr;
    }
}