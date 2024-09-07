#ifndef FARM_H
#define FARM_H

#include <vector>
#include <algorithm>
#include "FarmUnit.h"
#include "DFS.h"
#include "BFS.h"

class Iterator;

class Farm : public FarmUnit {
    private:
        std::vector<CropField*> cropFieldHeap;

    public:
        Farm(int currentCapacity, int totalCapacity);
        ~Farm();

        void add(CropField* cropField);
        void remove(CropField* cropField);
        CropField* getChild(int index);

        Iterator* createDFSIterator(std::vector<CropField*> cropFieldHeap);
        Iterator* createBFSIterator(std::vector<CropField*> cropFieldHeap);

        int getCurrentCapacity() const;
        void setCurrentCapacity(int currentCapacity);
        int getTotalCapacity() const;
        void setTotalCapacity(int totalCapacity);
};

#endif // FARM_H