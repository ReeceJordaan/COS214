#include "Infantry.h"
#include "ShieldBearer.h"
#include "Boatman.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "Soldiers.h"
#include "CareTaker.h"
#include <iostream>

using namespace std;

int main() {
	
	//Derived classes of Soldier
	Infantry infantry = Infantry(20, 20, 20, 20, "3rd Infantry Division");
	ShieldBearer shieldBearer = ShieldBearer(30, 30, 30, 30, "1st Shield Bearer Division");
	Boatman boatman = Boatman(40, 40, 40, 40, "4th Boatman Division");

	std::cout << "Infantry Engagement:" << std::endl;
	infantry.engage();
	std::cout << "\nInfantry Disengagement:" << std::endl;
	infantry.disengage();

	std::cout << "\n\nShieldBearer Engagement:" << std::endl;
	shieldBearer.engage();
	std::cout << "\nInfantry Disengagement:" << std::endl;
	shieldBearer.disengage();

	std::cout << "\n\nBoatman Engagement:" << std::endl;
	boatman.engage();
	std::cout << "\nInfantry Disengagement:" << std::endl;
	boatman.disengage();

	std::cout << "\n\nInfantry Stats:" << std::endl;
	infantry.printStats();

	std::cout << "\n\nShield Bearer Stats:" << std::endl;
	shieldBearer.printStats();

	std::cout << "\n\nBoatman Stats:" << std::endl;
	boatman.printStats();

	infantry.damage(&boatman);
	infantry.damage(&boatman);
	infantry.damage(&boatman);
	infantry.heal();
	infantry.heal();

	std::cout << "\n\nInfantry Stats:" << std::endl;
	infantry.printStats();

	std::cout << "\n\nShield Bearer Stats:" << std::endl;
	shieldBearer.printStats();

	std::cout << "\n\nBoatman Stats:" << std::endl;
	boatman.printStats();


	//Testing derived classes of SoldierFactory
	cout<<"\n\n\t\tTesting Shield Factory:\t\t\n";
	
	InfantryFactory infantryFactory(&infantry);
	ShieldBearerFactory shieldBearerFactory(&shieldBearer);
	BoatmanFactory boatmanFactory(&boatman);
	
	Soldiers* infantryUnit = infantryFactory.createUnit();
	Soldiers* shieldBearerUnit = shieldBearerFactory.createUnit();
	Soldiers* boatmanUnit = boatmanFactory.createUnit();
	
	cout<<"Infantry Unit:\n";
	cout<<"Total Health: "<<infantryFactory.calculateTotalHealthPerUnit()<<"\n";
	cout<<"Total Damage: "<<infantryFactory.calculateTotalDamagePerUnit()<<"\n";
	cout<<"Total Defence: "<<infantryFactory.calculateTotalDefencePerUnit()<<"\n";
	
	cout<<"\nShieldBearer Unit:\n";
	cout<<"Total Health: "<<shieldBearerFactory.calculateTotalHealthPerUnit()<<"\n";
	cout<<"Total Damage: "<<shieldBearerFactory.calculateTotalDamagePerUnit()<<"\n";
	cout<<"Total Defence: "<<shieldBearerFactory.calculateTotalDefencePerUnit()<<"\n";
	
	cout << "\nBoatman Unit:\n";
	cout << "Total Health: "<<boatmanFactory.calculateTotalHealthPerUnit()<<"\n";
	cout << "Total Damage: "<<boatmanFactory.calculateTotalDamagePerUnit()<<"\n";
	cout << "Total Defence: "<<boatmanFactory.calculateTotalDefencePerUnit() <<"\n";

	cout<<"\n\n\t\tTesting Memento:\t\t\n\n\n";

	CareTaker infantryCareTaker = CareTaker();
	CareTaker boatmanCareTaker = CareTaker();

	boatmanUnit->heal();
	boatmanUnit->heal();
	boatmanUnit->heal();
	boatmanUnit->heal();

	std::cout << "\n\nInfantry Stats:" << std::endl;
	infantryUnit->printStats();

	std::cout << "\n\nShield Bearer Stats:" << std::endl;
	shieldBearerUnit->printStats();

	std::cout << "\n\nBoatman Stats:" << std::endl;
	boatmanUnit->printStats();

	cout << "\nSaving Infantry..." << "\n";
	cout << "Saving Boatman..." << "\n\n";

	infantryCareTaker.save(infantryUnit->militusMemento());
	boatmanCareTaker.save(boatmanUnit->militusMemento());

	infantryUnit->damage(boatmanUnit);
	infantryUnit->damage(boatmanUnit);
	infantryUnit->damage(boatmanUnit);
	infantryUnit->heal();
	infantryUnit->heal();

	std::cout << "\n\nInfantry Stats:" << std::endl;
	infantryUnit->printStats();

	std::cout << "\n\nShield Bearer Stats:" << std::endl;
	shieldBearerUnit->printStats();

	std::cout << "\n\nBoatman Stats:" << std::endl;
	boatmanUnit->printStats();

	cout << "\nUndoing Infantry..." << "\n";
	cout << "Undoing Boatman..." << "\n";

	infantryUnit->vivificaMemento(infantryCareTaker.undo());
	boatmanUnit->vivificaMemento(boatmanCareTaker.undo());

	std::cout << "\n\nInfantry Stats:" << std::endl;
	infantryUnit->printStats();

	std::cout << "\n\nShield Bearer Stats:" << std::endl;
	shieldBearerUnit->printStats();

	std::cout << "\n\nBoatman Stats:" << std::endl;
	boatmanUnit->printStats();

	delete infantryUnit;
	delete shieldBearerUnit;
	delete boatmanUnit;
	
	return 0;
}