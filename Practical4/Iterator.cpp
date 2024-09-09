#include "Iterator.h"

Iterator::Iterator(std::vector<CropField*> cropFieldHeap) {
    this->cropFieldHeap = std::vector<CropField*>();
    this->currentPos = 0;

    for (CropField* cropField : cropFieldHeap) {
        this->cropFieldHeap.push_back(new CropField(cropField));
    }
}

Iterator::~Iterator() {
    while(!this->cropFieldHeap.empty()) {
        delete this->cropFieldHeap.back();
        this->cropFieldHeap.pop_back();
    }

    this->cropFieldHeap.clear();
}