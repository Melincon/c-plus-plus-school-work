#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout << "Please enter the date in the form of "
		<< "MM/DD/YYYY" << endl;
	
	char m[3];
	char d[3];
	char y[5];

	cin.get(m,'/');
	cin.get(d,'/');
	cin.get(y,'/');

	switch (m)
	{
	case 1:
		cout << "January";
	case 2:
		cout << "Febuary";
	case 3:
		cout << "March";
	case 4:
		cout << "April";
	case 5:
		cout << "May";
	case 6:
		cout << "June";
	case 7:
		cout << "July";
	case 8:
		cout << "August";
	case 9:
		cout << "September";
	case 10:
		cout << "October";
	case 11:
		cout << "November";
	case 12:
		cout << "December";
	default: 
		cout << "blah";
	}



	return 0;
}