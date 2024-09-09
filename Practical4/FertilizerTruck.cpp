#include "FertilizerTruck.h"
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "FloodedSoil.h"
#include "CropField.h"

FertilizerTruck::FertilizerTruck(CropField* subject, Soil* soilState) : Truck() {
    this->subject = subject;
    this->soilState = soilState;
}

FertilizerTruck::FertilizerTruck(const FertilizerTruck* other) : Truck() {
    this->subject = other->subject;

    if (other->soilState->getName() == "Dry") {
        this->soilState = new DrySoil();
    } else if (other->soilState->getName() == "Fruitful") {
        this->soilState = new FruitfulSoil();
    } else {
        this->soilState = new FloodedSoil();
    }
}

void FertilizerTruck::startEngine() {
    if (soilState->getName() == "Dry") {
        cout << "Fertilizer truck is delivering fertilizer to the dry soil." << endl;
        delete subject->getSoilState();
        subject->setSoilState(new FruitfulSoil());
    } else {
        cout << "No fertilizer needed at this time." << endl;
    }
}