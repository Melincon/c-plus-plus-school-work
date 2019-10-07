#ifndef SAVE
#define SAVE
#include "bank.h"
#include <string>
using namespace std;
class savingsaccount: public bankaccount
{
private:
	double interest;
public:
	void setinterest(double in);
	double getinterest() const;
	void applyinterest();

	savingsaccount();
	savingsaccount(string an, double ab, 
		double in);
};
#endif
