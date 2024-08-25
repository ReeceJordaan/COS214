#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"

using namespace std;

//Memento
class TacticalMemento
{
    public:
        TacticalMemento(BattleStrategy* strategy);
        //void storeStrategy(BattleStrategy* strategy);//aptures and stores the current strategy.
        BattleStrategy* getStoredStrategy() const;
        ~TacticalMemento();

    private:
        BattleStrategy* storedStrategy;
};


#endif
