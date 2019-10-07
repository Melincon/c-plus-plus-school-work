#include "functions.h"
void addten(int *ptr)
{
	for (int i = 0; i < 5; i++)
		ptr[i] = ptr[i] + 10;
}