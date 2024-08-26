#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalPlanner.h"
#include "WarArchives.h"
#include <iostream>

class TacticalCommand {
    public:
        TacticalCommand(int enemyStrength, int terrainAdvantage, bool isSurprisePossible);
        void chooseBestStrategy();
        void executeStrategy();
        ~TacticalCommand();

    private:
        BattleStrategy* strategy;
        TacticalPlanner* planner;
        WarArchives* archives;
        int enemyStrength;
        int terrainAdvantage;
        bool isSurprisePossible;
        void setStrategy(BattleStrategy* strategy);
};

#endif // TACTICALCOMMAND_H

