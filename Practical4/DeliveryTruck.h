
#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H

#include "Truck.h"
#include <iostream>

class Barn;

class DeliveryTruck : public Truck
{
    public:
        DeliveryTruck(Barn* subject);
        DeliveryTruck(const DeliveryTruck* other);
        ~DeliveryTruck() = default;

        void startEngine();

    private:
        Barn* subject;
};


#endif

