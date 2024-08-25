#ifndef LEGION_H
#define LEGION_H

#include "UnitComponent.h"
#include <string>
#include <vector>

using namespace std;

//Composite class
class Legion : public UnitComponent {

    public:
        void move();
        void fight();
        void add(UnitComponent* component);
        void remove(UnitComponent* component);
        UnitComponent* getChild(int param);

    private:
        vector<UnitComponent*> children; //children = unit
};

#endif
