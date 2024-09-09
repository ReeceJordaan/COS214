#include "DFS.h"

DFS::DFS(std::vector<CropField*> cropFieldHeap) : Iterator(cropFieldHeap) {

}

DFS::~DFS() {

}

CropField* DFS::firstFarm() {
    if(!this->cropFieldHeap.empty()) {
        int index = 0;

        while((2 * index) + 1 < this->cropFieldHeap.size()) {
            index = (2 * index) + 1;
        }

        return this->cropFieldHeap.at(index);
    } else {
        return nullptr;
    }
}

void DFS::next() {
    this->currentPos++;
}

bool DFS::isDone() const {
    if(this->currentPos >= this->cropFieldHeap.size()) {
        return true;
    } else {
        return false;
    }
}

CropField* DFS::currentFarm() {
    if(!isDone()) {
        return depthFirstSearch(0).at(this->currentPos);
    } else {
        return nullptr;
    }
}

std::vector<CropField*> DFS::depthFirstSearch(int index) {
    std::vector<CropField*> arr = std::vector<CropField*>();

    if((2 * index) + 1 < cropFieldHeap.size()) { // has left child
        std::vector<CropField*> temp = depthFirstSearch((2 * index) + 1);
        arr.insert(arr.end(), temp.begin(), temp.end());
    }

    if ((2 * index) + 2 < cropFieldHeap.size()) { // has right child
        std::vector<CropField*> temp = depthFirstSearch((2 * index) + 2);
        arr.insert(arr.end(), temp.begin(), temp.end());
    }

    arr.push_back(cropFieldHeap.at(index)); // add curr

    return arr;
}