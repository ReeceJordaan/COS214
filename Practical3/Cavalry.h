#ifndef CAVALRY_H
#define CAVALRY_H

#include "UnitComponent.h"

class Cavalry : public UnitComponent {
    public:
		virtual void move() = 0;
        virtual void fight() = 0;
        virtual ~Cavalry() = default;
        
    private: 
        int health;
        int defence;
        int attack;
};

#endif