#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "UnitComponent.h"

class Artillery : public UnitComponent {
    public:
		virtual void move() = 0;
        virtual void fight() = 0;
        virtual ~Artillery() = default;

    private: 
        int health;
        int defence;
        int attack;
};


#endif
