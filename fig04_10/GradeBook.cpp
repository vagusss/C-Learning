#include<iostream>
#include"GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name;
	else
	{
		courseName = name.substr(0, 25);
		cout << "name\"" << name << "\"exceeds maximum length(25).\n";
	}
}
string GradeBook::getCourseName()
{
	return courseName;
}
void GradeBook::displayMessage()
{
	cout << "welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}
void GradeBook::determineClassAverage()
{
	int total;
	int gradeCounter;
	int grade;
	int average;

	total = 0;
	gradeCounter = 1;

	while (gradeCounter <= 10)
	{
		cout << "enter grade: ";
		cin >> grade;
		total = total + grade;
		gradeCounter = gradeCounter + 1;
	}
	average = total / 10;

	cout << "\ntotal of all 10 grades is: " << total << endl;
	cout << "class average is: " << average << endl;
}