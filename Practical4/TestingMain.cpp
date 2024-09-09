#include "CropField.h"
#include "Barn.h"
#include "Farm.h"
#include "FarmUnit.h"
#include "CropField.h"
#include "BarnDecorator.h"
#include "FertilizerDecorator.h"
#include "DrySoil.h"

using namespace std;

int main() {

    std::cout << "========== Testing CropField ==========\n" << std::endl;

    CropField field1 = CropField("Corn", 15, 30);
    CropField field2 = CropField("Potato", 15, 45);
    CropField field3 = CropField("Tomato", 15, 60);
    CropField field4 = CropField("Sugarcane", 15, 15);
    CropField field5 = CropField(&field1);
    CropField field6 = CropField(&field2);
    CropField field7 = CropField(&field3);
    CropField field8 = CropField(&field4);

    field5.setTotalCapacity(75);
    field6.setTotalCapacity(100);
    field7.setTotalCapacity(125);
    field8.setTotalCapacity(55);

    field1.buildBarn(50);
    field1.buildBarn(60);
    field5.buildBarn(70);
    field5.buildBarn(80);

    field1.print();
    field5.print();
    std::cout << std::endl;

    std::cout << "========== Testing Barn ==========" << std::endl;

    Barn barn1 = Barn(60);
    Barn barn2 = Barn(95);
    Barn barn3 = Barn(&barn1);
    Barn barn4 = Barn(&barn2);

    barn3.setTotalCapacity(75);
    barn4.setTotalCapacity(100);

    barn2.print();
    barn3.print();
    std::cout << std::endl;

    std::cout << "========== Testing Farm ==========" << std::endl;

    Farm farm = Farm(0, 0);
    farm.add(&field1);
    farm.add(&field2);
    farm.add(&field3);
    farm.add(&field4);
    farm.add(&field5);
    farm.add(&field6);
    farm.add(&field7);
    farm.add(&field8);

    farm.print();
    std::cout << std::endl;

    farm.getChild(3)->print();
    std::cout << std::endl;

    farm.getChild(6)->print();
    std::cout << std::endl;

    farm.getChild(8);
    std::cout << std::endl;

    farm.getChild(-1);
    std::cout << std::endl;

    std::cout << "========== Testing Iterators ==========" << std::endl;

    farm.print();
    std::cout << std::endl << std::endl;

    Iterator* dfs = farm.createDFSIterator();

    std::cout << "Farms cropFieldHeap (DFS):\n[";
    while(!dfs->isDone()) {
        if (dfs->currentFarm() != dfs->firstFarm()) {
            std::cout << ", ";
        }

        std::cout << dfs->currentFarm()->getTotalCapacity();
        dfs->next();
    }
    std::cout << "]" << std::endl;

    Iterator* bfs = farm.createBFSIterator();
    
    std::cout << "\nFarms cropFieldHeap (BFS):\n[";
    while(!bfs->isDone()) {
        if (bfs->currentFarm() != bfs->firstFarm()) {
            std::cout << ", ";
        }

        std::cout << bfs->currentFarm()->getTotalCapacity();
        bfs->next();
    }
    std::cout << "]" << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << "Removing CropFields...\n" << std::endl;
    farm.remove(&field3);
    farm.remove(&field6);

    farm.print();
    std::cout << std::endl << std::endl;

    dfs = farm.createDFSIterator();
    
    std::cout << "Farms cropFieldHeap (DFS):\n[";
    while(!dfs->isDone()) {
        if (dfs->currentFarm() != dfs->firstFarm()) {
            std::cout << ", ";
        }

        std::cout << dfs->currentFarm()->getTotalCapacity();
        dfs->next();
    }
    std::cout << "]" << std::endl;

    bfs = farm.createBFSIterator();
    
    std::cout << "\nFarms cropFieldHeap (BFS):\n[";
    while(!bfs->isDone()) {
        if (bfs->currentFarm() != bfs->firstFarm()) {
            std::cout << ", ";
        }

        std::cout << bfs->currentFarm()->getTotalCapacity();
        bfs->next();
    }
    std::cout << "]" << std::endl;

    cout<<"========== Testing State Design Patten =========="<<endl;

    CropField* testField = new CropField("Wheat", 20, 100);
    testField->setSoilState(new DrySoil()); //we're going to start with dry soil

    std::cout << "Current soil state: " << testField->getSoilState()->getName() << std::endl;
    std::cout << "Testing harvest on Dry Soil:" << std::endl;
    testField->getSoilState()->harvestCrops();

    std::cout << "\nSimulating rain on Dry Soil:" << std::endl;
    testField->getSoilState()->rain();
    std::cout << "New soil state: " << testField->getSoilState()->getName() << std::endl;

    std::cout << "\nTesting harvest on Fruitful Soil:" << std::endl;
    testField->getSoilState()->harvestCrops();

    std::cout << "\nSimulating rain on Fruitful Soil:" << std::endl;
    testField->getSoilState()->rain();
    std::cout << "New soil state: " << testField->getSoilState()->getName() << std::endl;

    std::cout << "\nTesting harvest on Flooded Soil:" << std::endl;
    testField->getSoilState()->harvestCrops();

    std::cout << "\nSimulating rain on Flooded Soil:" << std::endl;
    testField->getSoilState()->rain();

    delete testField;

    cout<<"========== Testing Observer Design Patten =========="<<endl;

    Soil* drySoil = new DrySoil();
    FertilizerTruck* fertilizerTruck1 = new FertilizerTruck(field1, drySoil);
    FertilizerTruck* fertilizerTruck2 = new FertilizerTruck(field2, drySoil);
    FertilizerTruck* fertilizerTruck3 = new FertilizerTruck(field3, drySoil);

    DeliveryTruck* deliveryTruck1 = new DeliveryTruck(barn1);
    DeliveryTruck* deliveryTruck2 = new DeliveryTruck(barn2);
    DeliveryTruck* deliveryTruck3 = new DeliveryTruck(barn3);
    DeliveryTruck* deliveryTruck4 = new DeliveryTruck(barn4);

    std::cout << "Testing FertilizerTruck1 on Dry Soil:" << std::endl;
    fertilizerTruck1->startEngine();
    std::cout << "New soil state: " << field1->getSoilState()->getName() << std::endl;
    std::cout << "\nTesting FertilizerTruck1 on Fruitful Soil:" << std::endl;
    fertilizerTruck1->startEngine();

    std::cout << "Testing FertilizerTruck2 on Dry Soil:" << std::endl;
    fertilizerTruck2->startEngine();
    std::cout << "New soil state: " << field2->getSoilState()->getName() << std::endl;
    std::cout << "\nTesting FertilizerTruck2 on Fruitful Soil:" << std::endl;
    fertilizerTruck2->startEngine();

    std::cout << "Testing FertilizerTruck3 on Dry Soil:" << std::endl;
    fertilizerTruck3->startEngine();
    std::cout << "New soil state: " << field3->getSoilState()->getName() << std::endl;
    std::cout << "\nTesting FertilizerTruck3 on Fruitful Soil:" << std::endl;
    fertilizerTruck1->startEngine();



    std::cout << "\nTesting DeliveryTruck with Near-Full Barn:" << std::endl;
    deliveryTruck1->startEngine();
    std::cout << "Barn current capacity after collection: " << barn1->getCurrentCapacity() << std::endl;

    std::cout << "\nTesting DeliveryTruck with Near-Full Barn:" << std::endl;
    deliveryTruck2->startEngine();
    std::cout << "Barn current capacity after collection: " << barn2->getCurrentCapacity() << std::endl;
    
    std::cout << "\nTesting DeliveryTruck with Near-Full Barn:" << std::endl;
    deliveryTruck3->startEngine();
    std::cout << "Barn current capacity after collection: " << barn3->getCurrentCapacity() << std::endl;
    
    std::cout << "\nTesting DeliveryTruck with Near-Full Barn:" << std::endl;
    deliveryTruck4->startEngine();
    std::cout << "Barn current capacity after collection: " << barn4->getCurrentCapacity() << std::endl;
    

    cout<<"========== Testing Decorator Design Patten =========="<<endl;

    FarmUnit* fertilizedField = new FertilizerDecorator(field1);
    fertilizedField->increaseProduction();
    fertilizedField->harvest();
    std::cout << "Leftover Capacity after FertilizerDecorator: " << fertilizedField->getLeftoverCapacity() << std::endl;

    // Decorate Barn with BarnDecorator
    FarmUnit* barnEnhanced = new BarnDecorator(barn1);
    barnEnhanced->increaseProduction();
    barnEnhanced->harvest();
    std::cout << "Leftover Capacity after BarnDecorator: " << barnEnhanced->getLeftoverCapacity() << std::endl;
    // Clean up dynamically allocated memory
    //delete fertilizerTruck;
    //delete deliveryTruck;
    //delete cropField1;
    //delete barn1;
    //delete drySoil;

}