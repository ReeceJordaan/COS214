#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "Soil.h"
#include<iostream>

using namespace std;

class FloodedSoil : public Soil
{
    public:
        void harvestCrops();
        void rain();
};


#endif
