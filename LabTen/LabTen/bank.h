#ifndef BANK
#define BANK
#include <string>
using namespace std;
class bankaccount
{
private:
	string accountname;
	double accountbalance;
public:
	void setname(string an);
	double getbalance() const;
	void setbalance(double ab);
	string getname() const;
	void print() const;
	void deposit(double dep);
	void withdrawel(double wit);

	bankaccount();
	bankaccount(string an, double ab);
};
#endif
