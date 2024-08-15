#ifndef SOLDIERS_H
#define SOLDIERS_H

#include "Memento.h"
#include <string>

using namespace std;

class Soldiers
{
	public:
		Soldiers(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName);
		virtual void engage();
		virtual void disengage();
		virtual Soldiers* clonis() = 0;
		Memento* militusMemento();
		void vivificaMemento(Memento* mem);
		int getHealthPerSoldier() const;
		int getDamagePerSoldier() const;
		int getDefencePerSoldier() const;
		int getAmountOfSoldiersPerUnit() const;
		string getUnitName() const;
		void printStats();
		void damage(Soldiers* target);
		void heal();

	private:
		int healthPerSoldier;
		int damagePerSoldier;
		int defencePerSoldier;
		int amountOfSoldiersPerUnit;
		string unitName;
		virtual void prepare() = 0;
		virtual void execute() = 0;
		virtual void retreat() = 0;
		virtual void rest() = 0;
};

#endif
