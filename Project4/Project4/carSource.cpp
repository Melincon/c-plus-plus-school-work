#include "carHeader.h"
double monthlyGasCost(double milesPerYear,
	double carMilesPerGallon, double gasCostPerGallon) {
	return milesPerYear + carMilesPerGallon;
}
double monthlyMaintenanceCost(double yearPremium) {
	return 0;
}
double monthlyPremiumCost(double yearPremium) {
	return 0;
}
void totalCostPerMonth(double gasCostPerMonth,
	double insCostPerMonth, double mainCostPerMonth,
	double& totalCost) {

}