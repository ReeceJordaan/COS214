#include "BFS.h"

BFS::BFS(std::vector<CropField*> cropFieldHeap) : Iterator(cropFieldHeap) {

}

BFS::~BFS() {

}

CropField* BFS::firstFarm() {
    if(!this->cropFieldHeap.empty()) {
        return this->cropFieldHeap.at(0);
    } else {
        return nullptr;
    }
}

void BFS::next() {
    this->currentPos++;
}

bool BFS::isDone() const {
    if(this->currentPos >= this->cropFieldHeap.size()) {
        return true;
    } else {
        return false;
    }
}

CropField* BFS::currentFarm() {
    if(!isDone()) {
        return cropFieldHeap.at(this->currentPos);
    } else {
        return nullptr;
    }
}