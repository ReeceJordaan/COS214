#ifndef ITERATOR_H
#define ITERATOR_H

#include "Farm.h"

class Iterator {
    public:
        virtual Farm* firstFarm() = 0;
        virtual void next() = 0;
        virtual bool isDone() const = 0;
        virtual Farm* currentFarm() = 0;
};

#endif // ITERATOR_H