#include "Legion.h"
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#using namespace std;

Legion::Legion(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void Legion::move() {
    cout<<"Legion marching forward in tight formation."<<endl;
}

void Legion::fight() {
    cout<<"Legion engaging the enemy with disciplined precision."<<endl;
}

void Legion::size() {
    cout<<"There are "<< children.size() <<" units in the legion."<<endl;
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

string Legion::toString() const {
    stringstream ss;
    ss << "Legion Formation:\n";

    for (const auto& child : children) {
        string name = typeid(*child).name();
        
        size_t i = 0;
        while (i < name.size() && std::isdigit(name[i])) {
            ++i;
        }
        ss << "- " << name.substr(i) << "\n";
    }

    return ss.str();
}
