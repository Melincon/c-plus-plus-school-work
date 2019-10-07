#include <iostream>
#include <string>
using namespace std;
#include "taxicab.h"
#include "carClass.h"
#include "functions.h"
using namespace taxic;
int main()
{
	taxicab thiscab;		//Travis Claus
	int closed = 2;			
	int blade = 0;
	string fi;
	string fo;
	double gas;

	while (closed == 2)
	{
		cout << "Car Program" << endl <<
			"1. Read taxicab info from file." << endl <<
			"2. Store taxicab info in file." << endl <<
			"3. Show taxicab info on screen." << endl <<
			"4. Total gas cost for year." << endl <<
			"5. Total mileage." << endl <<
			"6. Total fare money." << endl <<
			"7. Profit." << endl <<
			"8. Exit." << endl << endl;

		cout << "Input: ";
		cin >> blade;

		switch (blade)
		{
		case 1:
			cout << "Please input the name of the file " << '\n'
				<< "ending with '.txt', default is"
				<< '\n' << "C:\\Users\\Travis\\Desktop\\thiscar"
				<< "folder\\thiscarfile.txt" <<
				endl << endl << "Input: ";
			cin >> fi;
			load(fi, thiscab);
			break;
		case 2:
			cout << "Please input the name of the file" << '\n'
				<< "ending with '.txt'."
				<< endl << endl << "Input: ";
			cin >> fo;
			store(fo, thiscab);
			break;
		case 3:
			show(thiscab);
			break;
		case 4:
			cout << "Please enter the cost of gas per gallon."
				<< endl << endl << "Input: ";
			cin >> gas;
			cout << "Total gas cost: " <<
				thiscab.totalgascost(gas) << endl << endl;
			break;
		case 5:
			cout << "Total Mileage is: " <<
				thiscab.totalmileage() << endl << endl;
			break;
		case 6:
			cout << "Total Fare Money is: " <<
				yearlyfaremoney(thiscab) << endl << endl;
			break;
		case 7:
			cout << "Please enter total cost of " <<
				"gas per gallon" << endl << endl;
			cin >> gas;
			cout << "Total profit for the year is: " <<
				yearlyprofit(gas, thiscab) << endl << endl;
			break;
		case 8:
			closed = 0;
			break;
		default:
			cout << "Invalid input, please try again." <<
				endl << endl;
			break;
		}
	}
	return 0;
}