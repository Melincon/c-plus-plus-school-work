#ifndef CAR
#define CAR
#include <string>
using namespace std;
class car
{
private:
	string manufacturer;
	string model;
	string yearbuilt;
	double mpg;
	double yearlymileage[11];
public:
	void setmanufacturer(string m);
	void setmodel(string n);
	void setyear(string y);
	void setmpg(double i);
	string getmanufacturer() const;
	string getmodel() const;
	string getyear() const;
	double getmpg() const;
	double totalgascost(double g);
	double totalmileage();
	void load(string fi);
	void store(string fo);
	void show();

	car();
};
#endif
