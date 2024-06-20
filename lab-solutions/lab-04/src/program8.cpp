#include <iostream>

int numDigits(int& n);

int main() {

    int n = 123;

    int answer = numDigits(n);
    std::cout << answer << std::endl;

    return 0;
}

int numDigits(int& n) {

    int numDigits = 0;

    while (n > 0) {
        n /= 10;
        numDigits += 1;
   }

   return numDigits;
}