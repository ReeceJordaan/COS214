#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H

#include "Cavalry.h"

using namespace std;

class OpenFieldCavalry : public Cavalry
{
	//Trained and Optimised for open fiedls terrain.
	public:
		void move();
		void attack();
};


#endif
