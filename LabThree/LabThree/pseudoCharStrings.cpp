#include <iostream>
#include "pseudoCharStrings.h"
using namespace std;
void print(char cstring1[])
{
	int t = find(cstring1);
	for (int i = 0; i < t; i++)
		cout << cstring1[i];
	cout << endl;
}
void copy(char cstring1[], char cstring2[])
{
	int t = find(cstring1);
	for (int i = 0; i <= t; i++)
		cstring1[i] = cstring2[i];
}
void concat(char cstring1[], char cstring2[],
	char cstring3[])
{
	int t = find(cstring1);
	for (int i = 0; i < t; i++)
		cstring3[i] = cstring1[i];
	int t2 = find(cstring2) + t;
	for (int i = t, x = 0; i <= t2; x++, i++)
		cstring3[i] = cstring2[x];
}
int compare(char cstring1[], char cstring2[])
{
	if (find(cstring1) < find(cstring2))
		return -1;
	else if (find(cstring1) == find(cstring2))
		return 0;
	else if (find(cstring1) > find(cstring2))
		return 1;
}
int find(char cstring1[], char cstring2[])
{
	int t = find(cstring1);
	int t2 = find(cstring2);
	for (int i = 0; i < t; i++)
		if (cstring1[i] == cstring2[0])
			for (int x = i, g = 0; g < t2; x++, g++)
				if (cstring1[x] == cstring2[g])
					continue;
				else if (g == (t2 - 1))
					return i;
				else return -1;
		else continue;
		return -1;
}
int find(char cstring1[])
{
	for (int i = 0; i < 20; i++)
		if (cstring1[i] == '\0')
			return i;
}