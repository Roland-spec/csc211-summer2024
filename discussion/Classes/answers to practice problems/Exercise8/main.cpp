#include "VectorFiller.h"

int main() {
    // Declare object vf3. Default constructor automatically gets called
    VectorFiller vf3;

    // Declare object vf4. Copy constructor automatically gets called
    VectorFiller vf4 = vf3;

    vf4.printFunction();
}