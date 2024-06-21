// Write a function that receives an array of integers and reverses the contents of the array

#include <iostream>


// a = {1, 2, 3, 4, 5}

void reverseArr( int a[], int n){
    int temp;
    int tail = n - 1;

    for(int i = 0; i < n/2; i++){
        temp = a[i];
        a[i] = a[tail - i];
        a[tail - i] = temp;
    }


}

int main(){

    int arr[5] = {1,2,3,4,5};

    reverseArr(arr, 5);

    for(int i = 0 ; i < 5; i++){
        std::cout << arr[i];
    }

    return 0;
}