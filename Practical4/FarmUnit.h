#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <vector>
#include <string>
#include "Truck.h"
#include "Iterator.h"

class FarmUnit {
    private:
        std::vector<Truck*> truckList;
        int currentCapacity;
        int totalCapacity;

    public:
        virtual ~FarmUnit();

        virtual void add(FarmUnit* farmUnit) = 0;
        virtual void remove(FarmUnit* farmUnit) = 0;
        virtual FarmUnit* getChild(int index) = 0;

        virtual std::string getCropType() = 0;
        virtual Iterator* createDFSIterator() = 0;
        virtual Iterator* createBFSIterator() = 0;

        Truck* buyTruck();
        void sellTruck(Truck* truck);
        void callTruck();

        int getCurrentCapacity() const;
        void setCurrentCapacity(int capacity);
        int getTotalCapacity() const;
        void setTotalCapacity(int capacity);
};

#endif // FARMUNIT_H