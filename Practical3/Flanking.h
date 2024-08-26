#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

using namespace std;

class Flanking : public BattleStrategy
{
	public:
                void engage();
                BattleStrategy* clone() const;
};


#endif
