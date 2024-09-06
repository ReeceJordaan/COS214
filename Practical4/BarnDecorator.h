#ifndef BARNDECORATOR_H
#define BARNDECORATOR_H

#include "Decorator.h"
#include<iostream>

class BarnDecorator : public Decorator
{
	public:
		void buildBarn();
        int getLeftoverCapacity();
};

#endif
