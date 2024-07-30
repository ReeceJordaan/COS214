#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "MenuItem.h"

class Course {
    public:
        Course(std::string description, int maxNumberOfItems);
        std::string getDescription();
        bool addMenuItem(std::string description, float price, int stock);
        void printMenuItems();
        void printInventory();
        MenuItem* getMenuItem(int index);
        virtual void recommendBeverage() = 0;
        virtual ~Course();
    protected:
        std::string description;
        int maxNumberOfItems;
        std::vector<MenuItem*> menuItems;
};

#endif