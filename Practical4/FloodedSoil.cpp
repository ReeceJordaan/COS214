#include "FloodedSoil.h"
#include<iostream>
using namespace std;

FloodedSoil::FloodedSoil() : SoilState("Flooded")
{}

void FloodedSoil::harvestCrops(){
    cout<<"No crops can be harvested; the soil is flooded."<<endl;
}

void FloodedSoil::rain(){
    cout<<"The soil is already flooded."<<endl;
}