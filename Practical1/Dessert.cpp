#include <iostream>
#include "Dessert.h"

Dessert::Dessert(int maxNumberOfItems) : Course("Dessert", maxNumberOfItems) {
    
}

void Dessert::recommendBeverage() {
    std::cout << "Coffee" << std::endl;
}