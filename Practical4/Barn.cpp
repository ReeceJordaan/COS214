#include "Barn.h"
#include<iostream>

Barn::Barn(int currentCapacity, int totalCapacity) : FarmUnit(currentCapacity, totalCapacity) {

}

Barn::Barn(Barn* barn) : FarmUnit(barn) {

}

Barn::~Barn() {
    
}

void Barn::buyTruck() {
    trucks.push_back(new DeliveryTruck(this));
    std::cout << "Bought one delivery truck." << std::endl;
}

void Barn::sellTruck() {
    for (auto it = trucks.begin(); it != trucks.end(); ++it) {
        DeliveryTruck* deliveryTruck = dynamic_cast<DeliveryTruck*>(*it);

        if (deliveryTruck != nullptr) {
            delete deliveryTruck;
            trucks.erase(it);
            std::cout << "Sold one delivery truck." << std::endl;
            return;
        }
    }

    std::cout << "There are no delivery trucks left to sell!" << std::endl;
}

void Barn::callTruck() {
    for (auto it = trucks.begin(); it != trucks.end(); ++it) {
        DeliveryTruck* deliveryTruck = dynamic_cast<DeliveryTruck*>(*it);

        if (deliveryTruck != nullptr) {
            (*it)->startEngine();
            std::cout << "Called a delivery truck." << std::endl;
            return;
        }
    }
    
    std::cout << "There are no delivery trucks available to call!" << std::endl;
}

void Barn::print() {
    std::cout << "Print in Barn." << std::endl;
}