#include "DrySoil.h"
#include<iostream>
using namespace std;

DrySoil::DrySoil() :  SoilState("Dry")
{}

void DrySoil::harvestCrops(){
    cout<<"Harvesting minimal crops (x1)."<<endl;
}

void DrySoil::rain(){
    cout<<"Rain has made the soil Fruitful!"<<endl;
}
