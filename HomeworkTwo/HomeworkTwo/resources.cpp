#include "functions.h"
#include "structs.h"
#include <fstream>
void LoadCarInfo(car c)
{
	ifstream indata;

	indata.open("CarInfo.txt");

	indata >> c.manufacturer
		>> c.model
		>> c.year_built
		>> c.car_mpg;

	indata.close();
}
void LoadMonthlyMileage(double monthmpg[])
{
	ifstream indata;

	indata.open("CarMileag.txt");

	for (int i = 0; i < 12; i++)
		indata >> monthmpg[i];

	indata.close();
}
double TotalGasCostPerYearOnGas(car c,
	double mileage[], double x)
{
	double z = 0;
	for (int i = 0; i < 12; i++)
		z = z + mileage[i];

	return (z / c.car_mpg) * x;
}