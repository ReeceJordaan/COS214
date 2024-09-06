#ifndef SOIL_H
#define SOIL_H

#include<string>
#include<iostream>

using namespace std;

class Soil
{
    public:
        virtual void harvestCrops() = 0;
        virtual void rain() = 0;
        string getName();

    private:
        string name;
};


#endif
