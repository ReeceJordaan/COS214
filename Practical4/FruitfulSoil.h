#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "SoilState.h"

class FruitfulSoil : public SoilState
{
    public:
        FruitfulSoil();
        void harvestCrops();
        void rain();
};


#endif
