#ifndef BARNDECORATOR_H
#define BARNDECORATOR_H

#include "Decorator.h"
#include<iostream>

class BarnDecorator : public Decorator
{
	public:
		BarnDecorator(FarmUnit* unit);
		~BarnDecorator() = default;

		void harvest();
	        void increaseProduction();
	        int getLeftoverCapacity();

		void print();
};

#endif
