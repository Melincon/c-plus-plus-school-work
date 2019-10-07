#include "SDClass.h"
#include "EmpClass.h"
#include <iostream>
using namespace std;
void smalldepartment::setname(string n)
{name = n;}
void smalldepartment::setid(int i)
{id = i;}
void smalldepartment::setemployee1(string n, 
	int h, double r, double orate)
{	employee1.setname(n);
	employee1.sethours(h);
	employee1.setrate(r);
	employee1.setorate(orate);}
void smalldepartment::setemployee2(string n,
	int h, double r, double orate)
{	employee2.setname(n);
	employee2.sethours(h);
	employee2.setrate(r);
	employee2.setorate(orate);}
void smalldepartment::salaryreport() const
{	employee1.salaryreport();
	employee2.salaryreport();}
string smalldepartment::getname() const
{return name;}
int smalldepartment::getid() const
{return id;}
employee smalldepartment::getemployee1() const
{return employee1;}
employee smalldepartment::getemployee2() const
{return employee2;}
smalldepartment::smalldepartment()
{	name = "";
	id = 0000;
	employee employee1;
	employee employee2;}