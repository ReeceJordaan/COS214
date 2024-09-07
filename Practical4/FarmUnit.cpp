#include <vector>
#include <iostream>
#include "FarmUnit.h"

FarmUnit::FarmUnit(int currentCapacity, int totalCapacity) {
    trucks = std::vector<Truck*>();
    this->currentCapacity = currentCapacity;
    this->totalCapacity = totalCapacity;
}

FarmUnit::FarmUnit(FarmUnit* farmUnit) {
    trucks = std::vector<Truck*>();
    int currentCapacity = farmUnit->currentCapacity;
    int totalCapacity = farmUnit->totalCapacity;

    for (auto it = farmUnit->trucks.begin(); it != farmUnit->trucks.end(); ++it) {
        FertilizerTruck* fertilizerTruck = dynamic_cast<FertilizerTruck*>(*it);

        if (fertilizerTruck != nullptr) {
            trucks.push_back(new FertilizerTruck(dynamic_cast<FertilizerTruck*>(*it)));
        } else {
            trucks.push_back(new DeliveryTruck(dynamic_cast<DeliveryTruck*>(*it)));
        }
    }
}

FarmUnit::~FarmUnit() {
    while (!trucks.empty()) {
        delete trucks.back();
        trucks.pop_back();
    }

    trucks.clear();
}

void FarmUnit::buyTruck(std::string type) {
    if (type == "Fertilizer") {
        trucks.push_back(new FertilizerTruck());
        std::cout << "Bought one fertilizer truck." << std::endl;
    } else if (type == "Delivery") {
        trucks.push_back(new DeliveryTruck());
        std::cout << "Bought one delivery truck." << std::endl;
    } else {
        std::cout << "Invalid truck type." << std::endl;
    }
}

void FarmUnit::sellTruck(std::string type) {
    if (!trucks.empty()) {
        for (auto it = trucks.begin(); it != trucks.end(); ++it) {
            if (type == "Fertilizer") {
                FertilizerTruck* fertilizerTruck = dynamic_cast<FertilizerTruck*>(*it);

                if (fertilizerTruck != nullptr) {
                    delete fertilizerTruck;
                    trucks.erase(it);
                    std::cout << "Sold one fertilizer truck." << std::endl;
                    return;
                }
            } else if (type == "Delivery") {
                DeliveryTruck* deliveryTruck = dynamic_cast<DeliveryTruck*>(*it);
                if (deliveryTruck != nullptr) {

                    delete deliveryTruck;
                    trucks.erase(it);
                    std::cout << "Sold one delivery truck." << std::endl;
                    return;
                }
            }
        }
        
        std::cout << "No " << type << " truck found." << std::endl;
    } else {
        std::cout << "There are no trucks left to sell!" << std::endl;
    }
}

void FarmUnit::callTruck(std::string type) {
    if (!trucks.empty()) {
        for (auto it = trucks.begin(); it != trucks.end(); ++it) {
            if (type == "Fertilizer") {
                FertilizerTruck* fertilizerTruck = dynamic_cast<FertilizerTruck*>(*it);

                if (fertilizerTruck != nullptr) {
                    (*it)->startEngine();
                    std::cout << "Called a fertilizer truck." << std::endl;
                    return;
                }
            } else if (type == "Delivery") {
                DeliveryTruck* deliveryTruck = dynamic_cast<DeliveryTruck*>(*it);

                if (deliveryTruck != nullptr) {
                    (*it)->startEngine();
                    std::cout << "Called a delivery truck." << std::endl;
                    return;
                }
            }
        }

        std::cout << "No " << type << " truck found." << std::endl;
    } else {
        std::cout << "There are no trucks available to call!" << std::endl;
    }
}