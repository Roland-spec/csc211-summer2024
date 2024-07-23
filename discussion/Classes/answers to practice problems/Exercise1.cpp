#include <iostream>
template <typename T>

T func(T val1, T val2) {
    if(val1 > val2) {
        return val1;
    } 
    return val2;
}

int main() {
    int max1 = func(11, 3); // implicit template instantiation
    double max2 = func<double>(5.72, 24.91); // explicit
    char max3 = func<char>('d', 'w'); // also explicit

    std::cout << max1 << std::endl << max2 << std::endl << max3 << std::endl;
}

