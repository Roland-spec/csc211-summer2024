#include <iostream>

//Student implemented as struct

struct Student {
    std::string name;
    std::string major;
	int studentID;
};

void buildStudent(Student &someStudent){

	std::cout << "Enter name ";

	std::cin >> someStudent.name;

	std::cout << "Enter major:  ";
	
	std::cin >> someStudent.major;

	std::cout << "enter studentID ";
	
	std::cin >> someStudent.studentID;

	std::cout << " " << std::endl;
}

void changeMajor(Student &someStudent){

	std::cout << "What would you like to change your major to? ";
	
	std::cin >> someStudent.major;
}

void printStudent(Student &someStudent){
	
	std::cout << " " << std::endl;
	std::cout << "Name = " << someStudent.name << std::endl;
	std::cout << "Major = " << someStudent.major << std::endl;
	std::cout << "StudentID = " << someStudent.studentID << std::endl;
	std::cout << " " << std::endl;
}

int main() {

	Student mike;
	Student sarah;

	buildStudent(mike);
	buildStudent(sarah);


	printStudent(mike);
	printStudent(sarah);


	changeMajor(mike);
	changeMajor(sarah);

	printStudent(mike);
	printStudent(sarah);
    
}