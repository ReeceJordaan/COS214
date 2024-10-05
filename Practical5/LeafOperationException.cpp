#include "LeafOperationException.h"
#include <iostream>
using namespace std;

LeafOperationException::LeafOperationException(const string& message){
    message_ = message; 
}

const char* LeafOperationException::what() const noexcept {
    return message_.c_str();
}
