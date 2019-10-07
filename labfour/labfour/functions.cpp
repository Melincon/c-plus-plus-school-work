#include "functions.h"
int find(char cstring1[])
{
	for (int i = 0; i < 300; i++)
		if (cstring1[i] == '*')
			return i;
	return 0;
}
int countletter(char arr[], char letter)
{
	int l = find(arr);
	int j = 0;
	for (int i = 0; i <= l; i++)
		if (arr[i] == letter)
			j++;
		else continue;
		return j;
}