#ifndef RECTANGLE
#define RECTANGLE
class Rectangle
{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	
	Rectangle();
	Rectangle(double, double);
};
#endif
