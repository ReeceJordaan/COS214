#include <iostream>
#include "MainCourse.h"

MainCourse::MainCourse(int maxNumberOfItems) : Course("Main", maxNumberOfItems) {
    
}

void MainCourse::recommendBeverage() {
    std::cout << "Coke" << std::endl;
}