#ifndef BARNDECORATOR_H
#define BARNDECORATOR_H

#include "Decorator.h"
#include<iostream>

class BarnDecorator : public Decorator
{
	public:
		BarnDecorator(FarmUnit* unit);
		void buildBarn();
        int getLeftoverCapacity();
};

#endif
