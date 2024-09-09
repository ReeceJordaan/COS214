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

        Iterator* createDFSIterator();
        Iterator* createBFSIterator();

        void print();
};

#endif // FARM_H