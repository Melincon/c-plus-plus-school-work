#include "Person.h"
#include <string>
#include <iostream>
using namespace std;
void person::print() const
{
	cout << "Firstname: " << firstname << endl <<
		"Lastname: " << lastname << endl <<
		"ID: " << id << endl << endl;
}
void person::setname(string fn, string ln)
{
	firstname = fn;
	lastname = ln;
}
void person::setid(int tid)
{id = tid;}
string person::getfname() const
{return firstname;}
string person::getlname() const
{return lastname;}
int person::getid() const
{return id;}
bool person::equalname(person otherperson)
{
	return (firstname == otherperson.firstname
		&& lastname == otherperson.lastname);
}
person::person()
{
	firstname = "";
	lastname = "";
	id = 0000;
}
person::person(string fn, string ln, int tid)
{
	firstname = fn;
	lastname = ln;
	id = tid;
}