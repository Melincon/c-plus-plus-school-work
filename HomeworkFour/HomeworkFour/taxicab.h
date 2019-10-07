#ifndef TAXI
#define TAXI
#include <string>
using namespace std;
#include "carClass.h"
using namespace carcl;
namespace taxic
{
	class taxicab : public car
	{
	private:
		double monthlyfares[12];
	public:
		double getmonthlyfare(int i) const;
		void setmonthlyfare(int i, double f);

		taxicab();
	};
}
#endif