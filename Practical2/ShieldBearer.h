#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include "Soldiers.h"
#include <string>

using namespace std;

class ShieldBearer : public Soldiers
{
	public:
		ShieldBearer(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName);
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
