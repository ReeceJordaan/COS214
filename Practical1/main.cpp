#include "Starter.h"
#include "MainCourse.h"
#include "Dessert.h"
#include "MenuItem.h"
#include "Menu.h"
#include "Course.h"

#include <iostream>
#include <string>

int main() {
    std::cout << "Starter" << std::endl;

    Starter* starter = new Starter(10);
    starter->addMenuItem("Onion Soup", 9.99, 3);
    starter->addMenuItem("Apple Pie", 19.99, 4);
    starter->printMenuItems();

    std::cout << std::endl;

    starter->printInventory();

    std::cout << std::endl;

    std::cout << starter->getMenuItem(0) << std::endl;
    std::cout << starter->getMenuItem(1) << std::endl;
    std::cout << starter->getMenuItem(2) << std::endl;

    std::cout << std::endl;

    starter->recommendBeverage();

    std::cout << "\nMainCourse" << std::endl;

    MainCourse* main = new MainCourse(10);
    main->addMenuItem("Steak and Chips", 9.99, 3);
    main->addMenuItem("Soup", 19.99, 4);
    main->addMenuItem("Baked Beans", 999.99, 10);
    main->printMenuItems();

    std::cout << std::endl;

    main->printInventory();

    std::cout << std::endl;

    std::cout << main->getMenuItem(0) << std::endl;
    std::cout << main->getMenuItem(1) << std::endl;
    std::cout << main->getMenuItem(2) << std::endl;

    std::cout << std::endl;

    main->recommendBeverage();

    std::cout << "\nDessert" << std::endl;

    Dessert* dessert = new Dessert(10);
    dessert->addMenuItem("Jelly", 9.99, 3);
    dessert->printMenuItems();

    std::cout << std::endl;

    dessert->printInventory();

    std::cout << std::endl;

    std::cout << dessert->getMenuItem(0) << std::endl;
    std::cout << dessert->getMenuItem(1) << std::endl;
    std::cout << dessert->getMenuItem(2) << std::endl;

    std::cout << std::endl;

    dessert->recommendBeverage();

    std::cout << "\nMenu\n" << std::endl;

    Menu menu = Menu();

    menu.addCourse(starter);
    menu.addCourse(main);
    menu.addCourse(dessert);

    menu.addMenuItem("Dessert", "Ice-cream", 299.99, 3);

    menu.printMenu();

    std::cout << std::endl;

    menu.inventory();

    std::cout << std::endl;

    std::cout << menu.orderItem("Main", 'b') << std::endl;
    std::cout << menu.orderItem("Starter", 'a') << std::endl;
    std::cout << menu.orderItem("Main", 'b') << std::endl;
    std::cout << menu.orderItem("Main", 'b') << std::endl;
    std::cout << menu.orderItem("Main", 'b') << std::endl;
    std::cout << menu.orderItem("Main", 'b') << std::endl;
    std::cout << menu.orderItem("Main", 'e') << std::endl;
    std::cout << menu.orderItem("Abc", 'b') << std::endl;

    std::cout << std::endl;

    menu.inventory();

    std::cout << std::endl;

    menu.closeShop();

    std::cout << std::endl;

    menu.printMenu();

    std::cout << std::endl;
    
    return 0;
}