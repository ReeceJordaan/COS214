#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <vector>
#include <string>
#include "Truck.h"
#include "FertilizerTruck.h"
#include "DeliveryTruck.h"

class Iterator;
class CropField;

class FarmUnit {
    protected:
        std::vector<Truck*> trucks;
        int currentCapacity;
        int totalCapacity;

    public:
        FarmUnit(int currentCapacity, int totalCapacity);
        FarmUnit(FarmUnit* farmUnit);
        virtual ~FarmUnit();

        virtual void buyTruck();
        virtual void sellTruck();
        virtual void callTruck();

        int getCurrentCapacity() const;
        void setCurrentCapacity(int currentCapacity);
        int getTotalCapacity() const;
        void setTotalCapacity(int totalCapacity);

        virtual void add(CropField* cropField);
        virtual void remove(CropField* cropField);
        virtual CropField* getChild(int index);

        virtual Iterator* createDFSIterator();
        virtual Iterator* createBFSIterator();

        virtual void print() = 0;
};

#endif // FARMUNIT_H