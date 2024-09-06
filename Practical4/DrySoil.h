#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "Soil.h"
#include<iostream>

using namespace std;

class DrySoil : public Soil
{
    public:
        void harvestCrops();
        void rain();
};


#endif
