#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H

#include "Artillery.h"

using namespace std;

class OpenFieldArtillery : public Artillery
{
	//Trained and Optimised for open fiedls terrain.
	public:
		void move();
		void attack();
};


#endif
