
#include <iostream>
#include <math.h>
#include "Circle.h"

using namespace std;
double Circle::getRadius()
{
	return this->radius;
}
void Circle::setRadius(double radius) {
	if (radius <= 0)
	{
		cerr << "radius cannot be a negative or zero value" << endl;
		return;
	}
	else
	{
		this->radius = radius;
	}
}
point Circle::getCenterPoint()
{
	return this->center;
}

void Circle::setCenterPoint(point pt) {
	this->center = pt;
}
Circle::Circle(point pt, double radius)
{
	this->center = pt;
	this->setRadius(radius);
}
/* Function to find the area of a circle
   Function returns area of circle
*/
double Circle::getArea()
{
	return (3.14 * this->radius*this->radius);// area of circle = pi*r*r
}
/* Function to find the Perimeter of a circle
   Function returns Perimeter of circle
*/
double Circle::getPerimeter()
{
	return (6.2831 * this->radius);// perimeter of circle is 2*pi*r (2*pi = 6.2831)
}
/* Function to find if the given co-ordinates are inside the circle
   Function takes  co-ordinates as arguments and return bool value
*/
bool Circle::isInside(double X, double Y)
{
	double distance = sqrt(((X - center.x)*(X - center.x)) +
		((Y - center.y)*(Y - center.y)));
	if (distance <= radius)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/* Function to find if the given square is inside the circle
   Function takes square onbject as argument and returns bool value
*/
bool Circle::fitsInsideCircle(Square square)
{
	//bool isSquareCenterInsideCircle = this->isInside(square.center.x, square.center.y);
	double diagonalLenth = 1.414 * square.getSideLength();
	//if (isSquareCenterInsideCircle) {
	if ((diagonalLenth / 2) <= this->getRadius())
	{
		cout << "Square fits inside circle" << endl;
		return true;
	}
	else
	{
		cout << "Square does not fits inside circle" << endl;
		return false;
	}
	//}
}

//distance between centers


