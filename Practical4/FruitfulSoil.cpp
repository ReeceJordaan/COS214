#include "FruitfulSoil.h"
#include <iostream>
using namespace std;

FruitfulSoil::FruitfulSoil() :  Soil("Fruitful") {

}

FruitfulSoil::FruitfulSoil(const FruitfulSoil* other) :  Soil("Fruitful") {

}

void FruitfulSoil::harvestCrops() {
    cout<<"Harvesting abundant crops from fruitful soil (x3)."<<endl;
}

void FruitfulSoil::rain() {
    cout<<"Rain has flooded the fruitful soil!"<<endl;
}