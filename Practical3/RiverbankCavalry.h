#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H

#include "Cavalry.h"

class RiverbankCavalry : public Cavalry {
	public:
		RiverbankCavalry(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};

#endif