#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;
int main()
{
	ifstream indata;		//Travis Claus
	char quote[300];		//lab gour
							//10/8/15
	indata.open("lab4data.txt");
	indata.get(quote, 300);
	indata.close();

	int l = find(quote);

	for (int i = 0; i <= l; i++)
		cout << quote[i];

	cout << endl << "length: " << 
		l << endl << "e's: " <<
		countletter(quote, 'e') << endl;

	return 0;
}