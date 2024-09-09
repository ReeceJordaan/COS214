#ifndef DECORATOR_H
#define DECORATOR_H

#include "FarmUnit.h"
#include<iostream>

using namespace std;

class Decorator : public FarmUnit
{
    public:
        Decorator(FarmUnit* unit);
        virtual ~Decorator() = default;

        virtual void harvest() = 0;
        virtual void increaseProduction() = 0;
        virtual int getLeftoverCapacity() = 0;
        void print();

    protected:
        FarmUnit* farmUnit;
};


#endif
