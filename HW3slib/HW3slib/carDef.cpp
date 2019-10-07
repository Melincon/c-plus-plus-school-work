#include <string>
#include <iostream>
#include <fstream>
#include "carClass.h"
using namespace std;
void car::setmanufacturer(string m)
{
	manufacturer = m;
}
void car::setmodel(string n)
{
	model = n;
}
void car::setyear(string y)
{
	yearbuilt = y;
}
void car::setmpg(double i)
{
	mpg = i;
}
string car::getmanufacturer() const
{
	return manufacturer;
}
string car::getmodel() const
{
	return model;
}
string car::getyear() const
{
	return yearbuilt;
}
double car::getmpg() const
{
	return mpg;
}
double car::totalgascost(double g)
{
	return g * totalmileage();
}
double car::totalmileage()
{
	double tm = 0;

	for (int i = 0; i < 12; i++)
		tm = tm + yearlymileage[i];

	return tm;
}
void car::load(string fi)
{
	ifstream indata;

	indata.open(fi);

	indata >> manufacturer >> model >> yearbuilt >> mpg;
	for (int i = 0; i < 12; i++)
		indata >> yearlymileage[i];

	indata.close();
}
void car::store(string fo)
{
	ofstream outdata;

	outdata.open(fo);

	outdata << manufacturer << " " << model << " " <<
		yearbuilt << " " << mpg << " ";
	for (int i = 0; i < 12; i++, '\n')
		outdata << " " << yearlymileage[i] << " ";
}
void car::show()
{
	cout << "Manufacturer: " << manufacturer << endl <<
		"Model: " << model << endl <<
		"Year Built: " << yearbuilt << endl <<
		"MPG: " << mpg << endl;
	for (int i = 0; i < 12; i++)
		cout << "Month" << i + 1 << ": " <<
		yearlymileage[i] << endl;
}
car::car()
{
	manufacturer = "";
	model = "";
	yearbuilt = "0000";
	mpg = 00.0;
	for (int i = 0; i < 12; i++)
		yearlymileage[i] = 0.0;
}
