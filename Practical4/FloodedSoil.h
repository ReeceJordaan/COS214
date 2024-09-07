#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"

class FloodedSoil : public SoilState
{
    public:
        FloodedSoil();
        void harvestCrops();
        void rain();
};


#endif
