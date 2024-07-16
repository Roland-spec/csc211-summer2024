#include <iostream>

#ifndef Point_h
#define Point_h


class Point{

private:

int x;
int y;
int z;

public:

Point();

Point(int x, int y, int z);
Point2D& Point2D::operator=(const Point2D &obj);

void setX(int newX);

void setY(int newY);

void setZ(int newZ);

int getX();

int getY();

int getZ();

std::string toCord();

};

#endif