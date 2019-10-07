#include <string>
#include <iostream>
#include <fstream>
#include "taxicab.h"
using namespace std;
using namespace carcl;
namespace taxic
{
	double taxicab::getmonthlyfare(int i) const
	{
		return monthlyfares[i];
	}
	void taxicab::setmonthlyfare(int i, double f)
	{
		monthlyfares[i] = f;
	}
	taxicab::taxicab(): car()
	{
		for (int i = 0; i < 12; i++)
			monthlyfares[i] = 0;
	}
}