#include "Farm.h"

Farm::Farm(int currentCapacity, int totalCapacity) : FarmUnit(currentCapacity, totalCapacity) {
    std::vector<CropField*> cropFieldHeap = std::vector<CropField*>();
}

Farm::~Farm() {
    cropFieldHeap.clear();
}

void Farm::add(CropField* cropField) {
    if(cropField != nullptr) {
        cropFieldHeap.push_back(cropField);
        totalCapacity += cropField->getTotalCapacity();
        currentCapacity += cropField->getCurrentCapacity();
        std::sort(cropFieldHeap.begin(), cropFieldHeap.end(), [](CropField* a, CropField* b) { return a->getTotalCapacity() > b->getTotalCapacity(); });
    }
}

void Farm::remove(CropField* cropField) {
    auto it = std::find(cropFieldHeap.begin(), cropFieldHeap.end(), cropField);

    if (it != cropFieldHeap.end()) {
        cropFieldHeap.erase(it);
    } else {
        std::cout << "Error! CropField not found." << std::endl;
    }
}

CropField* Farm::getChild(int index) {
    if(index >= 0 && index < cropFieldHeap.size()) {
        return cropFieldHeap.at(index);
    } else {
        return nullptr;
    }
}

Iterator* Farm::createDFSIterator() {
    return new DFS(cropFieldHeap);
}

Iterator* Farm::createBFSIterator() {
    return new BFS(cropFieldHeap);
}

void Farm::print() {
    std::cout << "\nFarm Information:\n";

    std::cout << std::setw(20) << std::left << "Total Capacity"
              << std::setw(20) << std::left << "Current Capacity" << "\n";

    std::cout << std::setw(20) << std::left << getTotalCapacity()
              << std::setw(20) << std::left << getCurrentCapacity() << "\n";
    
    std::cout << "\nCropField Max Heap:\n";

    std::cout << "[";
    for (size_t i = 0; i < cropFieldHeap.size(); ++i) {
        std::cout << cropFieldHeap.at(i)->getTotalCapacity();
        if (i < cropFieldHeap.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}