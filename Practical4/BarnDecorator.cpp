#include "BarnDecorator.h"
#include<iostream>
using namespace std;

BarnDecorator::BarnDecorator(FarmUnit* unit) : Decorator(unit) {

}

void BarnDecorator::harvest(){
    if (farmUnit->getCurrentCapacity() > 0) {
        cout<<"Harvesting "<<farmUnit->getCurrentCapacity()<<" units of "; //<<cropType<<endl;
        farmUnit->setCurrentCapacity(0); //Reset after harvest
    } 
    else {
        cout<<"No crops to harvest!"<<endl;
    }
}

void BarnDecorator::increaseProduction(){
    
}

int BarnDecorator::getLeftoverCapacity(){
    return farmUnit->getTotalCapacity() - farmUnit->getCurrentCapacity();
}

void BarnDecorator::print() {
    std::cout << "Print in BarnDecorator." << std::endl;
}
