#ifndef BARN_H
#define BARN_H

#include <iomanip>
#include "FarmUnit.h"

class Barn : public FarmUnit {
    public:
        Barn(int totalCapacity);
        Barn(Barn* barn);
        ~Barn();

        void buyTruck();
        void sellTruck();
        void callTruck();

        void print();
};

#endif // BARN_H
