#include "FruitfulSoil.h"
#include <iostream>
using namespace std;

FruitfulSoil::FruitfulSoil() :  SoilState("Fruitful")
{}

void FruitfulSoil::harvestCrops(){
    cout<<"Harvesting abundant crops (x3)."<<endl;
}

void FruitfulSoil::rain(){
    cout<<"Rain has flooded the soil!"<<endl;
}