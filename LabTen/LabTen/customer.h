#ifndef CUST
#define CUST
#include "savings.h"
#include <string>
using namespace std;
class customer : public savingsaccount
{
private:
	string firstname;
	string lastname;
public:
	string getfname() const;
	string getlname() const;
	void setfname(string fn);
	void setlname(string ln);
	void withdrawsavings(double wit);
	void depositsavings(double dep);

	customer();
	customer(string an, double ab, double in,
		string fn, string ln);
};
#endif
