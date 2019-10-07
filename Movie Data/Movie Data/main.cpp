#include <iostream>
#include <string>
using namespace std;
struct moviedata
{
	string title;
	string director;
	int year;
	double length;
	double cost;
	double revenue;
};
void modify(moviedata x, moviedata y);
int main()
{
	moviedata m;
	moviedata m2;

	m.title = "The Dogfather.";
	m.director = "Snoop Dogg.";
	m.year = 1996;
	m.length = 105;
	m.cost = 135.51;
	m.revenue = 531.5631;

	m2.title = "This Program.";
	m2.director = "Not me.";
	m2.year = 2016;
	m2.length = 43;
	m2.cost = 351865413.51;
	m2.revenue = 53218.15;

	modify(m, m2);

	return 0;
}
void modify(moviedata x, moviedata y)
{
	cout << "Movie One: " << endl
		<< x.title << endl << x.director
		<< endl << x.year << endl << x.length
		<< endl << (x.revenue - x.cost)
		<< endl << endl;

	cout << "Movie Two: " << endl
		<< y.title << endl << y.director
		<< endl << y.year << endl << y.length
		<< endl << (y.revenue - y.cost)
		<< endl << endl;
}