//
#include<iostream>
#include"GradeBook.h"
using namespace std;

int main()
{
	GradeBook gradeBook("c++ program");
	cout << "gradebook created for course: " << gradeBook.getCourseName() << endl;
}