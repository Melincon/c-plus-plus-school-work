#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "taxicab.h"
#include "carClass.h"
#include "functions.h"
using namespace taxic;
const string months[12] = { "Jan: ", "Feb: ", "Mar: ",
"Apr: ", "May: ", "Jun: ", "Jul: ", "Aug: ", "Sept: ",
"Oct: ", "Nov: ", "Dec: " };
double yearlyfaremoney(taxicab taxi)
{
	double t = 0;
	for (int i = 0; i < 12; i++)
		t = t + taxi.getmonthlyfare(i);
	return t;
}
double yearlyprofit(double cpg, taxicab taxi)
{
	return yearlyfaremoney(taxi) - taxi.totalgascost(cpg);
}
void load(string fn, taxicab &taxi)
{
	ifstream indata;
	string man, mod, yb;
	double mpg, m = 0, f = 0;

	indata.open(fn);

	indata >> man >> mod >> yb >> mpg;

	for (int i = 0; i < 12; i++)
	{
		indata >> m;
		taxi.setmileage(i, m);
	}

	for (int i = 0; i < 12; f = 0, i++)
	{
		indata >> f;
		taxi.setmonthlyfare(i, f);
	}

	taxi.setmanufacturer(man);
	taxi.setmodel(mod);
	taxi.setyear(yb);
	taxi.setmpg(mpg);

	indata.close();
}
void store(string fn, taxicab taxi)
{
	ofstream outdata;

	outdata.open(fn);

	outdata << taxi.getmanufacturer() << " " << taxi.getmodel() 
		<< " " << taxi.getyear() << " " << taxi.getmpg() << " ";

	for (int i = 0; i < 12; i++)
		outdata << taxi.getmileage(i) <<
		endl;

	for (int i = 0; i < 12; i++)
		outdata << taxi.getmonthlyfare(i) <<
		endl;

	outdata.close();
}
void show(taxicab taxi)
{
	cout << "Manufacturer: " << taxi.getmanufacturer() 
		<< endl <<
		"Model: " << taxi.getmodel() << endl <<
		"Yearbuilt: " << taxi.getyear() << endl <<
		"MPG: " << taxi.getmpg() << endl;

	for (int i = 0; i < 12; i++)
		cout << months[i] << taxi.getmileage(i) << endl;

	for (int i = 0; i < 12; i++)
		cout << months[i] << taxi.getmonthlyfare(i) <<
		endl;

	cout << endl << endl;
}