#ifndef BFS_H
#define BFS_H

#include "Iterator.h"

class BFS : public Iterator {
    public:
        Farm* firstFarm() override;
        void next() override;
        bool isDone() const override;
        Farm* currentFarm() override;
};

#endif // BFS_H