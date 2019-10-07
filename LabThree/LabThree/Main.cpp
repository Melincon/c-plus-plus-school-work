#include "pseudoCharStrings.h"
#include <iostream>
using namespace std;
int main()
{										//Travis Claus
	char cstring1[20] = { 'T','r','a',	//lab three	
		'v','i','s','\0' };				//10/8/2015	
	char cstring2[20] = { 'J','o','h','n','\0' };
	char cstring3[20] = { 'C','l','a',
		'u','s','\0' };

	cout << compare(cstring1, cstring3) << endl;

	print(cstring1);
	print(cstring2);
	print(cstring3);
	concat(cstring2, cstring1, cstring3);
	print(cstring3);

	cout << find(cstring3, cstring1) << endl;

	copy(cstring1, cstring2);
	print(cstring1);
	concat(cstring2, cstring1, cstring3);
	print(cstring3);

	cout << compare(cstring1, cstring3) << endl;

	return 0;
}