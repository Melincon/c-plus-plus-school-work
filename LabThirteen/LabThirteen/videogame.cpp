#include "videogame.h"
#include <string>
#include <iostream>
using namespace std;
string videogame::getname()const
{
	return *name;
}
double videogame::getprice() const
{
	return *price;
}
int videogame::getrating() const
{
	return *rating;
}
void videogame::setname(string n)
{
	*name = n;
}
void videogame::setprice(double p)
{
	*price = p;
}
void videogame::setrating(int r)
{
	*rating = r;
}
void videogame::show() const
{
	cout << "Name: " << *name << endl <<
		"Price: " << *price << endl <<
		"Rating: " << *rating << endl << endl;
}
videogame::videogame()
{
	name = new string;
	*name = "";
	price = new double;
	*price = 0.0;
	rating = new int;
	*rating = 0;
}
videogame::videogame(string n, double p ,int r)
{
	name = new string;
	*name = n;
	price = new double;
	*price = p;
	rating = new int;
	*rating = r;
}
videogame::~videogame() 
{
	delete name;
	delete price;
	delete rating;

	cout << "Destructor is running" << endl << endl;
}
