#include <math.h>
#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(){
    this->x = 0;
    this->y = 0;
    this->z = 0;
};

Point::Point(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
}

Point& Point::operator=(const Point &obj) {
    // always check against self-assignment
    // especially when performing deep copies
    if (this != &obj) {
        this->x = obj.x;
        this->y = obj.y;
    }
    // always return *this, necessary for 
    // cascade assignments (a = b = c)
    return *this;
}

void Point::setX(int newX){
    this->x = newX;
}

void Point::setY(int newY){
    this->y = newY;
}
void Point::setZ(int newZ){
    this->z = newZ;
}

int Point::getX(){
    return this->x;
}

int Point::getY(){
    return this->y;
}

int Point::getZ(){
    return this->z;
}

string Point::toCord(){

    string outCord = "(" 
    + to_string(this->x) 
    + "," + to_string(this->y) 
    + "," + to_string(this->z) 
    +  ")";

    return outCord;
}
