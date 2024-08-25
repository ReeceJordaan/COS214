#ifndef RIVERBANKINFANTRY_H
#define RIVERBANKINFANTRY_H

#include "Infantry.h"

using namespace std;

class RiverbankInfantry : public Infantry
{
	//Trained and Optimised for riverbank terrain.
	public:
		void move();
		void attack();
};


#endif
