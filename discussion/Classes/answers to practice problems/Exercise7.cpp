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
        //declare copy constructor
        VectorFiller(const VectorFiller& someObj);
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

int main() {
    // Declare object vf3. Default constructor automatically gets called
    VectorFiller vf3;

    // Declare object vf4. Copy constructor automatically gets called
    VectorFiller vf4 = vf3;

    vf4.printFunction();
}