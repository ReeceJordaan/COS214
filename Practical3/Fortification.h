#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"

using namespace std;

class Fortification : public BattleStrategy
{
	public:
                void engage();
                BattleStrategy* clone() const;
};


#endif
