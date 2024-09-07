#ifndef SOILSTATE_H
#define SOILSTATE_H

#include<string>
#include<iostream>

using namespace std;

class SoilState
{
    public:
        SoilState(const Soil &other);
        SoilState(string name);
        virtual void harvestCrops() = 0;
        virtual void rain() = 0;
        string getName();
        //virtual ~SoilState();

    private:
        string name;
};


#endif
