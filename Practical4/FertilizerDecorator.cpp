#include "FertilizerDecorator.h"
#include <iostream>
using namespace std;

FertilizerDecorator::FertilizerDecorator(FarmUnit* unit) : Decorator(unit) {}

void FertilizerDecorator::harvest(){
    
}

void FertilizerDecorator::increaseProduction(){
    
}

int FertilizerDecorator::getLeftoverCapacity(){
    
}

void FertilizerDecorator::print() {
    std::cout << "Print in FertilizerDecorator." << std::endl;
}
