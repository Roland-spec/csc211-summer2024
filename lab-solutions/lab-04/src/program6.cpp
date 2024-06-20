#include <iostream>

long int func(int& a, int& b, int& c);

int main(){
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout << func(a, b, c);

    return 0;
}

long int func(int& a, int& b, int& c) {
    long int sum = 0;
    long int prod = 1;

    if(a % 2 == 0) {
        for(int i = b; i <= c; i++){
            sum += i;
        }
        return sum;
    } else {
        for(int i = b; i <= c; i++){
            prod *= i;
        }
        return prod;
    }
}