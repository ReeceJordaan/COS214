#ifndef DFS_H
#define DFS_H

#include <vector>
#include <iostream>
#include "Iterator.h"
#include "CropField.h"

class DFS : public Iterator {
    private:
        std::vector<CropField*> depthFirstSearch(int index); // Postorder traversal

    public:
        DFS(std::vector<CropField*> cropFieldHeap);
        ~DFS();

        CropField* firstFarm();
        void next();
        bool isDone() const;
        CropField* currentFarm();
};

#endif // DFS_H