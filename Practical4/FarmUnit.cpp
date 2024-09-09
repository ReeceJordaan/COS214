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

void FarmUnit::applyFertilizer() {
    std::cout << "Applying fertilizer...\n";
    std::cout << "Fertilizer applied.\n";

    currentCapacity += currentCapacity + (currentCapacity * 0.4);

    if (currentCapacity > totalCapacity) {
        currentCapacity = totalCapacity;
    }

    std::cout << "Current capacity after applying fertilizer: " 
              << currentCapacity << " (out of " << totalCapacity << " total capacity)\n";
}

void FarmUnit::add(CropField* cropField) { }
void FarmUnit::remove(CropField* cropField) { }
CropField* FarmUnit::getChild(int index) { return nullptr; }
Iterator* FarmUnit::createDFSIterator() { return nullptr; }
Iterator* FarmUnit::createBFSIterator() { return nullptr; }
void FarmUnit::buyTruck() { }
void FarmUnit::sellTruck() { }
void FarmUnit::callTruck() { }