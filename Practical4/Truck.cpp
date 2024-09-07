#include "Truck.h"

Truck::Truck(const Truck &other){
    this->truckType = other.truckType;
}

Truck::Truck(string truckType){
    this->truckType = truckType;
}