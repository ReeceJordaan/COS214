#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H

#include "Truck.h"
#include <iostream>

class DeliveryTruck : public Truck
{
    public:
        void startEngine();

    private:
        Barn* subject;
        int currentCapacity;
        int totalCapacity;
};

#endif