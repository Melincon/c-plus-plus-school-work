#ifndef PART
#define PART
#include "Person.h"
class parttime : person
{
private:
	double hours;
	double rate;
public:
	void sethoursrate(double hours, double rate);
	double gethours() const;
	double getrate() const;
	double getsalary() const;
	void print() const;
	
	parttime::parttime();
	parttime::parttime(double hr, double r,
		string fn, string ln, int tid);
};
#endif