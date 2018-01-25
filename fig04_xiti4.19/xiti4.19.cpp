//Exercise 4.19 
#include<iostream>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	int largest = 0;
	int secLargest;

	while (counter <= 10)
	{
		cout << "please enter sales: ";
		cin >> number;

		if (number > largest)
		{
			secLargest = largest;
			largest = number;
		}
		else if (number > secLargest)
			secLargest = number;
		counter++;
	}

	cout << "largest sales is: " << largest << endl;
	cout << "secLargest sales is: " << secLargest << endl;
}