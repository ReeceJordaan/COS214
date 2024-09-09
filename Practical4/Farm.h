//! @file Farm.h
//! @brief Declaration of the Farm class, representing a farm with crop fields and iterators for traversal.

#ifndef FARM_H
#define FARM_H

#include <vector>
#include <algorithm>
#include "FarmUnit.h"
#include "DFS.h"
#include "BFS.h"

class Iterator;
class CropField;

//! @class Farm
//! @brief Represents a farm, inheriting from FarmUnit, managing a collection of CropFields and providing iterators for traversal.
class Farm : public FarmUnit {
    private:
        //! A heap of CropFields managed by the farm.
        std::vector<CropField*> cropFieldHeap;

    public:
        //! Constructor for Farm.
        //! @param currentCapacity The current capacity of the farm.
        //! @param totalCapacity The total capacity of the farm.
        Farm(int currentCapacity, int totalCapacity);

        //! Destructor for Farm.
        ~Farm();

        //! Adds a CropField to the farm.
        //! @param cropField Pointer to the CropField to add.
        void add(CropField* cropField);

        //! Removes a CropField from the farm.
        //! @param cropField Pointer to the CropField to remove.
        void remove(CropField* cropField);

        //! Gets a child CropField by index.
        //! @param index The index of the CropField to retrieve.
        //! @return Pointer to the CropField at the specified index.
        CropField* getChild(int index);

        //! Creates a Depth-First Search (DFS) iterator for traversing the farm.
        //! @return Pointer to an Iterator for DFS traversal.
        Iterator* createDFSIterator();

        //! Creates a Breadth-First Search (BFS) iterator for traversing the farm.
        //! @return Pointer to an Iterator for BFS traversal.
        Iterator* createBFSIterator();

        //! Prints the details of the farm, including its crop fields and capacity.
        void print();
};

#endif // FARM_H