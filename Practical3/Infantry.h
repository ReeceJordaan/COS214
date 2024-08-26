#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h"

class Infantry : public UnitComponent {
	public:
		virtual void move() = 0;
        virtual void fight() = 0;
		virtual ~Infantry() = default;
	
	private: 
		int health;
		int defence;
		int attack;
};

#endif