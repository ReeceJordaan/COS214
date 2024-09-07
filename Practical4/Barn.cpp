#include "Barn.h"

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