#include <iostream>
#include <string>

void EvenOrOdd (int& num, std::string& str);

int main(){
    int num;
    std::string str;
    std::cin >> num;
    
    EvenOrOdd(num, str);
    
    std::cout << str << std::endl;

    return 0;
}

void EvenOrOdd (int& num, std::string& str){
    if(num % 2 == 0) {
        str = "Even";
    } else {
        str = "Odd";
    }
}