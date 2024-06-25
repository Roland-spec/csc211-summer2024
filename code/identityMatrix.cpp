#include <iostream>


// n = 3
// 1 0 0
// 0 1 0
// 0 0 1

void printMatrix(int M[3][3], int n){

    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout << M[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

int main(){

    int n;

    std::cin >> n;

    int matrix[3][3];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                matrix[i][j] = 1;
            }
            else{
                matrix[i][j] = 0;
            }

        }

    }

    printMatrix(matrix, n);

    

    




    return 0;
}