
#include <iostream>
#include <math.h>
#include "Square.h"

using namespace std;

double Square::getSideLength()
{
	return this->sideLength;
}
void Square::setSideLength(double side) {
	if (side <= 0)
	{
		cerr << "lenght cannot be a negative or zero value" << endl;
		return;
	}
	else
	{
		this->sideLength = side;
	}
}
point Square::getCenterPoint()
{
	return this->center;
}

void Square::setCenterPoint(point pt) {
	this->center = pt;
}
Square::Square(point pt, double side)
{
	this->setSideLength(side);
	this->center = pt;
}

/* Function to find the area of a Square
   Function returns area of Square
*/
double Square::getArea()
{
	return (this->sideLength*this->sideLength);
}
/* Function to find the Perimeter of a Square
   Function returns Perimeter of Square
*/
double Square::getPerimeter()
{
	return (4 * this->sideLength);
}
/* Function to find if the given co-ordinates are inside the Square
   Function takes co-ordinates as arguments and return bool value
*/
bool Square::isInside(double X, double Y)
{
	double distance = sqrt(((X - center.x)*(X - center.x)) +
		((Y - center.y)*(Y - center.y)));
	double diagonalLenth = sqrt(2) * sideLength;
	if (distance <= (diagonalLenth / 2))
	{
		return true;
	}
	else
	{
		return false;
	}

}
/* Function to find if the given square is inside the Square
   Function takes Square onbject as argument and returns bool value
*/
bool Square::fitsInsideSquare(Circle circle)
{
	//bool isCircleCenterInsideSquare = this->isInside(circle.getCenterPoint().x, circle.getCenterPoint().y);
	//if (isCircleCenterInsideSquare) {
	if (circle.getRadius() <= (this->getSideLength() / 2))
	{
		cout << " circle fits inside square" << endl;
		return true;
	}
	else
	{
		cout << " circle  does not fits inside square " << endl;
		return false;
	}
	//}
}





