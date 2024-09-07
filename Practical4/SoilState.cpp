#include "SoilState.h"

SoilState::SoilState(const SoilState &other){
    this->name = other.name;
}

SoilState::SoilState(string name){
    this->name = name;
}

string SoilState::getName(){
    return name;
}