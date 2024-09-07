#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H

#include "Truck.h"
#include <iostream>

class FertilizerTruck : public Truck
{
    public:
        void startEngine();

    private:
        CropField* subject;
        Soil* soilState;
};

#endif