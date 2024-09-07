#ifndef TRUCK_H
#define TRUCK_H

#include<iostream>
#include<string>
using namespace std;

class Truck
{
    public:
        Truck(const Truck &other);
        Truck(string truckType);
        virtual void startEngine() = 0;
    private:
        string truckType;
};


#endif
