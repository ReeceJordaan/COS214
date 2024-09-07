#include <string>
#include <vector>
#include "CropField.h"
#include "Barn.h"
#include<iostream>

CropField::CropField(std::string cropType, int currentCapacity, int totalCapacity) : FarmUnit(currentCapacity, totalCapacity) {
    this->cropType = cropType;
    barns = std::vector<Barn*>();
    soilState = nullptr;
}

CropField::CropField(CropField* cropField) : FarmUnit(cropField) {
    barns = std::vector<Barn*>();
    soilState = cropField->soilState;

    for (Barn* barn : cropField->barns) {
        barns.push_back(new Barn(barn));
    }
}

CropField::~CropField() {
    while(!barns.empty()) {
        delete barns.back();
        barns.pop_back();
    }

    barns.clear();

    if(soilState != nullptr) {
        delete soilState;
        soilState = nullptr;
    }
}

std::string CropField::getCropType() {
    return cropType;
}

Soil* CropField::getSoilState() const {
    return soilState;
}

void CropField::setSoilState(Soil* soilState) {
    this->soilState = soilState;
}

std::string CropField::getSoilStateName() const {
    if(soilState != nullptr) {
        return soilState->getName();
    } else {
        return "";
    }
}

int CropField::getCurrentCapacity() const {
    return currentCapacity;
}

void CropField::setCurrentCapacity(int currentCapacity) {
    this->currentCapacity = currentCapacity;
}

int CropField::getTotalCapacity() const {
    return totalCapacity;
}

void CropField::setTotalCapacity(int totalCapacity) {
    this->totalCapacity = totalCapacity;
}

void CropField::applyFertilizer(){
    std::cout<<"Fertilizer applied. Now we have Fruitful soil.\n";
}
