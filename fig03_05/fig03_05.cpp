//
#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
public:
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
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "\initial course name is: " << myGradeBook.getCourseName() << endl;

	cout << "please enter the course name: " << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);
	cout << endl;
	myGradeBook.displayMessage();
}