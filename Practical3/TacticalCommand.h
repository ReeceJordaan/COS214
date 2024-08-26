#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalPlanner.h"
#include "WarArchives.h"

using namespace std;

//Context
//Also a Memento Client
//Client for the Memento (as well as the Context for Strategy)
//The idea is to use the saved mementos (from caretaker) to make informed decisions of the strategies to use
class TacticalCommand
{
    public:
        TacticalCommand(int enemyStrength, int terrainAdvantage, bool isSurprisePossible);
        void setStrategy(BattleStrategy* s);
        //void restoreStrategy(const std::string& label);
        void executeStrategy(); //Executes the current strategy.
        void chooseBestStrategy(); //chooses an appropraite strategy based on previous results(using the Memento pattern)
        ~TacticalCommand();

    private:
        BattleStrategy* strategy;
        TacticalPlanner* planner;
        WarArchives* archives;
        int enemyStrength;
        int terrainAdvantage;
        bool isSurprisePossible;
};


#endif
