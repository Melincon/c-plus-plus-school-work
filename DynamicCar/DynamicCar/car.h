#ifndef CARCL
#define CARCL
#include <string>
using namespace std;
namespace carcl
{
	class car
	{
	private:
		string manufacturer;
		string *model;
		string yearbuilt;
		double *milespergallon;
		double *yearlymileage[12];
	public:
		string getmanufacturer() const;
		string getmodel() const;
		string getyearbuilt() const;
		double getmilespergallon() const;
		double totalmileage();
		double totalcostperyearongas(double cpg);

		void setmanufacturer(string m);
		void setmodel(string m);
		void setyearbuilt(string y);
		void setmilespergallon(double mpg);
		void load(string fn);
		void store(string fn);

		/* friend ostream& operator<<(ostream&, const car*);
		 bool operator==(const car&) const;*/
		void car::operator=(const car& other);

		car();
		car(const car& other);
		~car();
	};
}
#endif