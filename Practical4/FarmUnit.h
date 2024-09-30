//! @file FarmUnit.h
//! @brief Declaration of the FarmUnit class, representing a base unit in a farm with trucks and capacity management.

#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <vector>
#include <string>
#include "Truck.h"
#include "FertilizerTruck.h"
#include "DeliveryTruck.h"

class Iterator;
class CropField;

//! @class FarmUnit
//! @brief The base class for all farm units, managing trucks and capacity.
class FarmUnit {
   protected:
    //! A collection of trucks associated with the farm unit.
    std::vector<Truck*> trucks;

    //! The current capacity of the farm unit.
    int currentCapacity;

    //! The total capacity of the farm unit.
    int totalCapacity;

   public:
    //! Constructor for FarmUnit.
    //! @param currentCapacity The current capacity of the farm unit.
    //! @param totalCapacity The total capacity of the farm unit.
    FarmUnit(int currentCapacity, int totalCapacity);

    //! Copy constructor for FarmUnit.
    //! @param farmUnit Pointer to another FarmUnit object to copy from.
    FarmUnit(FarmUnit* farmUnit);

    //! Virtual destructor for FarmUnit.
    virtual ~FarmUnit();

    //! Buys a new truck for the farm unit.
    virtual void buyTruck();

    //! Sells a truck from the farm unit.
    virtual void sellTruck();

    //! Calls a truck for delivery or other tasks.
    virtual void callTruck();

    //! Gets the current capacity of the farm unit.
    //! @return The current capacity.
    int getCurrentCapacity() const;

    //! Sets the current capacity of the farm unit.
    //! @param currentCapacity The new current capacity.
    void setCurrentCapacity(int currentCapacity);

    //! Gets the total capacity of the farm unit.
    //! @return The total capacity.
    int getTotalCapacity() const;

    //! Sets the total capacity of the farm unit.
    //! @param totalCapacity The new total capacity.
    void setTotalCapacity(int totalCapacity);

    //! Applies fertilizer using a fertilizer truck.
    void applyFertilizer();

    //! Adds a CropField to the farm unit.
    //! @param cropField Pointer to the CropField to add.
    virtual void add(CropField* cropField);

    //! Removes a CropField from the farm unit.
    //! @param cropField Pointer to the CropField to remove.
    virtual void remove(CropField* cropField);

    //! Gets a child CropField by index.
    //! @param index The index of the CropField to retrieve.
    //! @return Pointer to the CropField at the specified index.
    virtual CropField* getChild(int index);

    //! Creates a Depth-First Search (DFS) iterator for traversing the farm unit.
    //! @return Pointer to an Iterator for DFS traversal.
    virtual Iterator* createDFSIterator();

    //! Creates a Breadth-First Search (BFS) iterator for traversing the farm unit.
    //! @return Pointer to an Iterator for BFS traversal.
    virtual Iterator* createBFSIterator();

    //! Pure virtual function to print the details of the farm unit.
    //! Must be implemented by derived classes.
    virtual void print() = 0;
};

#endif // FARMUNIT_H