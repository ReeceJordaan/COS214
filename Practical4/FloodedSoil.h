#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "Soil.h"

class FloodedSoil : public Soil
{
    public:
        FloodedSoil();
        FloodedSoil(const FloodedSoil* other);
        ~FloodedSoil() = default;

        void harvestCrops();
        void rain();
};


#endif
