#ifndef BARN_H
#define BARN_H

#include "FarmUnit.h"

class Barn : public FarmUnit {
    public:
        Barn(int currentCapacity, int totalCapacity);
        Barn(Barn* barn);
        ~Barn();

        int getCurrentCapacity() const;
        void setCurrentCapacity(int currentCapacity);
        int getTotalCapacity() const;
        void setTotalCapacity(int totalCapacity);
};

#endif // BARN_H