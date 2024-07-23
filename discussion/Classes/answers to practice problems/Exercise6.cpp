#include <iostream>
#include <vector>

class VectorFiller {

    private:
        std::vector<int> values;
    
    public:
        // declare default constructor
        VectorFiller();
        // declare parameterized constructor
        VectorFiller(int n);
        //declare print method
        void printFunction();
};

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

// Implement print method
void VectorFiller::printFunction() {
    for(int i = 0; i < 10; i++) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Declare object vf1. Default constructor automatically gets called
    VectorFiller vf1;

    // Declare object vf2. Parameterized constructor automatically gets called
    VectorFiller vf2(-1);

    // Call print funtion on both objects
    vf1.printFunction();
    vf2.printFunction();
}