#include<iostream>
#include"GradeBook.h"
using namespace std;

int main()
{
	GradeBook mygradeBook("c++ program");
	mygradeBook.displayMessage();
	mygradeBook.determineClassAverage();
}