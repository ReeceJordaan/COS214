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
        
        virtual void print() = 0;

    protected:
        FarmUnit* farmUnit;
};


#endif
