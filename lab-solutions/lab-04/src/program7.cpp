#include <iostream>

void dec_to_binary(int& n);

int main() {
    int a;
    std::cin >> a;

    dec_to_binary(a);

    return 0;
}

void dec_to_binary(int& n) {
    std::string remainders;
     while(n > 0) {
        remainders += std::to_string(n%2);
        n/=2;
     }

    for(int i = remainders.length() - 1; i >= 0; i--) {
        std::cout << remainders[i];
    }
}
