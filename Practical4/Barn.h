//! @file Barn.h
//! @brief Declaration of the Barn class, representing a barn in the farm with truck management and capacity handling.

#ifndef BARN_H
#define BARN_H

#include <iomanip>
#include "FarmUnit.h"

//! @class Barn
//! @brief Represents a barn, inheriting from FarmUnit, with truck management and capacity functions.
class Barn : public FarmUnit {
    public:
        //! Constructor for Barn.
        //! @param totalCapacity The total capacity of the barn.
        Barn(int totalCapacity);

        //! Copy constructor for Barn.
        //! @param barn Pointer to another Barn object to copy from.
        Barn(Barn* barn);

        //! Destructor for Barn.
        ~Barn();

        //! Buys a new truck for the barn.
        void buyTruck();

        //! Sells a truck from the barn.
        void sellTruck();

        //! Calls a truck for delivery or other tasks.
        void callTruck();

        //! Prints the details of the barn, including truck information and capacity.
        void print();
};

#endif // BARN_H