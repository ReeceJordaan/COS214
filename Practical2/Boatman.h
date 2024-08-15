#ifndef BOATMAN_H
#define BOATMAN_H

#include "Soldiers.h"
#include <string>

using namespace std;

class Boatman : public Soldiers
{
	public:
		Boatman(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName);
		void engage();
		void disengage();
		Soldiers* clonis();
		
	private:
		int healthPerSoldier;
		int damagePerSoldier;
		int defencePerSoldier;
		int amountOfSoldiersPerUnit;
		string unitName;
		void prepare();
		void execute();
		void retreat();
		void rest();
};


#endif
