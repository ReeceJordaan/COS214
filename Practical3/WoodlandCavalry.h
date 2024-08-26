#ifndef WOODLANDCAVALRY_H
#define WOODLANDCAVALRY_H

#include "Cavalry.h"

class WoodlandCavalry : public Cavalry {
	public:
		WoodlandCavalry(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};


#endif
