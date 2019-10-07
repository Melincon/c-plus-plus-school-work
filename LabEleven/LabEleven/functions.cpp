#include "functions.h"
#include <iostream>
using namespace std;
void printarray(int *ptr, int n)
{
	for (int i = 0; i < n; i++)
		cout << "Cell " << i+1 << ": " << ptr[i] << endl;
}