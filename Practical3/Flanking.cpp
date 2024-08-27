#include "Flanking.h"
#include <iostream>
using namespace std;

void Flanking::engage(){
    cout<<"Executing Flanking strategy."<<endl;
}

BattleStrategy* Flanking::clone() const {
    return new Flanking(*this);
}
