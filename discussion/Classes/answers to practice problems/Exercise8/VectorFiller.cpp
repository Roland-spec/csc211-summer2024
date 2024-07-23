#include <iostream>
#include <vector>
#include "VectorFiller.h"

// Implement default constructor
VectorFiller::VectorFiller() {
    for(int i = 0; i < 10; i++) {
        values.push_back(0);
    }
}

// Implement parameterized constructor
VectorFiller::VectorFiller(int n) {
    for(int i = 0; i < 10; i++) {
        values.push_back(n);
    }
}

// Implement copy constructor
VectorFiller::VectorFiller(const VectorFiller& someObj) {
    this->values = someObj.values;
}

// Implement print method
void VectorFiller::printFunction() {
    for(int i = 0; i < 10; i++) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;
}

