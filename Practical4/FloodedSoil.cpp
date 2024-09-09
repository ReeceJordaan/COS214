#include "FloodedSoil.h"
#include<iostream>
using namespace std;

FloodedSoil::FloodedSoil() : Soil("Flooded") {

}

FloodedSoil::FloodedSoil(const FloodedSoil* other) : Soil("Flooded") {

}

void FloodedSoil::harvestCrops() {
    cout<<"No crops can be harvested; the soil is flooded."<<endl;
}

void FloodedSoil::rain() {
    cout<<"The soil is already flooded."<<endl;
}