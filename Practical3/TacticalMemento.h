#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"

class TacticalMemento {
    public:
        TacticalMemento(BattleStrategy* strategy, int enemyStrength, int terrainAdvantage, bool isSurprisePossible, bool wasSuccessful);
        ~TacticalMemento();

        BattleStrategy* getStoredStrategy();
        int getEnemyStrength();
        int getTerrainAdvantage();
        bool getIsSurprisePossible();
        bool getWasSuccessful();

    private:
        BattleStrategy* storedStrategy;
        int enemyStrength;
        int terrainAdvantage;
        bool isSurprisePossible;
        bool wasSuccessful;
};

#endif