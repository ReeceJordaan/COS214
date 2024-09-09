#include "BarnDecorator.h"
#include<iostream>
using namespace std;

BarnDecorator::BarnDecorator(FarmUnit* unit) : Decorator(unit) {

}

int BarnDecorator::getLeftoverCapacity() {
    return farmUnit->getTotalCapacity() - farmUnit->getCurrentCapacity();
}

void BarnDecorator::print() {
    std::cout << "Print in BarnDecorator." << std::endl;
}