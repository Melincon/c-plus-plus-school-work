#include "customer.h"
#include <string>
#include <iostream>
using namespace std;	//Travis Claus
int main()				//11//22/2015
{						//C++ 2
	bankaccount his("thisacount", 100000);

	cout << "depositing 5000 $" << endl << endl;
	his.deposit(5000);
	his.print();
	cout << "withdrawing 500 $ " << endl << endl;
	his.withdrawel(500);
	his.print(); 

	savingsaccount her("her account", 351534.216, 1.5);

	cout << "depositing 5000 $" << endl << endl;
	her.deposit(5000);
	her.print();
	cout << "withdrawing 500 $ " << endl << endl;
	her.withdrawel(500);
	her.print();
	cout << "applying interest" << endl << endl;
	her.applyinterest();
	her.print();

	customer them("that account", 53154.1, 1.5, "robert", " paulson");

	cout << "depositing 5000 $" << endl << endl;
	them.depositsavings(5000);
	them.print();
	cout << "withdrawing 500 $ " << endl << endl;
	them.withdrawsavings(500);
	them.print();
	cout << "applying interest" << endl << endl;
	them.applyinterest();
	them.print();

	return 0;
}