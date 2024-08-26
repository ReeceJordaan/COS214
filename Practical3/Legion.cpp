#include "Legion.h"
#include <algorithm>

void Legion::move() {
    std::cout << "Legion marching forward in tight formation." << std::endl;
}

void Legion::attack() {
    std::cout << "Legion engaging the enemy with disciplined precision." << std::endl;
}

void Legion::size() {
    std::cout << "There are " << children.size() << " units in the legion." << std::endl;
}


void Legion::add(LegionUnit* component) {
    children.push_back(component);
}

void Legion::remove(LegionUnit* component) {
    auto it = std::find(children.begin(), children.end(), component);

    if (it != children.end()) {
        children.erase(it);
    }
}

LegionUnit* Legion::getChild(int index) {
    if(children.empty() || index < 0 || index >= children.size()) {
        return nullptr;
    }else {
        return children.at(index);
    }
}