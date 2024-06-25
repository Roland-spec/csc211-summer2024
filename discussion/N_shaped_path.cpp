#include <iostream>
#include <vector>

void func(char myGrid[][7], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            std::cout << myGrid[i][j] << " ";
            //std::cout << i << "," << j << " ";
        }
        std::cout << std::endl;
    }
}


int main() {
    char myGrid[7][7];

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            myGrid[i][j] = '.';
        }
    }
    func(myGrid, 7, 7);

    for(int i = 0, j = 0; i < 7; i++) {
        myGrid[i][j] = '*';
    }

    std::cout << std::endl;

    func(myGrid, 7, 7);

     for(int i = 0, j = 0; i < 7 && j < 7; i++, j++) {
        myGrid[i][j] = '*';
    }

     std::cout << std::endl;

    func(myGrid, 7, 7);

    for(int i = 0, j = 6; i < 7; i++) {
        myGrid[i][j] = '*';
    }

    std::cout << std::endl;

    func(myGrid, 7, 7);


}