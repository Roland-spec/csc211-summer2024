// Write a single for loop to print the average of the first 25 multiples of 3

#include <iostream>

int main(){

    int sum = 0;

    for(int i = 3; i <= 75; i+=3){

        sum += i;

    }

    std::cout << (sum / 25);



    return 0;
}