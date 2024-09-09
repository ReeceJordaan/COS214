
#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H

#include "Truck.h"
#include "Soil.h"
#include <iostream>

class CropField;

class FertilizerTruck : public Truck
{
    public:
        FertilizerTruck(CropField* subject, Soil* soilState);
        FertilizerTruck(const FertilizerTruck* other);
        ~FertilizerTruck() = default;

        void startEngine();

    private:
        CropField* subject;
        Soil* soilState;
};


#endif

