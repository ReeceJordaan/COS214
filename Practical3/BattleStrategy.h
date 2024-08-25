#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

using namespace std;

class BattleStrategy
{
    public:
        virtual void engage() = 0; //Defines the combat engagement protocol.
        virtual ~BattleStrategy(){}
};


#endif
