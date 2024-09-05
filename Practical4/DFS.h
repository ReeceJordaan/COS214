#ifndef DFS_H
#define DFS_H

#include "Iterator.h"

class DFS : public Iterator {
    public:
        Farm* firstFarm() override;
        void next() override;
        bool isDone() const override;
        Farm* currentFarm() override;
};

#endif // DFS_H