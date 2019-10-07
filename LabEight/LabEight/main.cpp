#include <iostream>
#include <string>
#include "EmpClass.h"
#include "SDClass.h"
using namespace std;
int main()				//Travis Claus
{						//11/16/2015
	employee thisemp;	//c++ programming 2
	employee thatemp("Greenback", 56, 61.1, 341.1);

	thisemp.salaryreport();
	thatemp.salaryreport();

	smalldepartment thisdepo;

	thisdepo.setemployee1("him", 235,
		121.2, 3561.3);
	thisdepo.setemployee2("her", 151, 
		671.2, 421.5);

	thisdepo.salaryreport();

	thisemp.printemployee();
	thatemp.printemployee();

	thisdepo.setname("comic book depot");
	thisdepo.setid(3546531);
}