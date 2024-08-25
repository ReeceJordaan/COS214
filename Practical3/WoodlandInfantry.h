#ifndef WOODLANDINFANTRY_H
#define WOODLANDINFANTRY_H

#include "Infantry.h"

using namespace std;

class WoodlandInfantry : public Infantry
{
	//Trained and optimised for woodlands terrain.
	public:
		void move();
		void attack();
};


#endif
