#include "OpenFieldArtillery.h"
#include <iostream>
using namespace std;

OpenFieldArtillery::OpenFieldArtillery(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void OpenFieldArtillery::move(){
    cout<<"OpenField Artillery setting up on the plains."<<endl;
}

void OpenFieldArtillery::fight(){
    cout<<"OpenField Artillery launching a long-range bombardment."<<endl;
}
