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