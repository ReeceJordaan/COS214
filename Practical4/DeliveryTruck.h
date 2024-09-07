
#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H

#include "Truck.h"
#include "Barn.h"
#include<iostream>

class DeliveryTruck : public Truck
{
    public:
        DeliveryTruck(Barn* subject, int currentCapacity, int totalCapacity);
        void startEngine();

    private:
        Barn* subject;
        int currentCapacity;
        int totalCapacity;
};


#endif

