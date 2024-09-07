#include "Barn.h"
#include<iostream>

Barn::Barn(int currentCapacity, int totalCapacity) : FarmUnit(currentCapacity, totalCapacity) {

}

Barn::Barn(Barn* barn) : FarmUnit(barn) {

}

Barn::~Barn() {
    
}

int Barn::getCurrentCapacity() const {
    return currentCapacity;
}

void Barn::setCurrentCapacity(int currentCapacity) {
    this->currentCapacity = currentCapacity;
}

int Barn::getTotalCapacity() const {
    return totalCapacity;
}

void Barn::setTotalCapacity(int totalCapacity) {
    this->totalCapacity = totalCapacity;
}

void Barn::collectCrops(){
    std::cout<<"Collecting harvested crops since the storage capacity has reached a predefined threshold.\n";
}
