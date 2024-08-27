#include "Fortification.h"
#include <iostream>
using namespace std;

void Fortification::engage() {
   cout<<"Executing Fortification strategy."<<endl;
}

BattleStrategy* Fortification::clone() const {
    return new Fortification(*this);
}
