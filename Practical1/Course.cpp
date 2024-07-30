#include <string>
#include <vector>
#include <iostream>
#include "Course.h"

Course::Course(std::string description, int maxNumberOfItems) {
    this->description = description;
    this->maxNumberOfItems = maxNumberOfItems;
    this->menuItems = {};
}

std::string Course::getDescription() {
    return description;
}

bool Course::addMenuItem(std::string description, float price, int stock) {
    if(menuItems.size() < static_cast<size_t>(maxNumberOfItems)) {
        menuItems.push_back(new MenuItem(description, price, stock));
        return true;
    } else {
        return false;
    }
}

void Course::printMenuItems() {
    for(size_t i  = 0; i < menuItems.size(); i++) {
        char alph = 97 + i;
        std::cout << "\t" << alph << ".\t" << menuItems.at(i)->getDescription() << std::endl;
    }
}

void Course::printInventory() {
    for(size_t i  = 0; i < menuItems.size(); i++) {
        char alph = 97 + i;
        std::cout << "\t" << alph << ".\t" << menuItems.at(i)->getDescription() << "\t" << menuItems.at(i)->getPrice() << "\t" << menuItems.at(i)->getStock() << std::endl;
    }
}

MenuItem* Course::getMenuItem(int index) {
    if(index >= 0 && static_cast<size_t>(index) < menuItems.size()) {
        return menuItems.at(index);
    }else {
        return nullptr;
    }
}

Course::~Course() {
    for (size_t i = 0; i < menuItems.size(); i++) {
        if(menuItems[i] != nullptr) {
            delete menuItems[i];
            menuItems[i] = nullptr;
        }
    }
    
    menuItems.clear();
}