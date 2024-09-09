#include "Decorator.h"
#include <iostream>
using namespace std;

Decorator::Decorator(FarmUnit* unit) : FarmUnit(unit) {
    farmUnit = unit;
}

void Decorator::print(){
    //print something
}
