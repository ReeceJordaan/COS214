#include <string>
#include <vector>
#include "CropField.h"
#include "Barn.h"
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "FloodedSoil.h"

CropField::CropField(std::string cropType, int currentCapacity, int totalCapacity) : FarmUnit(currentCapacity, totalCapacity) {
    this->cropType = cropType;
    this->barns = std::vector<Barn*>();
    this->soilState = new DrySoil();

    // build barn loop
}

CropField::CropField(CropField* cropField) : FarmUnit(cropField) {
    this->barns = std::vector<Barn*>();
    this->cropType = cropField->cropType;
    
    if (cropField->soilState != nullptr && cropField->soilState->getName() == "Dry") {
        this->soilState = new DrySoil();
    } else if (cropField->soilState->getName() == "Fruitful") {
        this->soilState = new FruitfulSoil();
    } else {
        this->soilState = new FloodedSoil();
    }

    for (Barn* barn : cropField->barns) {
        this->barns.push_back(new Barn(barn));
    }
}

CropField::~CropField() {
    while(!this->barns.empty()) {
        delete this->barns.back();
        this->barns.pop_back();
    }

    this->barns.clear();

    if(this->soilState != nullptr) {
        delete soilState;
        this->soilState = nullptr;
    }
}

std::string CropField::getCropType() {
    return this->cropType;
}

Soil* CropField::getSoilState() const {
    return this->soilState;
}

void CropField::setSoilState(Soil* soilState) {
    this->soilState = soilState;
}

std::string CropField::getSoilStateName() const {
    if(this->soilState != nullptr) {
        return this->soilState->getName();
    } else {
        return "Null soil state.";
    }
}

void CropField::buildBarn(){
    std::cout<<"Building a barn... Increasing total storage capacity."<<std::endl;

    totalCapacity += 50;
    barns.push_back(new Barn(0, 50));

    std::cout<<"Total storage capacity is now: "<<totalCapacity<<std::endl;
}

void CropField::buyTruck() {
    trucks.push_back(new FertilizerTruck(this, soilState));
    std::cout << "Bought one fertilizer truck." << std::endl;
}

void CropField::sellTruck() {
    for (auto it = trucks.begin(); it != trucks.end(); ++it) {
        FertilizerTruck* fertilizerTruck = dynamic_cast<FertilizerTruck*>(*it);

        if (fertilizerTruck != nullptr) {
            delete fertilizerTruck;
            trucks.erase(it);
            std::cout << "Sold one fertilizer truck." << std::endl;
            return;
        }
    }

    std::cout << "There are no fertilizer trucks left to sell!" << std::endl;
}

void CropField::callTruck() {
    for (auto it = trucks.begin(); it != trucks.end(); ++it) {
        FertilizerTruck* fertilizerTruck = dynamic_cast<FertilizerTruck*>(*it);

        if (fertilizerTruck != nullptr) {
            (*it)->startEngine();
            std::cout << "Called a fertilizer truck." << std::endl;
            return;
        }
    }
    
    std::cout << "There are no fertilizer trucks available to call!" << std::endl;
}

void CropField::print() {
    std::cout << "Print in CropField. " << getCropType() << " " << getCurrentCapacity() << "/" << getTotalCapacity() << std::endl;
}

/* for Decorator
void CropField::harvest(){
    std::cout<<"Harvesting "<<cropType<<" with current capacity: "<<currentCapacity<<"/"<<totalCapacity<<std::endl;
}

void CropField::increaseProduction(){
    std::cout<<"Increasing production for "<<cropType<<"..."<<std::endl;
    applyFertilizer();
    cout<<"Fertilizer applied: Production increased!"<<endl;
}

int CropField::getLeftoverCapacity(){
    //the remaining storage capacity
    return totalCapacity - currentCapacity;
} */