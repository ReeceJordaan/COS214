#ifndef LEGION_H
#define LEGION_H

#include "UnitComponent.h"
#include <string>
#include <vector>
#include <iostream>

class Legion : public UnitComponent {

    public:
        Legion(int health, int defence, int attack);
        void move();
        void fight();
        void size();
        void add(UnitComponent* component);
        void remove(UnitComponent* component);
        UnitComponent* getChild(int index);

    private:
        std::vector<UnitComponent*> children;
        int health;
        int defence;
        int attack;
};

#endif