#include <iostream>
#include <fstream>
#include "cfHeader.h"
using namespace std;
int main()
{
	double milesPerYear;
	double carMilesPerGallon;
	double gasCostPerGallon;
	double mainYearAmt;
	double yearPremium;
	double totalCost;

	ifstream indata;

	indata.open("carInfo.txt");

	indata >> milesPerYear >> carMilesPerGallon
		>> gasCostPerGallon >> mainYearAmt
		>> yearPremium;

	indata.close();

	cout << "Monthly Gas Cost is: "
		<< monthlyGasCost(milesPerYear,
			carMilesPerGallon, gasCostPerGallon)
		<< endl
		<< "Monthly Maintenance Cost is: "
		<< monthlyMaintenanceCost(mainYearAmt)
		<< endl
		<< "Monthly Premium Cost is: "
		<< monthlyPremiumCost(yearPremium)
		<< endl
		<< "Total Cost Per Month is: ";
		
	totalCostPerMonth(monthlyGasCost
		(milesPerYear, carMilesPerGallon,
			gasCostPerGallon),
		monthlyMaintenanceCost(mainYearAmt),
		monthlyPremiumCost(yearPremium),
		totalCost);

		cout << totalCost << endl;

	return 0;
}