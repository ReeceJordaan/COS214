#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H
#include "TacticalMemento.h"

using namespace std;

class TacticalPlanner
{
    public:
        TacticalPlanner();
        void setStrategy(BattleStrategy* strategy);
        TacticalMemento* createMemento();
        void restoreMemento(TacticalMemento* memento);
        void executeCurrentStrategy();
        ~TacticalPlanner();

    private:
        BattleStrategy* currentStrategy;
};


#endif
