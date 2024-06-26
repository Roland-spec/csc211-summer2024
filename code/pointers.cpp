#include <iostream>

int main(){

    int temp = 10;
    int value = 100;
    int *p1, *p2;

    p1 = &temp;
    *p1 += 10;

    p2 = &value;
    *p2 += 5;

    p2 = p1;
    *p2 += 5;

    std::cout << temp << std::endl;
    std::cout << value << std::endl;

    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << *(&temp) << std::endl;

    
    return 0;
}
