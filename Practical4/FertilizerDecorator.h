#ifndef FERTILIZERDECORATOR_H
#define FERTILIZERDECORATOR_H

#include "Decorator.h"
#include<iostream>

class FertilizerDecorator : public Decorator
{
	public:
		FertilizerDecorator(FarmUnit* unit);
		~FertilizerDecorator() = default;

		void harvest();
        void increaseProduction();
		void print();
};


#endif
