#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "SoilState.h"

class DrySoil : public SoilState
{
    public:
        DrySoil();
        void harvestCrops();
        void rain();
};


#endif
