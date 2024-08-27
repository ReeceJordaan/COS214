#include "Legion.h"
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

Legion::Legion(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void Legion::move() {
    std::cout << "Legion marching forward in tight formation." << std::endl;
}

void Legion::fight() {
    std::cout << "Legion engaging the enemy with disciplined precision." << std::endl;
}

void Legion::size() {
    std::cout << "There are " << children.size() << " units in the legion." << std::endl;
}

void Legion::add(UnitComponent* component) {
    children.push_back(component);
}

void Legion::remove(UnitComponent* component) {
    auto it = std::find(children.begin(), children.end(), component);

    if (it != children.end()) {
        children.erase(it);
    }
}

UnitComponent* Legion::getChild(int index) {
    if(children.empty() || index < 0 || index >= children.size()) {
        return nullptr;
    }else {
        return children.at(index);
    }
}

std::string Legion::toString() const {
    std::stringstream ss;
    ss << "Legion Formation:\n";

    for (const auto& child : children) {
        std::string name = typeid(*child).name();
        
        size_t i = 0;
        while (i < name.size() && std::isdigit(name[i])) {
            ++i;
        }
        ss << "- " << name.substr(i) << "\n";
    }

    return ss.str();
}