#include <iostream>
#include "AnFheader.h"
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()					//Travis Claus
{							//BCS 230
	int flag;				//9/28/2015
	int c;
	double MonthlySales[11];
	char filename[51];

	srand(time(0));

	for (int i = 0; i < 12; i++)
	{
		MonthlySales[i] = rand() % 100 + 1;
	}

	do
	{
		flag = 1;

		cout << "Sales Program" << endl
			<< "-------------" << endl
			<< "1. Print report to console." << endl
			<< "2. Print report to file." << endl
			<< "3. Exit." << endl
			<< "Enter Choice: ";
		cin >> c;

	switch (c)
	{
	case 1:
		ShowReport(MonthlySales);
		break;
	case 2:
		cout << "Declare a file name, " << '\n'
			<< "be sure that it ends with '.txt'"
			<< endl << "Filename: ";
		cin >> filename;
		ShowReportToFile(MonthlySales, filename);
		break;
	case 3:
		break;
	default:
		flag = 0;
	}
	} while (flag == 0);

	return 0;
}