#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"

using namespace std;

//Context
//Also a Memento Client
//Client for the Memento (as well as the Context for Strategy)
//The idea is to use the saved mementos (from caretaker) to make informed decisions of the strategies to use
class TacticalCommand
{
    public:
        void setStrategy(BattleStrategy* s);
        void executeStrategy(); //Executes the current strategy.
        void chooseBestStrategy(); //chooses an appropraite strategy based on previous results(using the Memento pattern)

    private:
        BattleStrategy* strategy;
};


#endif
