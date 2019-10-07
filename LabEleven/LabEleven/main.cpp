#include <iostream>
#include "functions.h"
using namespace std;
int main()					//Travis Claus
{							//lab 11
	int *ptr = NULL;		//12/16/15
	ptr = new int;
	int n;

	*ptr = 10;

	cout << "Address: " << ptr << endl <<
		"Value: " << *ptr << endl << endl;

	*ptr = *ptr * 2;

	cout << "Value: " << *ptr << endl << endl;

	delete ptr;
	ptr = NULL;

	cout << "Please provide the length of the dynamic array" <<
		endl << endl << "Input: ";
	cin >> n;

	int *numptr = NULL;
	numptr = new int[n];

	cout << "We will now begin filling the integer" << 
		"array of length " <<
		n << endl << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "cell " << i+1 << ":";
		cin >> numptr[i];
		cout << endl << endl;
	}

	printarray(numptr, n);

	int x;

	cout << "Enter an integer to append to the ray."
		<< endl << endl << "Input: ";
	cin >> x;

	numptr[n] = x;

	ptr = &numptr[n];

	printarray(numptr, n + 1);

	delete [] numptr;
	return 0;
}