#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "Soil.h"

class FruitfulSoil : public Soil
{
    public:
        FruitfulSoil();
        FruitfulSoil(const FruitfulSoil* other);
        ~FruitfulSoil() = default;

        void harvestCrops();
        void rain();
};


#endif
