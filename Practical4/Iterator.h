//! @file Iterator.h
//! @brief Declaration of the Iterator class, used for traversing a collection of CropFields.

#ifndef ITERATOR_H
#define ITERATOR_H

#include <vector>
#include "CropField.h"

//! @class Iterator
//! @brief Abstract base class for iterating over a collection of CropFields.
class Iterator {
   protected:
        //! A heap of CropFields, typically managed by the farm, ordered by total capacity.
        std::vector<CropField*> cropFieldHeap; 

        //! The current position in the heap.
        int currentPos;

   public:
        //! Constructor for Iterator.
        //! @param cropFieldHeap A vector of CropFields to iterate over, typically a max heap based on total capacity.
        Iterator(std::vector<CropField*> cropFieldHeap);

        //! Virtual destructor for Iterator.
        virtual ~Iterator();

        //! Initializes the iterator to the first CropField.
        //! @return Pointer to the first CropField in the collection.
        virtual CropField* firstFarm() = 0;

        //! Moves the iterator to the next CropField in the collection.
        virtual void next() = 0;

        //! Checks if the iterator has finished traversing the collection.
        //! @return `true` if done, `false` otherwise.
        virtual bool isDone() const = 0;

        //! Returns the current CropField in the collection.
        //! @return Pointer to the current CropField.
        virtual CropField* currentFarm() = 0;
};

#endif // ITERATOR_H