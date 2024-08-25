#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H

#include "Artillery.h"

using namespace std;

class RiverbankArtillery : public Artillery
{
	//Trained and Optimised for riverbank terrain.
	public:
		void move();
		void attack();
};


#endif
