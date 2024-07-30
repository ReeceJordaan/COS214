#ifndef MENU_H
#define MENU_H

#include <string>
#include <map>
#include "Course.h"

class Menu {
    public:
        Menu();
        bool addCourse(Course* course);
        bool addMenuItem(std::string courseDescription, std::string description, float price, int stock);
        void printMenu() const;
        void inventory() const;
        float orderItem(std::string courseDescription, char item);
        bool isCoursesEmpty();
        void closeShop();
        ~Menu();
    
    private:
        std::map<std::string, Course*> courses;
};

#endif