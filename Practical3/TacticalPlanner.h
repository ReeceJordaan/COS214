#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "TacticalMemento.h"

using namespace std;

class TacticalPlanner
{
    public:
        TacticalMemento* createMemento();
        void restoreMemento(TacticalMemento* memento);

    private:
        BattleStrategy* currentStrategy;
};


#endif
