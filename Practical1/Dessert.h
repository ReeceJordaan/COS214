#ifndef DESSERT_H
#define DESSERT_H

#include "Course.h"

class Dessert : public Course {
    public:
        Dessert(int maxNumberOfItems);
        virtual void recommendBeverage();
};

#endif