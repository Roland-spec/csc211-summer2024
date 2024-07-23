#include <iostream>
#include <string>

class Product {
    public:
        std::string productID;
        std::string name;
        double price;
};

int main() {
    Product p1;
    Product p2;

    p1.productID = "P001";
    p1.name = "iPad";
    p1.price = 849.99;

    p2.productID = "P003";
    p2.name = "Electric Kettle";
    p2.price = 24.99;

    std::cout << p1.productID << " " << p1.name << " " << p1.price << std::endl;
    std::cout << p2.productID << " " << p2.name << " " << p2.price << std::endl;
}