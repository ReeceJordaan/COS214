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
    cout<<"Delivery truck is collecting crops from the barn."<<endl;
    subject->setCurrentCapacity(0);
}