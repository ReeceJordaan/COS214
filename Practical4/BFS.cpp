#include "BFS.h"

BFS::BFS(std::vector<CropField*> cropFieldHeap) : Iterator(cropFieldHeap) {

}

BFS::~BFS() {

}

CropField* BFS::firstFarm() {
    if(!cropFieldHeap.empty()) {
        return cropFieldHeap.at(0);
    } else {
        return nullptr;
    }
}

void BFS::next() {
    currentPos++;
}

bool BFS::isDone() const {
    if(currentPos >= cropFieldHeap.size()) {
        return true;
    } else {
        return false;
    }
}

CropField* BFS::currentFarm() {
    if(!isDone()) {
        return breadthFirstSearch(0).at(currentPos);
    } else {
        return nullptr;
    }
}

std::vector<CropField*> BFS::breadthFirstSearch(int index) {
    std::vector<CropField*> arr;
    std::queue<int> queue;

    // Start by pushing the root node (index) into the queue
    queue.push(index);

    while (!queue.empty()) {
        int current = queue.front();  // Get the current node index
        queue.pop();                  // Remove it from the queue

        // Add the current node to the arr vector
        arr.push_back(cropFieldHeap[current]);

        // Enqueue the left child if it exists
        if ((2 * current) + 1 < cropFieldHeap.size()) {
            queue.push((2 * current) + 1);
        }

        // Enqueue the right child if it exists
        if ((2 * current) + 2 < cropFieldHeap.size()) {
            queue.push((2 * current) + 2);
        }
    }

    return arr;
}