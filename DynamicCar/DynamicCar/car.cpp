#include "car.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
using namespace carcl;
string car::getmanufacturer() const
{
	return manufacturer;
}
string car::getmodel() const
{
	return *model;
}
string car::getyearbuilt() const
{
	return yearbuilt;
}
double car::getmilespergallon() const
{
	return *milespergallon;
}
double car::totalcostperyearongas(double cpg)
{
	return totalmileage() * cpg;
}
double car::totalmileage()
{
	double x = 0.0;
	for (int i = 0; i < 12; i++)
		x = x + *yearlymileage[i];
	return x;
}
void car::setmanufacturer(string m)
{
	manufacturer = m;
}
void car::setmodel(string m)
{
	*model = m;
}
void car::setyearbuilt(string y)
{
	yearbuilt = y;
}
void car::setmilespergallon(double mpg)
{
	*milespergallon = mpg;
}
void car::load(string fn)
{
	ifstream indata;
	indata.open(fn);

	indata >> manufacturer >> *model >> yearbuilt >> *milespergallon;
	for (int i = 0; i < 12; i++)
		indata >> *yearlymileage[i];
	indata.close();
}
void car::store(string fn)
{
	ofstream outdata;
	outdata.open(fn);

	outdata << manufacturer << endl << *model << endl << yearbuilt << endl <<
		*milespergallon << endl;
	for (int i = 0; i < 12; i++)
		outdata << *yearlymileage[i] << endl;
	outdata.close();
}
/*void operator<<(ostream& cout, const car& thiscar)
{
	cout << "Manufacturer: " << thiscar.getmanufacturer() << endl <<
		"Model: " << thiscar.getmodel() << endl <<
		"Yearbuilt: " << thiscar.getyearbuilt() << endl <<
		"Milespergallon: " << thiscar.getmilespergallon() << endl;
	for (int i = 0; i < 12; i++)
		cout << *yearlymileage[i] << endl;
}*/
/*bool operator==(const car&) const;
{

}*/
void car::operator=(const car& other)
{
	manufacturer = other.getmanufacturer();
	*model = other.getmodel();
	yearbuilt = other.getyearbuilt();
	*milespergallon = other.getmilespergallon();
	for (int i = 0; i < 12; i++)
		yearlymileage[i] = other.yearlymileage[i];
}
car::car()
{
	cout << "Constructer is running." << endl << endl;
	manufacturer = " ";
	model = NULL;
	model = new string;
	yearbuilt = " ";
	milespergallon = NULL;
	milespergallon = new double;
	cout << "Constructor is about to fill the array." << endl
		<< endl;
	for (int i = 0; i < 12; i++)
		*yearlymileage[i] = 00.00;
	cout << "Constructer has finished running." << endl << endl;
}
car::car(const car& other)
{
	manufacturer = other.getmanufacturer();
	*model = other.getmodel();
	yearbuilt = other.getyearbuilt();
	*milespergallon = other.getmilespergallon();
	for (int i = 0; i < 12; i++)
		yearlymileage[i] = other.yearlymileage[i];
}
car::~car()
{
	delete model;
	delete milespergallon;
	delete[] yearlymileage;
}
