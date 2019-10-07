#include <iostream>
#include "class.h"
using namespace std;
int main()
{
	Rectangle box;
	double rectWidth;
	double rectLength;

	cout << "This program will calculate the area of a "
		<< "rectangle. \nWhat is the width? ";
	cin >> rectWidth;
	cout << "What is the length? ";
	cin >> rectLength;

	Rectangle::Rectangle(rectLength, rectWidth);
	
	/*box.setWidth(rectWidth);
	box.setLength(rectLength);*/

	cout << "Here is the rectangle's data:\n"
		<< "Width: " << box.getWidth() << endl
		<< "Length: " << box.getLength() << endl
		<< "Area: " << box.getArea() << endl;
	return 0;

}