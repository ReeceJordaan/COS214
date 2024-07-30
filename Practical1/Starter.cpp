#include <iostream>
#include "Starter.h"

Starter::Starter(int maxNumberOfItems) : Course("Starter", maxNumberOfItems) {
    
}

void Starter::recommendBeverage() {
    std::cout << "Sparkling Water" << std::endl;
}