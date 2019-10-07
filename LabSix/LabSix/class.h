#ifndef RECTANGLE
#define RECTANGLE
#include <string>
using namespace std;
class rectangle
{
private:
	double length;
	double width;
	string color;
public: 
	void print();
	void setDimension(double l, double w);
	void setColor(string s);
	double getLength() const;
	double getWidth() const;
	string getColor() const;
	double perimeter();
	double area();
	
	rectangle();
	rectangle(double l, double w, string s);

};
#endif
