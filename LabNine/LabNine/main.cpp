#include "parttime.h"
using namespace std;
int main()				//Travis Claus
{						//11/22/2015
	person brian;		//C++ 2
	person mike("Mike", "Alvarez", 134687);
	person jesse("Jesse","Silver", 354351);
	person sam("Jesse", "Silver", 351864);

	cout << jesse.equalname(sam) << endl <<
		mike.equalname(sam) << endl;

	parttime employee;
	parttime mellowmike(45.3, 51.2, "Mike",
		"Alvarez", 13543);

	mellowmike.print();
	mike.print();
	jesse.print();
	sam.print();
	employee.print();
	brian.print();

	return 0;
}