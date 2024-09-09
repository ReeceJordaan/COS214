#include "FertilizerDecorator.h"
#include <iostream>
using namespace std;

FertilizerDecorator::FertilizerDecorator(FarmUnit* unit) : Decorator(unit) {}

void FertilizerDecorator::harvest(){
    if (farmUnit->getCurrentCapacity() > 0) {
        cout<<"Harvesting "<<farmUnit->getCurrentCapacity()<<" units of crops."<<endl;
        farmUnit->setCurrentCapacity(0); //Reset after harvest
    } 
    else {
        cout<<"No crops to harvest!"<<endl;
    }
}

void FertilizerDecorator::increaseProduction(){
    farmUnit->applyFertilizer();
    cout<<"Thus crop yield has increased by 10%."<<endl;
}

int FertilizerDecorator::getLeftoverCapacity(){
    return farmUnit->getTotalCapacity() - farmUnit->getCurrentCapacity();
}

void FertilizerDecorator::print() {
    std::cout << "Print in FertilizerDecorator." << std::endl;
}
