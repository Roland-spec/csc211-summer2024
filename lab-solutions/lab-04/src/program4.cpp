#include <iostream>

void modifyValue(int& ref);

int main() {
    int num = 5;

    std::cout << "Initial number: " << num << std::endl;

    modifyValue(num);

    std::cout << "Modified number: " << num << std::endl;

    return 0;
}

void modifyValue(int& ref) {
    ref += 10;
}