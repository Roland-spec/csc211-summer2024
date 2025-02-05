# Lab 09: Classes

Welcome to CSC 211 Lab 09. Your goal for this lab will be to gain a better understanding of classes. **Be sure to read and follow all instructions unless otherwise specified.**  Create a `lab-09.txt` document to record all of your lab answers in and implement all of your `.cpp` programs in your IDE.

## 0. IDEA Course Feedback

The IDEA student feedback period is now open for students.

Please visit [https://uri.campuslabs.com/eval-home/](https://uri.campuslabs.com/eval-home/) to complete the IDEAs. You have received an email with instructions requesting they complete course feedback. They will continue to receive email reminders throughout the feedback period.

# 1. Class Overview [30 mins]

Up until now we have been solving problems from a data-focused perspective. That is, we model a problem in terms of the raw data presented and manipulate that data directly to solve the problem at hand. 

Object-Oriented Programming is all about solving a problem by creating accurate abstract representations of real-world phenomena, and having those abstractions interact with each other to produce a solution. Classes are the primary tool that allows us to model these abstractions. Anything that you can interact with in the real world can be abstracted and modeled as a class. Once done, the Object-Oriented Programming language we are in will allow us to instantiate (create an instance of) this modeled abstraction as an object via its **constructor** for use in interacting with other objects.

C++ splits the declaration of a Class into two files: the header file (.h, for declarations) and the source file (.cpp, for definitions.) In the following example, we **declare** a "Point" Class, and the Constructor used to create an object from this Class.



<img src="images/comp.png ">

#### 1.1 What is a Class?

To understand what a class is, perhaps we can start with a technical definition, a very non-technical definition, and then meet somewhere in the middle.

*Technical definition:*

A class is a programming language construct used to encapsulate both data and functionality, and is designed to represent a single, well-defined concept. An object is an instantiation of a class.

*Very non-technical definition:*

A class is blueprint for a thing that has certain qualities and can do certain things. 
An object is one of the things that comes from a blueprint.
Much like a human is an abstract blueprint (class), you yourself are a specific instantiation (object) of a human. 

# 2. Exercises 

#### 2.0 A point class

:white_check_mark: Question 1: Write a class that creates Cartesian coordinates in a 3D space (x, y, z). Below are the class member variables and methods you need to implement.
```c++
int x;
int y;
int z;

//Constructs a point object with X, Y, Z properties
Point(int someX, int someY, int someZ);

//Sets the X, Y, and Z properties of a point Object
void setX(int someX);
void setY(int someY);
void setZ(int someZ);

//Gets the X, Y, and Z properties from a point Object
int getX();
int getY();
int getZ();

//Returns a cartesian coordinate representation of a point Object
// aka = (x,y,z)
std::string toCord();

//Calculates the Euclidean Distance of two points
double euDistance (Point p2);

```
Your point class should work with the main function below.

```c++
#include <iostream>
#include "Point.h"

//No need to touch the main.cpp file. However - if might be helpfull
//to look at how I'm using your soon-to-be defined Point.cpp class

int main(){

    Point myPt(10, 5, 8);
    Point myPt2(3, 10, 15);

    int myX = myPt.getX();

    std::cout << myX << std::endl;

    std::cout << myPt.toCord() << std::endl;

    myPt.setX(3);

    std::cout << myPt.toCord() << std::endl;

    std::cout << myPt.euDistance(myPt2) << std::endl;

return 0;
}

```

A formal definition for Euclidean distance can be found below:

The Euclidean distance between points p and q is the length of the <a src="https://en.wikipedia.org/wiki/Line_segment"> line segment </a> connecting them (qp).

In Cartesian coordinates, if p = (p1, p2,..., pn) and q = (p1, q2,..., qn) are two points in Euclidean n-space, then the distance (d) from p to q, or from q to p is given by the Pythagorean formula:

<img src="images/distance.png">


#### 2.1 A car class

:white_check_mark: Question 2: Write a 'car' class that creates car objects with the below properties and make 3 different car objects initialized with different properties.

```c++
std::string make;
std::string model;
std::string color;
int year;
double mileage;


//Constructs a car object
Car(std::string make, std::string model, std::string color, int year);

//Setters for objects of type car
void setMake(std::string someMake);
void setModel(std::string someModel);
void setColor(std::string someColor);
void setYear(int someYear);
void setMileage(double someMileage);

//Getters for objects of type car
std::string getMake();
std::string getModel();
std::string getColor();
int getYear();
double getMileage();

//Prints all member variables to console
void printDetails();
```

#### 2.2 Headers and Source Files

Just to get a bit of technical information out of the way, if you have ever worked with classes before, or even looked into any C++ repository, you will likely have seen `.h` or `.hpp` files.
These are called *header files*, the presence of which often signifies that classes are being used. 
This is because header files tend to contain declarations for an associated *source file*, a `.cc` or `.cpp` file, which contains method implementations. 
Thus, if you look into this lab's starter code, you'll see a `mystring.hpp` and a `mystring.cpp`, which will respectively contain the declarations and implementations for today's class.

#### 2.3 Defining a Class

As stated in the previous section, a class is almost always defined separately from being implemented. 
This is so that we can tell at a glance what a class is and what it is supposed to do, without having to worry about all the details of how it does the things that it does (how its methods are implemented). 
Part of the definition for the `MyString` class from the starter code is as follows:

```c++
    class MyString {
        private:
	    // declare all your data members here
	    
        public:
            // constructors and destructor
            MyString();
            MyString(const char *);
            ~MyString();

            // other functions
            unsigned int len();

            void set(int, char);
            char get(int);
            void del(int);
            const char *substr(int, int);
    }
```
The `private` and `public` keywords are used to define the *scope* of every data member and method. 
Private data members and methods can only be accessed within the class' own methods, whereas public data members and methods can be accessed in any part of the program where an object of that class exists. 
Rules for designing your classes:

1. Nearly all data members (variables in particular) should be private, since you want your class to have full control over its own properties, without interference from other parts of the program. However, if you have a data member that is constant, you may consider making it public.
2. Methods are the ways by which a class interacts with the "outside world", so a class will likely have many methods, and if you aren't sure whether a method should be public or private, public is the more likely answer. However, if you have any sort of helper method, especially one that shouldn't ever need to be called in some other part of the program, it should be made private.
3. Constructors and the destructor will always be public, as you'll shortly see why.

Constructors and destructors are an integral part of every class definition, and every class will have at least one constructor and one destructor (which may be implicit). 
When a constructor has no parameters, it is called the *default constructor*; **every class is required to have at least one constructor**.

An object may be destroyed when the function call in which an object was created returns, or an object created dynamically is deallocated explicitly via *delete*. 
The purpose of a destructor is to deallocate *all data* that was dynamically allocated by the object.
If a class doesn't use any dynamically allocated memory, the destructor does not need to be explicitly defined; c++ will provide a default "do-nothing" destructor.

#### 2.4 Implementing Class Methods

Implementing class methods is a fairly straight-forward process.
Once the header file has been created, and all relevant methods declared, all you need to do is import that header into a `.cpp` source file and start writing.

The most important is that all methods must be properly scoped.

For example, using the *get()* method declaration above, when you go to implement this method you must specify that the function you are defining is in fact a method of the `MyString` class, like so:

```c++
char MyString::get(int idx) {
  //Placeholder return
  return ' ';
}
```

#### 2.5 Creating and Using Objects

Classes are created using their constructors, and they can be used much like any STL object you may have encountered.

Pretending the functions listed in 1.3 are implemented, the following code would create a MyString object that holds the string "Hello", then prints 'l', the letter at index 3.

For example:

```c++

int main(void) {
    MyString string_object("Hello");

    std::cout << string_object.get(3) << std::endl;
    return 0;
}
```

### 2.6 Dynamic Memory

Unlike memory on the stack, which is allocated and deallocated automatically as your program operates, dynamic memory exists on the *heap* and is completely controlled by the developer. 
To dynamically allocate memory you must explicitly use the `new` operator and store the result into a pointer. 

```c++
  int* a = new int;
  
  // Do some work with **a**

  // Without this line, the memory allocated for **a** would never be released, and we would have a memory leak.
  delete a;
```

Likewise, when you are done with this variable, you must call `delete`, otherwise the program will suffer from memory leaks, where memory is never deallocated.

### 2.7 Operator Overloading

Operator overloading allows us to take some of the operators we've come to know and define specific functionality for these operators with respect to our custom designed classes. Take the following simple class to represent a fraction in C++:

```c++
// FRACTION.H

class Fraction {
    private:
        int num, denom;

    public:
        // Constructors
        Fraction();
        Fraction(const int some_num, const int some_denom);
        Fraction(const Fraction &f2);
        ~Fraction();

        // Setters
        int get_num();
        int get_denom();

        // Getters
        void set_num(const int some_val);
        void set_denom(const int some_val);
        
        // Methods
        Fraction mult(const Fraction &f2) const;
};
```

With the following implementation(excluding constructors, setters, and getters as those should be trivial by now):

```c++
// FRACTION.CPP

Fraction Fraction::mult(Fraction f2) {
    Fraction out; // Use default constructor
    
    out.set_num(num * f2.get_num());
    out.set_denom(denom * f2.get_denom());

    return out;
}

```

We would like to have a method to perform multiplication on two fractions, but in order to call this we need to have a line like `Fraction new_frac = fraction1.mult(fraction2);`. Multiplication is commonly represented with a `'*'` character so we would like to be able to do the same with our fraction class. C++ allows us to do this with special functions to overload regular operators like `'*'` to define how they should handle classes. This is accomplished by adding the following to the header file:

```c++
Fraction operator* (const Fraction &f2) const;
```

Then defining this new functionality in the source file:

```c++
Fraction Fraction::operator* (const Fraction &f2) const{
    return this->mult(f2);
}
```

Now we are free to say some thing like `Fraction new_frac = fraction1 * fraction2;` in a file that uses our fraction class. It should be mentioned that most operators in C++ can be overwritten for a class, but that they should be used sparingly, more specifically in places like this where a math operator makes sense since we are modelling a real world mathematical concept, where multiplication is totally legal. 

## 3. The Starter Code

```c++
    class MyString {
        private:
	    // Declare all your data members here
	    
        public:
            // Default constructor; Should store an empty string.
            MyString();
            
            // Copy constructor; Copy the contents of the input string into the class's data member.
            MyString(const char *);
            
            // Destructor; Should deallocate any dynamically allocated memory that the class uses.
            ~MyString();

            // Returns the length of string. This is the number of characters in the string, 
            // excluding the null terminator.
            unsigned int len();

            // Sets the character at the given index to the character provided
            void set(int, char);
            
            // Returns the character at the given index.
            char get(int);
            
            // Returns a pointer to a character array of the object's string.
            const char *c_str();
            
            // Reverse the string. "hello" should turn into "olleh". 
            // If you would like a challenge try to do it in-place (cannot create another array).
            void reverse();
            
            // Find the first occurrence of this character, and return the index. 
            // Return `-1` if it can't be found.
            int find_first(char);
            
            // Find the first occurrence of the input string. 
            // Return the index of the starting character. 
            // Return the `-1` if it can't be found.
            int find_first(const char *);
            
            // Find the last occurrence of this character, and return the index. 
            // Return the `-1` if it can't be found.
            int find_last(char);
            
            // Find the last occurrence of the input string. 
            // Return the index of the starting character. 
            // Return the `-1` if it can't be found.
            int find_last(const char *);
            
            // Return true if the str stored is equivalent to the given string
            // Return false if they are not the same
            bool compare(const char *);
            
            // Append a single character onto the end of the string.
            void append(char);
            
            // Concatenate the input string to the object's string.
            void append(const char *);
        
            //Overload the '[]' operator to fuction as we expect
            // Ex. MyString("Hello")[2] == 'l'
            char operator[](const unsigned int index) const;
        
            // Overload the '+' operator to concatenate two strings together
            MyString operator+(const MyString str2) const;
            
            // Overload the '*' operator to return the string concatenated on itself x times
            // Ex. "Hello" * 3 == "HelloHelloHello"
            MyString operator*(const int x) const;
    }
```

## 3. Exercises

:white_check_mark: 1. Think about the data members this class needs, and implement them. Use the description of the class to infer what you need.

:white_check_mark: 2. Implement all functions declared in the header file for the `MyString` class.

Hint: You can start by writing any function you want, but remember what we discussed in class:
- Test as you go! When you finish a function, write a quick test case to make sure it does what you're expecting it to do!
- Write the functions in an order that allows you to test them as you go. This will require you to identify dependencies, an important tool to develop.
