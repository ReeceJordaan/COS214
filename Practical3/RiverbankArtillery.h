#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H

#include "Artillery.h"

class RiverbankArtillery : public Artillery {
	public:
		RiverbankArtillery(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};

#endif