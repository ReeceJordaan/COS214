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

        virtual void add(CropField* cropField);
        virtual void remove(CropField* cropField);
        virtual CropField* getChild(int index);

        virtual Iterator* createDFSIterator();
        virtual Iterator* createBFSIterator();

        void buyTruck(std::string type);
        void sellTruck(std::string type);
        void callTruck(std::string type);

        virtual int getCurrentCapacity() const = 0;
        virtual void setCurrentCapacity(int currentCapacity) = 0;
        virtual int getTotalCapacity() const = 0;
        virtual void setTotalCapacity(int totalCapacity) = 0;
};

#endif // FARMUNIT_H