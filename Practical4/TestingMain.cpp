#include "CropField.h"
#include "Barn.h"
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
}