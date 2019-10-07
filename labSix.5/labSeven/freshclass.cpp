#include "freshclass.h"
#include <iostream>
#include <string>
using namespace std;
void freshman::print()
{
	cout << "Name: " << name << endl
		<< "Ram Number: " << ramno << endl
		<< "First semester gpa: " <<  semester1 << endl
		<< "Second semester gpa: " << semester2 << endl
		<< "Overall GPA: " << calcgpa() << endl;
}
void freshman::setname(string s)
{
	name = s;
}
void freshman::setramno(int r)
{
	ramno = r;
}
void freshman::setsemester(float s1, float s2)
{
	semester1 = s1;
	semester2 = s2;
}
string freshman::getname()
{
	return name;
}
float freshman::getsemester1()
{
	return semester1;
}
float freshman::getsemester2()
{
	return semester2;
}
float freshman::calcgpa()
{
	return (semester1 + semester2) / 2;
}
freshman::freshman()
{
	name = " ";
	gpa = 0;
	ramno = 0;
	semester1 = 0;
	semester2 = 0;
}
freshman::freshman(string s, float g, int r,
	float s1, float s2)
{
	name = s;
	gpa = g;
	ramno = r;
	semester1 = s1;
	semester2 = s2;
}