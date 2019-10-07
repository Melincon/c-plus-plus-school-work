#include "bank.h"
#include <string>
#include <iostream>
using namespace std;
void bankaccount::setname(string an)
{accountname = an;}
void bankaccount::setbalance(double ab)
{accountbalance = ab;}
string bankaccount::getname() const
{return accountname;}
double bankaccount::getbalance() const
{return accountbalance;}
void bankaccount::deposit(double dep)
{accountbalance = accountbalance + dep;}
void bankaccount::withdrawel(double wit)
{
	if (accountbalance < wit)
		cout << "You may not allow a balance below zero" 
		<< endl << endl;
	else accountbalance = accountbalance - wit;
}
void bankaccount::print() const
{
	cout << "Account Name: " << accountname <<
		endl << "Account Balance: " << 
		accountbalance	<< endl << endl;
}
bankaccount::bankaccount()
{
	accountname = "";
	accountbalance = 00.0;
}
bankaccount::bankaccount(string an, double ab)
{
	accountname = an;
	accountbalance = ab;
}