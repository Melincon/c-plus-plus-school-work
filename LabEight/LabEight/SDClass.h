#ifndef SMALLD
#define SMALLD
#include <string>
#include "EmpClass.h"
using namespace std;
class smalldepartment
{
private:
	string name;
	int id;
	employee employee1;
	employee employee2;
public:
	void setname(string n);
	void setid(int i);
	void setemployee1(string n,
		int h, double r, double orate);
	void setemployee2(string n,
		int h, double r, double orate);
	void salaryreport() const;
	string getname() const;
	int getid() const;
	employee getemployee1() const;
	employee getemployee2() const;

	smalldepartment();
};
#endif