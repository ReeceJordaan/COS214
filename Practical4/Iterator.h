#ifndef ITERATOR_H
#define ITERATOR_H

#include <vector>
#include "CropField.h"

class Iterator {
    protected:
        std::vector<CropField*> cropFieldHeap; // Max heap on the totalCapacity
        int currentPos;

    public:
        Iterator(std::vector<CropField*> cropFieldHeap);
        virtual ~Iterator();

        virtual CropField* firstFarm() = 0;
        virtual void next() = 0; 
        virtual bool isDone() const = 0;
        virtual CropField* currentFarm() = 0;
};

#endif // ITERATOR_H