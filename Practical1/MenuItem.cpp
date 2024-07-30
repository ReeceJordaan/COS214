#include <string>
#include <iostream>
#include "MenuItem.h"

MenuItem::MenuItem(std::string description, float price, int stock) {
    this->description = description;
    this->price = price;
    this->stock = stock;
}

std::string MenuItem::getDescription() {
    return description;
}

float MenuItem::getPrice() {
    return price;
}

int MenuItem::getStock() {
    return stock;
}

void MenuItem::reduceStock() {
    stock--;
}