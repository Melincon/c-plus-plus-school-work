#include "cfHeader.h"
double monthlyGasCost(double x, double y,
	double z)
{
	return (((x/12) / y)*z);
}
double monthlyMaintenanceCost(double x)
{
	return (x / 12);
}
double monthlyPremiumCost(double x)
{
	return (x / 12);
}
void totalCostPerMonth(double x, double y,
	double z, double& a)
{
	a = (x + y + z);
}