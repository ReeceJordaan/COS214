//! @file DFS.h
//! @brief Declaration of the DFS class, which implements a depth-first search iterator for CropFields.

#ifndef DFS_H
#define DFS_H

#include <vector>
#include <iostream>
#include "Iterator.h"
#include "CropField.h"

//! @class DFS
//! @brief Implements the depth-first search (DFS) traversal for a collection of CropFields.
class DFS : public Iterator {
    private:
        //! Performs a depth-first search (post-order traversal) starting from the given index.
        //! @param index The starting index for the DFS traversal.
        //! @return A vector of CropFields in the order they are visited during the traversal.
        std::vector<CropField*> depthFirstSearch(int index);

    public:
        //! Constructor for DFS.
        //! @param cropFieldHeap A vector of CropFields to perform DFS on.
        DFS(std::vector<CropField*> cropFieldHeap);

        //! Destructor for DFS.
        ~DFS();

        //! Returns the first CropField in the DFS traversal.
        //! @return Pointer to the first CropField.
        CropField* firstFarm();

        //! Moves to the next CropField in the DFS traversal.
        void next();

        //! Checks if the DFS traversal is complete.
        //! @return `true` if the traversal is done, `false` otherwise.
        bool isDone() const;

        //! Returns the current CropField in the DFS traversal.
        //! @return Pointer to the current CropField.
        CropField* currentFarm();
};

#endif // DFS_H