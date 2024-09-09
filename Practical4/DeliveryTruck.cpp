#include "DeliveryTruck.h"
#include "Barn.h"
using namespace std;

DeliveryTruck::DeliveryTruck(Barn* subject) : Truck(){
    this->subject = subject;
}

DeliveryTruck::DeliveryTruck(const DeliveryTruck* other) : Truck() {
    this->subject = other->subject;
}

void DeliveryTruck::startEngine() {
    if (subject->getCurrentCapacity() >= subject->getTotalCapacity() * 0.8) {
        cout<<"Delivery truck is collecting crops as the barn is near full capacity."<<endl;
        subject->setCurrentCapacity(0);
    } else {
        cout<<"No crop collection needed at this time."<<endl;
    }
}