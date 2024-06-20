#include <iostream>

void product(int& x, int& y, int& result);

int main(){
    int a = 3;
    int b = 3;
    int result;
    product(a, b, result);
    std::cout << result << std::endl;

    return 0;
}

void product(int& x, int& y, int& result){
     result = x * y;
}