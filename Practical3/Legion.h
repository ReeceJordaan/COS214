#ifndef LEGION_H
#define LEGION_H

#include "UnitComponent.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//Composite class
class Legion : public UnitComponent {

    public:
        void move();
        void attack();
        void size();
        void add(UnitComponent* component);
        void remove(UnitComponent* component);
        UnitComponent* getChild(int index);

    private:
        vector<UnitComponent*> children; //children = unit
};

#endif
