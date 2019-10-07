#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	int y;

	ifstream indata;
	ofstream outdata;

	string name;
	int age;
	double pay_rate;
	int hours_worked;
	double final_pay;


	/*cout << "Please enter two "
		<< "Numbers. " << endl
		<< "I will Multiply them "
		<< "for you. " << endl
		<< endl;

	cout << "Number one: ";
	cin >> x;

	cout << endl
		<< "Number two: ";
	cin >> y;*/

	/*cout << endl		
		<< x << "x" << y
		<< "=" << (x*y) << endl;*/

	/*outdata.open("MultFile.txt");		
	outdata << x << "x" << y			
		<< "=" << (x*y) << endl;
	outdata.close();
		cout << endl << "Answer written "
		<< "to file, 'MultFile.txt'." << endl;*/

	indata.open("Part3Input.txt");
	outdata.open("Part4Output.txt");
	/*cout << left */
	outdata << left
		<< setw(9) << "Name"
		<< setw(7) << "Age"
		<< setw(15) << "Hourly Pay"
		<< setw(15) << "Hours Worked"
		<< setw(15) << "Final Pay" << endl;
	do
	{
		indata >> name;
		indata >> age;
		indata >> pay_rate;
		indata >> hours_worked;
		/* cout << left */
		outdata << left
			<< setw(9) << name
			<< setw(7) << age
			<< setw(15) << pay_rate
			<< setw(15) << hours_worked
			<< setw(15) << (pay_rate*hours_worked)
			<< endl;
		'\n';
		indata.peek(EOF);
	} while (!(EOF));
	indata.close();
	outdata.close();


	return 0;
}