#include "carClass.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	car thiscar;
	int closed = 2;
	int blade = 0;
	string fi;
	string fo;
	double gas;

	while (closed == 2)
	{
		cout << endl << endl << "Car Program" << endl <<
			"1. Read car infor from file." << endl <<
			"2. Store car info in file." << endl <<
			"3. Show car info on screen." << endl <<
			"4. Total gas cost for year." << endl <<
			"5. Total mileage." << endl <<
			"6. Exit." << endl;

		cout << endl << "Input: ";
		cin >> blade;

		switch (blade)
		{
		case 1:
			cout << "Please input the name of the file " << '\n'
				<< "ending with '.txt', default is 'carFile.txt'."
				<< endl << endl << "Input: ";
			cin >> fi;
			thiscar.load(fi);
			break;
		case 2:
			cout << "Please input the name of the file" << '\n'
				<< "ending with '.txt'."
				<< endl << endl << "Input: ";
			cin >> fo;
			thiscar.store(fo);
			break;
		case 3:
			thiscar.show();
			break;
		case 4:
			cout << "Please enter the cost of gas per gallon."
				<< endl << endl << "Input: ";
			cin >> gas;
			cout << "Total gas cost: " <<
				thiscar.totalgascost(gas);
			break;
		case 5:
			cout << "Total Mileage is: " <<
				thiscar.totalmileage();
			break;
		case 6:
			closed = 0;
			break;
		default:
			cout << endl <<
				"Invalid input, please try again.";
			break;
		}
	}

	return 0;
}