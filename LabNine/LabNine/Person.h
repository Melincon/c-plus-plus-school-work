#ifndef PERSON
#define PERSON
#include <string>
#include <iostream>
using namespace std;
class person
{
private:
	string firstname;
	string lastname;
	int id;
public:
	void print() const;
	void setname(string fn, string ln);
	void setid(int tid);
	string getfname() const;
	string getlname() const;
	int getid() const;
	bool equalname(person otherperson);

	person();
	person(string fn, string ln, int tid);
};
#endif
