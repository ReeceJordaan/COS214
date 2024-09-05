#ifndef FARM_H
#define FARM_H

#include <vector>
#include "FarmUnit.h"
#include "Iterator.h"

class Farm : public FarmUnit {
    private:
        std::vector<FarmUnit*> cropFields;

    public:
        virtual ~Farm();

        void add(FarmUnit* farmUnit) override;
        void remove(FarmUnit* farmUnit) override;
        FarmUnit* getChild(int index) override;

        Iterator* createDFSIterator();
        Iterator* createBFSIterator();
};

#endif // FARM_H