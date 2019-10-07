#include <iostream>
#include <fstream>
#include "carHeader.h"
using namespace std;
int main() {
	double milesPerYear;
	double milesPerGallon;
	double costPerGallon;
	double maintenancePerYear;
	double carInsPremium;

	fstream indata;

	indata.open("car.txt");

	indata >> milesPerYear >> milesPerGallon >>
		costPerGallon >> maintenancePerYear >>
		carInsPremium;

	indata.close();

	cout << milesPerYear << milesPerGallon <<
		costPerGallon << maintenancePerYear << carInsPremium;

	system("PAUSE");
	return 0;
}