//! @file BFS.h
//! @brief Declaration of the BFS class, which implements a breadth-first search iterator for CropFields.

#ifndef BFS_H
#define BFS_H

#include <vector>
#include <queue>
#include "Iterator.h"
#include "CropField.h"

//! @class BFS
//! @brief Implements the breadth-first search (BFS) traversal for a collection of CropFields.
class BFS : public Iterator {
    private:
        //! Performs a breadth-first search (level-order traversal) starting from the given index.
        //! @param index The starting index for the BFS traversal.
        //! @return A vector of CropFields in the order they are visited during the traversal.
        std::vector<CropField*> breadthFirstSearch(int index);

    public:
        //! Constructor for BFS.
        //! @param cropFieldHeap A vector of CropFields to perform BFS on.
        BFS(std::vector<CropField*> cropFieldHeap);

        //! Destructor for BFS.
        ~BFS();

        //! Returns the first CropField in the BFS traversal.
        //! @return Pointer to the first CropField.
        CropField* firstFarm();

        //! Moves to the next CropField in the BFS traversal.
        void next();

        //! Checks if the BFS traversal is complete.
        //! @return `true` if the traversal is done, `false` otherwise.
        bool isDone() const;

        //! Returns the current CropField in the BFS traversal.
        //! @return Pointer to the current CropField.
        CropField* currentFarm();
};

#endif // BFS_H