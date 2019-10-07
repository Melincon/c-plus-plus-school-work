#ifndef FRESHCLASS
#define FRESHCLASS
#include <string>
using namespace std;
class freshman
{
private:
	string name;
	float gpa;
	int ramno;
	float semester1, semester2;
public:
	void print();
	void setname(string s);
	void setramno(int r);
	void setsemester(float s1, float s2);
	string getname();
	float getsemester1();
	float getsemester2();
	float calcgpa();

	freshman();
	freshman(string s, float g, int r,
		float s1, float s2);
};
#endif
