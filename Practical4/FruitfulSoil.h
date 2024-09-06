#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "Soil.h"
#include<iostream>

using namespace std;

class FruitfulSoil : public Soil
{
    public:
        void harvestCrops();
        void rain();
};


#endif
