#include <iostream>
#include <string>

class Animal {
    private:
        std::string name;
        int age;
        std::string type;
        bool isPet;

    public:
        void setName(std::string userName);
        void setAge(int userAge);
        void setType(std::string userType);
        void setisPet(bool userInput);


        std::string getName();
        int getAge();
        std::string getType();
        bool getisPet();
};

void Animal::setName(std::string userName) {
    this->name = userName;

    // the below line also works, as long as the 
    // parameter variable is not "name"
    name = userName;
}

void Animal::setAge(int userAge) {
    this->age = userAge;
}

void Animal::setType(std::string userType) {
    this->type = userType;
}

void Animal::setisPet(bool userInput) {
    this->isPet = userInput;
}

std::string Animal::getName() {
    // either line works
    return this->name;
    return name;
}
int Animal::getAge() {
    return this->age;
}

std::string Animal::getType() {
    return this->type;
}

bool Animal::getisPet() {
    return this->isPet;
}

int main() {
    Animal obj1, obj2;

    obj1.setName("Whiskers");
    obj2.setName("Buddy");

    obj1.setAge(3);
    obj2.setAge(5);

    obj1.setType("Cat");
    obj2.setType("Dog");

    obj1.setisPet(true);
    obj2.setisPet(true);

    std::cout << obj1.getName() << " " << obj1.getAge() << " " << obj1.getType() << " " << std::boolalpha << obj1.getisPet() << std::endl;
    std::cout << obj2.getName() << " " << obj2.getAge() << " " << obj2.getType() << " " << obj2.getisPet() << std::endl;
}

