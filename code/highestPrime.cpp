#include <iostream>

bool isPrime(int n){

    for(int i = 2; i < n ; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

// intput = 12
int highestPrime(int someNumber){

    int myPrime = 0;

    for(int i = someNumber; someNumber > 1; i--){
        if(isPrime(i)){
            myPrime = i;
            break;
        }
    }

    return myPrime;

}

int main(){

    int a;
    std::cin >> a;

    std::cout << highestPrime(a);




    return 0;
}