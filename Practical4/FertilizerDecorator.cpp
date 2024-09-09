#include "FertilizerDecorator.h"
#include <iostream>
using namespace std;

FertilizerDecorator::FertilizerDecorator(FarmUnit* unit) : Decorator(unit) {}

void FertilizerDecorator::harvest(){
    //farmUnit->harvest();
    cout<<"Fertilized Field: Improved harvest."<<endl;
}

void FertilizerDecorator::increaseProduction(){
    //farmUnit->increaseProduction();
}

void FertilizerDecorator::print() {
    std::cout << "Print in FertilizerDecorator." << std::endl;
}