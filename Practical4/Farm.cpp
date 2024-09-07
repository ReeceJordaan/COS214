#include "Farm.h"

Farm::Farm(int currentCapacity, int totalCapacity) : FarmUnit(currentCapacity, totalCapacity) {
    std::vector<CropField*> cropFieldHeap = std::vector<CropField*>();
}

Farm::~Farm() {
    while(!cropFieldHeap.empty()) {
        delete cropFieldHeap.back();
        cropFieldHeap.pop_back();
    }

    cropFieldHeap.clear();
}

void Farm::add(CropField* cropField) {
    if(cropField != nullptr) {
        cropFieldHeap.push_back(new CropField(cropField));
        //std::sort(cropFieldHeap.begin(), cropFieldHeap.end(), std::greater<int>());
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

Iterator* Farm::createDFSIterator(std::vector<CropField*> cropFieldHeap) {
    return new DFS(cropFieldHeap);
}

Iterator* Farm::createBFSIterator(std::vector<CropField*> cropFieldHeap) {
    return new BFS(cropFieldHeap);
}

int Farm::getCurrentCapacity() const {
    return currentCapacity;
}

void Farm::setCurrentCapacity(int currentCapacity) {
    this->currentCapacity = currentCapacity;
}

int Farm::getTotalCapacity() const {
    return totalCapacity;
}

void Farm::setTotalCapacity(int totalCapacity) {
    this->totalCapacity = totalCapacity;
}