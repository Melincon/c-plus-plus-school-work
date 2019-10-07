#include <iostream>
#include <fstream>
using namespace std;
void ShowReport(double MonthlySales[])
{
	double x = 0;

	for (int i = 0; i < 12; i++)
	{
		switch (i)
		{

		case 0:
			cout << "January: $";
			break;
		case 1:
			cout << "February: $";
			break;
		case 2:
			cout << "March: $";
			break;
		case 3:
			cout << "April: $";
			break;
		case 4:
			cout << "May: $";
			break;
		case 5:
			cout << "June: $";
			break;
		case 6:
			cout << "July: $";
			break;
		case 7:
			cout << "August: $";
			break;
		case 8:
			cout << "September: $";
			break;
		case 9:
			cout << "October: $";
			break;
		case 10:
			cout << "November: $";
			break;
		case 11:
			cout << "December: $";
			break;
		default:
			break;
		}

		cout << MonthlySales[i]
			<< endl;

		x = x + MonthlySales[i];

	}

	cout << "Total sales for the year: $"
		<< x << endl;

}
void ShowReportToFile(double MonthlySales[], 
	char filename[51])
{
	ofstream outdata;

	outdata.open(filename);

	double x = 0;

	for (int i = 0; i < 12; i++)
	{
		switch (i)
		{

		case 0:
			outdata << "January: $";
			break;
		case 1:
			outdata << "February: $";
			break;
		case 2:
			outdata << "March: $";
			break;
		case 3:
			outdata << "April: $";
			break;
		case 4:
			outdata << "May: $";
			break;
		case 5:
			outdata << "June: $";
			break;
		case 6:
			outdata << "July: $";
			break;
		case 7:
			outdata << "August: $";
			break;
		case 8:
			outdata << "September: $";
			break;
		case 9:
			outdata << "October: $";
			break;
		case 10:
			outdata << "November: $";
			break;
		case 11:
			outdata << "December: $";
			break;
		default:
			break;
		}

		outdata << MonthlySales[i]
			<< endl;

		x = x + MonthlySales[i];

	}

	outdata << "Total sales for the year: $"
		<< x << endl;

	outdata.close();

}