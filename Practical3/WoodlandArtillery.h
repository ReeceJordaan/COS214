#ifndef WOODLANDARTILLERY_H
#define WOODLANDARTILLERY_H

#include "Artillery.h"

using namespace std;

class WoodlandArtillery : public Artillery
{
	//Trained and optimised for woodlands terrain.
	public:
		void move();
		void attack();
};


#endif
