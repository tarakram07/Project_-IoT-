
#include "Shape.h"
#pragma once
#include "Square.h"

using namespace std;

class Circle : public Shape
{
	friend class Square;
private:
	double radius;
	point center;

public:
	Circle(point XY, double radius);
	double getRadius();
	point getCenterPoint();
	void setRadius(double side);
	void setCenterPoint(point pt);
	double getArea();
	double getPerimeter();
	bool isInside(double X, double Y);
	bool fitsInsideCircle(Square square);
};