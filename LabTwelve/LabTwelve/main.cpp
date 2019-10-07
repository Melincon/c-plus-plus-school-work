#include <iostream>
#include "functions.h"
using namespace std;
int main()				//Travis Claus
{						//lab 12
	int room = 12;		//12/16/15
	int *roomptr = &room;
	int arraya[5] = { 1,3,5,7,9 };
	int arrayb[5] = { 2,4,6,8,10 };
	int *ptra = NULL;
	ptra = &arraya[0];
	int *ptrb = NULL;
	ptrb = &arrayb[0];


	cout << "room Address: " << &room << endl << endl <<
		"room Value: " << room << endl << endl <<
		"Address of roomptr: " << &roomptr << endl << endl <<
		"Value of roomptr: " << roomptr << endl <<endl <<
		"Value pointed to by roomptr: " << *roomptr << endl <<
		endl;

	for (int i = 0; i < 5; i++)
		cout << ptra[i] << " " << ptrb[i] << " ";

	cout << endl << endl;

	for (int i = 0; i < 5; i++)
		cout << arraya[i] << " " << arrayb[i] << " ";

	cout << endl << endl;

	for (int i = 0; i < 5; i++)
		ptra[i] = ptra[i] + 10;

	for (int i = 0; i < 5; i++)
		cout << arraya[i] << " ";

	cout << endl << endl;

	addten(ptrb);

	for (int i = 0; i < 5; i++)
		cout << ptrb[i] << " ";

	cout << endl << endl;

	roomptr = NULL;
	ptra = NULL;
	ptrb = NULL;
	return 0;
}