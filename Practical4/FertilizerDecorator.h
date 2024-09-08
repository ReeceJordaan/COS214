#ifndef FERTILIZERDECORATOR_H
#define FERTILIZERDECORATOR_H

#include "Decorator.h"
#include<iostream>

class FertilizerDecorator : public Decorator
{
	public:
		FertilizerDecorator(FarmUnit* unit);
		void harvest();
        void increaseProduction();
};


#endif
