#ifndef BFS_H
#define BFS_H

#include <vector>
#include <queue>
#include "Iterator.h"
#include "CropField.h"

class BFS : public Iterator {
    private:
        std::vector<CropField*> breadthFirstSearch(int index); // level order traversal

    public:
        BFS(std::vector<CropField*> cropFieldHeap);
        ~BFS();

        CropField* firstFarm();
        void next();
        bool isDone() const;
        CropField* currentFarm();
};

#endif // BFS_H