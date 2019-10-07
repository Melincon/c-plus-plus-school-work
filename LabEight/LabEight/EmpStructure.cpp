#include <string>
#include "EmpClass.h"
#include <iomanip>
using namespace std;
void employee::setname(string n)
{name = n;}
void employee::sethours(int h)
{hoursworked = h;}
void employee::setrate(double r)
{hourlyrate = r;}
void employee::setorate(double orate)
{overtimehourlyrate = orate;}
void employee::printemployee() const
{cout << "Name: " << name << endl << 
"Hours: " << hoursworked << endl << 
"Rate: " << hourlyrate << endl << 
"Pay: " << getpay() << endl << endl;}
void employee::salaryreport() const
{	int overhours = 0;
	int hours = hoursworked;
	if (hoursworked > 40)
	{hours = 40;
	overhours = (hoursworked - 40);}
	else overhours = 0;
		
	cout << left << name << endl << endl <<
		setw(10) << "Pay" << setw(8) << 
		"Hours" << setw(8) << "Rate" <<
		setw(8) << "Type" << endl << setw(10) <<
		(hours*hourlyrate) << setw(8) << hours << 
		setw(8) << hourlyrate << setw(8) << 
		"Normal" << endl << setw(10) << 
		(overhours*overtimehourlyrate) << 
		setw(8) << overhours << setw(8) << 
		overtimehourlyrate << setw(8) << 
		"Overtime" << endl << endl << setw(10) << 
		"Total Pay: " << setw(8) << getpay() << 
		endl << endl;}
string employee::getname() const
{return name;}
int employee::gethours() const
{return hoursworked;}
double employee::getrate() const
{return hourlyrate;}
double employee::getpay() const
{	if(hoursworked <= 40)
		return hoursworked * hourlyrate;
	else
		return ((hoursworked - 40) * 
			overtimehourlyrate) +
		(hourlyrate * 40);}
double employee::getorate() const
{return overtimehourlyrate;}
employee::employee()
{	name = "";
	hoursworked = 00;
	hourlyrate = 00;
	overtimehourlyrate = 00;}
employee::employee(string n,int h,double r,
	double orate)
{	name = n;
	hoursworked = h;
	hourlyrate = r;
	overtimehourlyrate = orate;}