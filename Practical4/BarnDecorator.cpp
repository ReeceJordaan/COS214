#include "BarnDecorator.h"
#include<iostream>
using namespace std;

BarnDecorator::BarnDecorator(FarmUnit* unit) : Decorator(unit)
{}

void BarnDecorator::buildBarn(){
    farmUnit->buildBarn();
    cout<<"Barn built: Extra storage added."<<endl;
}

int BarnDecorator::getLeftoverCapacity(){
    return farmUnit->getLeftoverCapacity();
}