#include "CropField.h"
#include "Farm.h"

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

    field1.buildBarn();
    field1.buildBarn();
    field1.buildBarn();
    field1.buildBarn();

    field1.print();
    field5.print();
    std::cout << std::endl;

    std::cout << "========== Testing Farm ==========\n" << std::endl;

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

    std::cout << "========== Testing Iterators ==========\n" << std::endl;

    Iterator* dfs = farm.createDFSIterator();
    dfs->firstFarm()->print();
    std::cout << std::endl;
    
    while(!dfs->isDone()) {
        dfs->currentFarm()->print();
        dfs->next();
    }
    std::cout << std::endl;

    Iterator* bfs = farm.createBFSIterator();
    bfs->firstFarm()->print();
    std::cout << std::endl;
    
    while(!bfs->isDone()) {
        bfs->currentFarm()->print();
        bfs->next();
    }
    std::cout << std::endl;

    farm.remove(&field3);
    farm.remove(&field6);

    farm.print();
    std::cout << std::endl;

    dfs = farm.createDFSIterator();
    dfs->firstFarm()->print();
    std::cout << std::endl;
    
    while(!dfs->isDone()) {
        dfs->currentFarm()->print();
        dfs->next();
    }
    std::cout << std::endl;

    bfs = farm.createBFSIterator();
    bfs->firstFarm()->print();
    std::cout << std::endl;
    
    while(!bfs->isDone()) {
        bfs->currentFarm()->print();
        bfs->next();
    }
    std::cout << std::endl;
}