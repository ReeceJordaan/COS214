#include <iostream>
#include "Menu.h"
#include "Starter.h"
#include "MainCourse.h"
#include "Dessert.h"

Menu::Menu() {

}

bool Menu::addCourse(Course* course) {
    if (courses.find(course->getDescription()) == courses.end()) {
        courses[course->getDescription()] = course;
        return true;
    }else {
        return false;
    }
}

bool Menu::addMenuItem(std::string courseDescription, std::string description, float price, int stock) {
    if (courses.find(courseDescription) != courses.end()) {
        return courses[courseDescription]->addMenuItem(description, price, stock);
    }else {
        return false;
    }
}

void Menu::printMenu() const {
    for (auto const& course : courses) {
        std::cout << course.second->getDescription() << std::endl;
        course.second->printMenuItems();
    }
}

void Menu::inventory() const {
    for (auto const& course : courses) {
        std::cout << course.second->getDescription() << std::endl;
        course.second->printInventory();
    }
}

float Menu::orderItem(std::string courseDescription, char item) {
    if (courses.find(courseDescription) != courses.end()) {
        if(courses.at(courseDescription)->getMenuItem(item - 97) != nullptr && courses.at(courseDescription)->getMenuItem(item - 97)->getStock() > 0) {
            courses.at(courseDescription)->getMenuItem(item - 97)->reduceStock();
            return courses.at(courseDescription)->getMenuItem(item - 97)->getPrice();
        } else {
            return 0;
        }
    }else {
        return 0;
    }
}

bool Menu::isCoursesEmpty() {
    return courses.empty();
}

void Menu::closeShop() {
    std::cout << "Closing shop. Deleting all " << courses.size() << " courses" << std::endl;

    for (auto& course : courses) {
        if(course.second != nullptr) {
            delete course.second;
            course.second = nullptr;
        }
    }

    courses.clear();
}

Menu::~Menu() {
    std::cout << "Menu destructor called" << std::endl;

    if(courses.size() > 0) {
        closeShop();
    }
}