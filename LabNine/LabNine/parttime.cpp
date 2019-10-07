#include "parttime.h"
#include <iostream>
#include <string>
using namespace std;
void parttime::sethoursrate(double hr, double r)
{
	hours = hr;
	rate = r;
}
double parttime::gethours() const
{return hours;}
double parttime::getrate() const
{return rate;}
double parttime::getsalary() const
{
	if (hours <= 40)
		return hours * rate;
	else
		return ((hours - 40) *
			(rate * 1.5)) +
		(rate * 40);
}
void parttime::print() const
{
	cout << "Firstname: " << getfname() << endl <<
		"Lastname: " << getlname() << endl << 
		"Hours: " << hours << endl <<
		"Rate: " << rate << endl << 
		"Salary: " << getsalary() << endl << endl;
}
parttime::parttime(): person()
{
	hours = 00.0;
	rate = 00.0;
}
parttime::parttime(double hr, double r,
	string fn, string ln, int tid) :
	person(fn, ln, tid)
{
	hours = hr;
	rate = r;
}