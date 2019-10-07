#include "class.h"
#include <iostream>
using namespace std;
int main()
{
	rectangle otherbox(7, 2, "orange");
	rectangle box;

	box.print();
	otherbox.print();

	return 0;
}