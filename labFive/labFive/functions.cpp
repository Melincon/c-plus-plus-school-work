#include <iostream>
#include "functions.h"
#include "structs.h"
void printCourse(courseType course)
{
	cout << course.courseName << endl
		<< course.courseID << endl
		<< course.credit << endl << endl;
}
void printStudent(studentType student)
{
	cout << student.studentName << endl
		<< student.firstCourse.courseName << endl
		<< student.secondCourse.courseID << endl
		<< student.secondCourse.credit << endl
		<< endl;
}