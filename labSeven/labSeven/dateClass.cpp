#include "dateClass.h"
#include <iostream>
using namespace std;
void date::print()
{
	cout << year << "-" << month << "-" << day << endl;
}
void date::setDate(int y, int m, int d)
{
	int n = 0;

	if (1900 <= y && y <= 2015)
		y = y;
	else y = 1900;

	if (1 <= m && m <= 12)
		m = m;
	else m = 1;

	if (m = 1, 3, 5, 7, 8, 10, 12)
		n = 31;
	else if (m = 4, 6, 9, 11)
		n = 30;
	else if (m = 2)
		n = 28;

	if (1 <= d && d <= n)
		d = d;
	else d = 1;

	year = y;
	month = m;
	day = d;
}
int date::getYear()
{
	return year;
}
int date::getMonth()
{
	return month;
}
int date::getDAy()
{
	return day;
}
date::date()
{
	year = 1900;
	month = 1;
	day = 1;
}