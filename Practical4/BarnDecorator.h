#ifndef BARNDECORATOR_H
#define BARNDECORATOR_H

#include "Decorator.h"
#include<iostream>

class BarnDecorator : public Decorator
{
	public:
		BarnDecorator(FarmUnit* unit);
		~BarnDecorator() = default;

        int getLeftoverCapacity();
		void print();
};

#endif
