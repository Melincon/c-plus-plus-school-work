#include "savings.h"
#include <string>
#include <iostream>
using namespace std;
void savingsaccount::setinterest(double in)
{interest = in;}
double savingsaccount::getinterest() const
{return interest;}
void savingsaccount::applyinterest()
{setbalance(getbalance() * interest);}
savingsaccount::savingsaccount() : bankaccount()
{interest = 00.0;}
savingsaccount::savingsaccount(string an,
	double ab, double in) : bankaccount(an, ab)
{interest = in;}