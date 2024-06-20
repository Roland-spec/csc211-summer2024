#include <iostream>

void swap (double& a, double& b);

int main() {

    double a, b;
    std::cin >> a >> b;
    swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;

    return 0;
}

void swap (double& a, double& b){
    double temp = a;
    a = b;
    b = temp;

}