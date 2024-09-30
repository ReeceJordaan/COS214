#include "Soil.h"

Soil::Soil(string name) {
    this->name = name;
}

Soil::Soil(const Soil* other) {
    this->name = other->name;
}

string Soil::getName() {
    return name;
}

void Soil::setName(string name){
    this->name = name;
}
