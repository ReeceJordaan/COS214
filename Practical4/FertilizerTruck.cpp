#include "FertilizerTruck.h"
#include <iostream>

FertilizerTruck::FertilizerTruck(CropField* subject, SoilState* soilState) : Truck("FertilizerTruck")
{
    this->subject = subject;
    this->soilState = soilState;
}

void FertilizerTruck::startEngine(){
    if (soilState->getName() == "Dry") {
        cout<<"Fertilizer truck is delivering fertilizer to the dry soil."<<endl;
        subject->applyFertilizer();
    } 
    else {
        cout<<"No fertilizer needed at this time."<<endl;
    }
}