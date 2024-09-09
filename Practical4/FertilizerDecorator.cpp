#include "FertilizerDecorator.h"
#include "CropField.h"
#include <iostream>
using namespace std;

FertilizerDecorator::FertilizerDecorator(FarmUnit* unit) : Decorator(unit) {}

void FertilizerDecorator::harvest(){
    if (farmUnit->getCurrentCapacity() > 0) {
        (dynamic_cast<CropField*>(farmUnit))->getSoilState()->harvestCrops();

        if ((dynamic_cast<CropField*>(farmUnit))->getSoilState()->getName() == "Dry") {
            cout<<"Harvesting " << farmUnit->getCurrentCapacity() << " units of crops."<<endl;
        } else if ((dynamic_cast<CropField*>(farmUnit))->getSoilState()->getName() == "Fruitful") {
            cout<<"Harvesting " << farmUnit->getCurrentCapacity()*3 << " units of crops."<<endl;
        } else {
            cout<<"Harvesting " << farmUnit->getCurrentCapacity()*0 << " units of crops."<<endl;
        }

        farmUnit->setCurrentCapacity(0); //Reset after harvest
    } 
    else {
        cout<<"No crops to harvest!"<<endl;
    }
}

void FertilizerDecorator::increaseProduction(){
    farmUnit->applyFertilizer();
    cout<<"Thus crop yield has increased by 40%."<<endl;
}

int FertilizerDecorator::getLeftoverCapacity(){
    return farmUnit->getTotalCapacity() - farmUnit->getCurrentCapacity();
}

void FertilizerDecorator::print() {
    std::cout << "Print in FertilizerDecorator." << std::endl;
}
