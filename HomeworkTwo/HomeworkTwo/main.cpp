#include "functions.h"
#include "structs.h"
#include <fstream>
using namespace std;
int main()
{
	double months[12];
	car thiscar;
	double gasCostPerGallon = 2.75;

	LoadCarInfo(thiscar);
	LoadMonthlyMileage(months);
	TotalCostPerYearOnGas(thiscar,
		months, gasCostPerGallon);

	return 0;
}