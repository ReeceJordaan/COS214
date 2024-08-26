#ifndef WOODLANDARTILLERY_H
#define WOODLANDARTILLERY_H

#include "Artillery.h"

class WoodlandArtillery : public Artillery{
	public:
		WoodlandArtillery(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};


#endif
