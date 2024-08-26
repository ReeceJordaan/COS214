#include "TacticalCommand.h"
#include "Flanking.h"
#include "Ambush.h"
#include "Fortification.h"
#include <iostream>
//Integrated Memento with TacticalCommand (Memento Client)
//Constructor initializes with no strategy
TacticalCommand::TacticalCommand(int enemyStrength, int terrainAdvantage, bool isSurprisePossible) {
    strategy = nullptr;
    planner = new TacticalPlanner();
    archives = new WarArchives();
    this->enemyStrength = enemyStrength;
    this->terrainAdvantage = terrainAdvantage;
    this->isSurprisePossible = isSurprisePossible;
} 

// Set the strategy at runtime
void TacticalCommand::setStrategy(BattleStrategy* s) {
    if (strategy != s) {
        // If not the same, safely delete the current strategy
        delete strategy;
        strategy = s->clone();
    }

    planner->setStrategy(strategy); // Pass the cloned strategy
}

// Execute the current strategy
void TacticalCommand::executeStrategy() {
    if (strategy != nullptr) {
        strategy->engage();
    } else {
        std::cout << "No strategy set. Unable to execute." << std::endl;
    }

    std::string label = "???"; // temporary for testing

    TacticalMemento* memento = planner->createMemento();
    archives->addTacticalMemento(memento, label);
}

// Choose the best strategy based on previous results (to be implemented with Memento pattern)
void TacticalCommand::chooseBestStrategy() {
    std::cout << "Choosing the best strategy based on previous engagements..." << std::endl;
    
    // randomize instead?

    if (enemyStrength > 70 && terrainAdvantage < 60) {
        std::cout << "Choosing Fortification strategy based on battlefield conditions..." << std::endl;
        setStrategy(new Fortification());
    } else if (isSurprisePossible) {
        std::cout << "Choosing Ambush strategy based on battlefield conditions..." << std::endl;
        setStrategy(new Ambush());
    } else {
        std::cout << "Choosing Flanking strategy based on battlefield conditions..." << std::endl;
        setStrategy(new Flanking());
    }
}

TacticalCommand::~TacticalCommand() {
    if (strategy != nullptr) {
        delete strategy; //Clean up the current strategy
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

//If useful, UNCOMMENT the function below
//don't forget to also UNCOMMENT it's definition in the .h file

/*void TacticalCommand::restoreStrategy(const std::string& label) {
    TacticalMemento* memento = archives->getTacticalMemento(label);
    if (memento) {
        planner->restoreMemento(memento);
        executeStrategy();
    } else {
        std::cout << "No strategy found with the label: " << label << std::endl;
    }
}*/