#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

using namespace std;

class Ambush : public BattleStrategy
{
        public:
                void engage();
                BattleStrategy* clone() const;
};


#endif
