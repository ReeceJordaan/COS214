#include <vector>
#include <iostream>
#include "FarmUnit.h"

FarmUnit::FarmUnit(int currentCapacity, int totalCapacity) {
    this->trucks = std::vector<Truck*>();
    this->currentCapacity = currentCapacity;
    this->totalCapacity = totalCapacity;
}

FarmUnit::FarmUnit(FarmUnit* farmUnit) {
    this->trucks = std::vector<Truck*>();
    this->currentCapacity = farmUnit->currentCapacity;
    this->totalCapacity = farmUnit->totalCapacity;

    for (auto it = farmUnit->trucks.begin(); it != farmUnit->trucks.end(); ++it) {
        FertilizerTruck* fertilizerTruck = dynamic_cast<FertilizerTruck*>(*it);

        if (fertilizerTruck != nullptr) {
            this->trucks.push_back(new FertilizerTruck(dynamic_cast<FertilizerTruck*>(*it)));
        } else {
            this->trucks.push_back(new DeliveryTruck(dynamic_cast<DeliveryTruck*>(*it)));
        }
    }
}

FarmUnit::~FarmUnit() {
    while (!this->trucks.empty()) {
        delete trucks.back();
        this->trucks.pop_back();
    }

    this->trucks.clear();
}

int FarmUnit::getCurrentCapacity() const {
    return this->currentCapacity;
}

void FarmUnit::setCurrentCapacity(int currentCapacity) {
    this->currentCapacity = currentCapacity;
}

int FarmUnit::getTotalCapacity() const {
    return this->totalCapacity;
}

void FarmUnit::setTotalCapacity(int totalCapacity) {
    this->totalCapacity = totalCapacity;
}

void FarmUnit::add(CropField* cropField) {
    std::cout << "Invalid object type. Call this on a Farm object." << std::endl;
}

void FarmUnit::remove(CropField* cropField) {
    std::cout << "Invalid object type. Call this on a Farm object." << std::endl;
}

CropField* FarmUnit::getChild(int index) {
    std::cout << "Invalid object type. Call this on a Farm object." << std::endl;
    return nullptr;
}

Iterator* FarmUnit::createDFSIterator() {
    std::cout << "Invalid object type. Call this on a Farm object." << std::endl;
    return nullptr;
}

Iterator* FarmUnit::createBFSIterator() {
    std::cout << "Invalid object type. Call this on a Farm object." << std::endl;
    return nullptr;
}

void FarmUnit::buyTruck() {
    std::cout << "Invalid object type. Call this on a CropField/Barn object." << std::endl;
}

void FarmUnit::sellTruck() {
    std::cout << "Invalid object type. Call this on a CropField/Barn object." << std::endl;
}

void FarmUnit::callTruck() {
    std::cout << "Invalid object type. Call this on a CropField/Barn object." << std::endl;
}