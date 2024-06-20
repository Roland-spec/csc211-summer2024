#include <iostream>

int reverseInt(int n);

int main(){
    
    int result = reverseInt(1234);
    std::cout << result << std::endl;

    return 0;
}

int reverseInt(int n){

    int reversedNum = 0;

    while(n > 0) {
        reversedNum = reversedNum * 10 + n % 10;
        n /= 10;
    }

    return reversedNum;
}