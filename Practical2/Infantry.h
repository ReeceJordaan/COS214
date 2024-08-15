#ifndef INFANTRY_H
#define INFANTRY_H

#include "Soldiers.h"
#include <string>

using namespace std;

class Infantry : public Soldiers
{
	public:
		Infantry(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName);
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
