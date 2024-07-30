#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

class MenuItem {
    public:
        MenuItem(std::string description, float price, int stock);
        std::string getDescription();
        float getPrice();
        int getStock();
        void reduceStock();
    private:
        std::string description;
        float price;
        int stock;
};

#endif