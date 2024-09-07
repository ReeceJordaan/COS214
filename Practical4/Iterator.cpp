#include "Iterator.h"

Iterator::Iterator(std::vector<CropField*> cropFieldHeap) {
    this->cropFieldHeap = std::vector<CropField*>();
    int currentPos = 0;

    for (CropField* cropField : cropFieldHeap) {
        this->cropFieldHeap.push_back(new CropField(cropField));
    }
}

Iterator::~Iterator() {
    while(!cropFieldHeap.empty()) {
        delete cropFieldHeap.back();
        cropFieldHeap.pop_back();
    }

    cropFieldHeap.clear();
}