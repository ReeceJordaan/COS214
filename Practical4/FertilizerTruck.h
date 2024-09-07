
#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H

#include "Truck.h"
#include "CropField.h"
#include "SoilState.h"
#include<iostream>

class FertilizerTruck : public Truck
{
    public:
        FertilizerTruck(CropField* subject, SoilState* soilState);
        void startEngine();

    private:
        CropField* subject;
        SoilState* soilState;
};


#endif

