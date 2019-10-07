#include <string>
using namespace std;
class videogame
{
private:
	string *name;
	double *price;
	int *rating;
public:
	string getname() const;
	double getprice() const;
	int getrating() const;

	void setname(string n);
	void setprice(double p);
	void setrating(int r);
	void show() const;

	videogame();
	videogame(string n, double p, int r);
	~videogame();
};
