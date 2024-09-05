#ifndef CROPFIELD_H
#define CROPFIELD_H

#include <string>
#include <vector>
#include "SoilState.h"
#include "FarmUnit.h"

class Barn;

class CropField : public FarmUnit {
    private:
        std::string cropType;
        std::vector<Barn*> barns;
        SoilState* soilState;

    public:
        std::string getCropType() override;
        SoilState* getSoilState() const;
        void setSoilState(SoilState* state);
        std::string getSoilStateName() const;
};

#endif // CROPFIELD_H