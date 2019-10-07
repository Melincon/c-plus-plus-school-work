#include "class.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void rectangle::print()
{
	cout << "Length: " << getLength() << endl
		<< "Width: " << getWidth() << endl
		<< "Color: " << getColor() << endl;
}
void rectangle::setDimension(double l, double w)
{
	length = l;
	width = w;
}
void rectangle::setColor(string s)
{
	color = s;
}
double rectangle::getLength() const
{
	return length;
}
double rectangle::getWidth() const
{
	return width;
}
string rectangle::getColor() const
{
	return color;
}
double rectangle::perimeter()
{
	return 2 * (length + width);
}
double rectangle::area()
{
	return (length * width);
}
rectangle::rectangle()
{
	length = 1;
	width = 1;
	color = "white";
}
rectangle::rectangle(double l, double w, string s)
{
	length = l;
	width = w;
	color = s;
}
