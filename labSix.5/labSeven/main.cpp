#include "freshclass.h"
#include <iostream>
using namespace std;
int main()
{
	freshman freshkid;
	freshman otherfreshkid("Danger Mouse", 3.7,
		543515846, 3.6, 3.8);

	freshkid.print();
	otherfreshkid.print();

	return 0;
}