#ifndef SHAPEHEADER
#define SHAPEHEADER

#include <iostream>
#include <math.h>

//#pragma once
using namespace std;

struct point
{
	double x;
	double y;
};

// Base class
class Shape {
public:
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual  ~Shape() {};
};
#endif
