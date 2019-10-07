#ifndef EMPLOYEE
#define EMPLOYEE
#include <string>
#include <iostream>
using namespace std;
class employee
{
private:
	string name;
	int hoursworked;
	double hourlyrate;
	double overtimehourlyrate;
public:
	void setname(string n);
	void sethours(int h);
	void setrate(double r);
	void setorate(double orate);
	void printemployee() const;
	void salaryreport() const;
	string getname() const;
	int gethours() const;
	double getrate() const;
	double getpay() const;
	double getorate() const;

	employee();
	employee(string n, int h, double r, 
		double orate);
};
#endif
