
#include "Circle.h"
#include <iostream>
using namespace std;
int * sieve(int n);
int  main()
{
	point pt;
	pt.x = 4;
	pt.y = 4;
	Square square(pt, 3.577);
	Circle circle(pt, 5);

	cout << "Area of square :" << square.getArea() << endl;
	cout << "Perimeter of square :" << square.getPerimeter() << endl;
	cout << "Is inside square " << square.isInside(17, 27) << endl;
	cout << "Fits inside square " << square.fitsInsideSquare(circle) << endl;

	cout << "Area of the circle :" << circle.getArea() << endl;
	cout << "Perimeter of the circle :" << circle.getPerimeter() << endl;
	cout << "Is inside circle " << circle.isInside(17, 27) << endl;
	cout << "Fits inside circle " << circle.fitsInsideCircle(square) << endl;
	return 0;
}

/*
int  main(int argc, char *argv[])
{
	cout << "********************************" << endl;
	int number = 90;
	int *prime;
	prime = sieve(number);
	return 0;
}
*/