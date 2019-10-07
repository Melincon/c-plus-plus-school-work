#include <iostream>
#include <string>
#include "structs.h"
#include "functions.h"
using namespace std;
int main()
{
	courseType course1, course2;
	studentType student1;
	
	course1.courseName = "Programming II";
	course1.courseID = 71200;
	course1.credit = 3;

	course2.courseName = course1.courseName;
	course2.courseID = course1.courseID;
	course2.credit = course1.credit;

	course2.courseName = "Web Database Development";
	course2.courseID = course2.courseID + 100;

	printCourse(course1);
	printCourse(course2);

	student1.studentName = "Alice Brown";
	student1.firstCourse = course1;
	student1.secondCourse = course2;

	printStudent(student1);

	return 0;
}