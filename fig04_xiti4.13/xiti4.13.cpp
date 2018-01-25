//Exercise 4.13
#include<iostream>
using namespace std;

int main()
{
	double miles;
	double gallons;
	double mpg;
	double totalMiles=0;
	double totalGallons=0;
	double totalMpg;
	
	cout << "enter miles driven(-1 to quit): ";
	cin >> miles;
	cout << fixed;//i don't known why did so.
	while (miles != -1)
	{
		cout << "enter gallons used: ";
		cin >> gallons;
		mpg = miles / gallons;
		totalMiles += miles;
		totalGallons += gallons;
		totalMpg = totalMiles / totalGallons;

		cout << "mpg this tankful: " << mpg << endl;
		cout << "total mpg: " << totalMpg << endl;
		cout << endl;

		cout << "enter miles driven(-1 to quit): ";
		cin >> miles;
	}
}