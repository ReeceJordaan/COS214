#ifndef LEAFOPERATIONEXCEPTION_H
#define LEAFOPERATIONEXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class LeafOperationException : public exception {
public:
    LeafOperationException(const string& message);
    virtual const char* what() const noexcept;

private:
    string message_;
};

#endif
