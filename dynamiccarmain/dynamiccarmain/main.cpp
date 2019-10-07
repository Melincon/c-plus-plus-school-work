#include "car.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace carcl;
using namespace std;
int main()
{
	car thiscar;
	/*car *thatcar = NULL;
	thatcar = new car;*/
	string fn;

	cout << "Input file to read from: " << endl << endl <<
		"input: ";
	cin >> fn;

	thiscar.load(fn);
	/*thatcar->load(fn);*/

	cout << thiscar.getmanufacturer() << endl <<
		thiscar.getmodel() << endl <<
		thiscar.getyearbuilt() << endl <<
		thiscar.getmilespergallon() << endl <<
		thiscar.totalmileage() << endl <<
		thiscar.totalcostperyearongas(2.0) << endl << endl;
		/*thatcar->getmanufacturer() << endl <<
		thatcar->getmodel() << endl <<
		thatcar->getyearbuilt() << endl <<
		thatcar->getmilespergallon() << endl <<
		thatcar->totalmileage() << endl <<
		thatcar->totalcostperyearongas(2.0) << endl << endl;*/
		/*thatcar = newcar;
	cout << thatcar->getmanufacturer() << endl <<
		thatcar->getmodel() << endl <<
		thatcar->getyearbuilt() << endl <<
		thatcar->getmilespergallon() << endl <<
		thatcar->totalmileage() << endl <<
		thatcar->totalcostperyearongas(2.0) << endl << endl;*/



	return 0;
}
	