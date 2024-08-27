#include "Ambush.h"
#include <iostream>
using namespace std;

void Ambush::engage(){
    cout<<"Executing Ambush strategy."<endl;
}

BattleStrategy* Ambush::clone() const {
    return new Ambush(*this);
}
