
#include "Shape.h"
#pragma once
#include "Circle.h"

using namespace std;

class Square : public Shape
{
	friend class Circle;
private:
	double sideLength;
	point center;

public:
	Square(point XY, double side);
	double getSideLength();
	point getCenterPoint();
	void setSideLength(double side);
	void setCenterPoint(point pt);
	double getArea();
	double getPerimeter();
	bool isInside(double X, double Y);
	bool fitsInsideSquare(Circle circle);
};




