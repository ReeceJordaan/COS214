#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "Soil.h"

class DrySoil : public Soil
{
    public:
        DrySoil();
        DrySoil(const DrySoil* other);
        ~DrySoil() = default;

        void harvestCrops();
        void rain();
};


#endif
