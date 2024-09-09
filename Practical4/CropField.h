#ifndef CROPFIELD_H
#define CROPFIELD_H

#include <string>
#include <vector>
#include "Soil.h"
#include "FarmUnit.h"

class Barn;

class CropField : public FarmUnit {
    private:
        std::string cropType;
        std::vector<Barn*> barns;
        Soil* soilState;

    public:
        CropField(std::string cropType, int currentCapacity, int totalCapacity);
        CropField(CropField* cropField);
        ~CropField();

        std::string getCropType();
        Soil* getSoilState() const;
        void setSoilState(Soil* soilState);
        std::string getSoilStateName() const;

        void buildBarn();

        void buyTruck();
        void sellTruck();
        void callTruck();

        void print();
};

#endif // CROPFIELD_H
