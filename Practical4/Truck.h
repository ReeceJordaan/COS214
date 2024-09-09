#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
using namespace std;

class Truck
{
    public:
        Truck();
        Truck(const Truck* other);
        virtual ~Truck() = default;

        virtual void startEngine() = 0;
};


#endif
