#include "DeliveryTruck.h"
#include <iostream>
using namespace std;

DeliveryTruck::DeliveryTruck(Barn* subject, int currentCapacity, int totalCapacity) : Truck("DeliveryTruck"){
    this->subject = subject;
    this->currentCapacity = currentCapacity;
    this->totalCapacity = totalCapacity;
}

void DeliveryTruck::startEngine() {
    if (currentCapacity >= totalCapacity * 0.8) {
        cout<<"Delivery truck is collecting crops as the barn is near full capacity."<<endl;
        subject->collectCrops();
    } else {
        cout<<"No crop collection needed at this time."<<endl;
    }
}