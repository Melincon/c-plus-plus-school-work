#include "customer.h"
#include <string>
using namespace std;
string customer::getfname() const
{return firstname;}
string customer::getlname() const
{return lastname;}
void customer::setfname(string fn)
{firstname = fn;}
void customer::setlname(string ln)
{lastname = ln;}
void customer::withdrawsavings(double wit)
{withdrawel(wit);}
void customer::depositsavings(double dep)
{deposit(dep);}
customer::customer(): savingsaccount ()
{
	firstname = "";
	lastname = "";
}
customer::customer(string an, double ab,
	double in, string fn, string ln):
	savingsaccount(an, ab, in)
{
	firstname = fn;
	lastname = ln;
}