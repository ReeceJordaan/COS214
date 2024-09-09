#include "DrySoil.h"
#include <iostream>
using namespace std;

DrySoil::DrySoil() :  Soil("Dry") {

}

DrySoil::DrySoil(const DrySoil* other) :  Soil("Dry") {

}

void DrySoil::harvestCrops() {
    cout<<"Harvesting minimal crops from dry soil (x1)."<<endl;
}

void DrySoil::rain() {
    cout<<"Rain has made the dry soil Fruitful!"<<endl;
}
