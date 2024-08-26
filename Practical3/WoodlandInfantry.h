#ifndef WOODLANDINFANTRY_H
#define WOODLANDINFANTRY_H

#include "Infantry.h"

class WoodlandInfantry : public Infantry {
	public:
		WoodlandInfantry(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};


#endif
