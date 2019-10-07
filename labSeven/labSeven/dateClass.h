#ifndef DATECLASS
#define DATECLASS
using namespace std;
class date
{
private:
	int year;
	int month;
	int day;
public:
	void print();
	void setDate(int y, int m, int d);
	int getYear();
	int getMonth();
	int getDAy();

	date();
};
#endif
