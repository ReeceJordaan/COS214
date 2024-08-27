#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "TacticalPlanner.h"
#include "BattleStrategy.h"
#include "TacticalMemento.h"
#include "Flanking.h"
#include "Ambush.h"
#include "Fortification.h"
#include <iostream>

class TacticalPlanner {
    public:
        TacticalPlanner();
        ~TacticalPlanner();
        TacticalMemento* createMemento();
        void restoreMemento(TacticalMemento* memento);
        void setCurrentStrategy(BattleStrategy* strategy,  int enemyStrength, int terrainAdvantage, bool isSurprisePossible);

    private:
        bool decideOutcome(BattleStrategy* strategy, int enemyStrength, int terrainAdvantage, bool isSurprisePossible);
        BattleStrategy* currentStrategy;
        int enemyStrength;
        int terrainAdvantage;
        bool isSurprisePossible;
        bool wasSuccessful;
};

#endif // TACTICALPLANNER_H
