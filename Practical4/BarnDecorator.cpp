#include "BarnDecorator.h"
#include<iostream>
using namespace std;

BarnDecorator::BarnDecorator(FarmUnit* unit) : Decorator(unit) {

}

void BarnDecorator::harvest(){
    if (farmUnit->getCurrentCapacity() > 0) {
        cout<<"Harvesting "<<farmUnit->getCurrentCapacity()<<" units of crops."<<endl;
        farmUnit->setCurrentCapacity(0); //Reset after harvest
    } 
    else {
        cout<<"No crops to harvest!"<<endl;
    }
}

void BarnDecorator::increaseProduction(){
    farmUnit->setTotalCapacity(farmUnit->getTotalCapacity() * 0.4); //increased the total capacity by 40%
    cout<<"Barn boosts production capacity by increasing total capacity by 40%."<<endl; //thus crops to harvest and store in the barn
    cout<<"Increased production: New total capacity is "<<farmUnit->getTotalCapacity()<<endl;
}

int BarnDecorator::getLeftoverCapacity(){
    return farmUnit->getTotalCapacity() - farmUnit->getCurrentCapacity();
}

void BarnDecorator::print() {
    std::cout << "Print in BarnDecorator." << std::endl;
}
