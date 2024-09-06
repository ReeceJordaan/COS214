#ifndef DECORATOR_H
#define DECORATOR_H

#include "FarmUnit.h"
#include<iostream>

using namespace std;

class Decorator : public FarmUnit
{
    public:
        virtual void harvest() = 0;
        virtual void increaseProduction() = 0;
        virtual void buildBarn() = 0;
        virtual void getLeftoverCapacity() = 0;

    private:
        FarmUnit* farmUnit;
};


#endif
