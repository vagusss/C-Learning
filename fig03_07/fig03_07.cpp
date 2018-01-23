//
#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string name)
	{
		setCourseName(name);
	}
	void setCourseName(string name)
	{
		courseName = name;
	}
	string getCourseName()
	{
		return courseName;
	}
	void displayMessage()
	{
		cout << "welcome to the grade book for\n" << getCourseName() << "!" << endl;
	}
private:
	string courseName;
};
//
int main()
{
	GradeBook gradeBook("c++ program");
	cout << "gradebook created for course: " << gradeBook.getCourseName() << endl;
}