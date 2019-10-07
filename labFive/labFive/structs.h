#include <string>
using namespace std;
struct courseType
{
	string courseName;
	int courseID;
	int credit;
};
struct studentType
{
	string studentName;
	courseType firstCourse;
	courseType secondCourse;
};
