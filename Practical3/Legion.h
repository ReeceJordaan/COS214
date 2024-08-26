#ifndef LEGION_H
#define LEGION_H

#include "LegionUnit.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//Composite class
class Legion : public LegionUnit {

    public:
        void move();
        void attack();
        void size();
        void add(LegionUnit* component);
        void remove(LegionUnit* component);
        LegionUnit* getChild(int index);

    private:
        vector<LegionUnit*> children; //children = unit
};

#endif
