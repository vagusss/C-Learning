//xiti4.24
#include<iostream>
using namespace std;

int main()
{
	//part A
	int x = 5;
	int y = 8;

	if (y == 8)
		if (x == 5)
			cout << "@" << endl;
		else
			cout << "#" << endl;
	cout << "$" << endl;
	cout << "&" << endl;
	cout << endl;

	//part B
	if (y == 8)
		if (x == 5)
			cout << "@" << endl;
		else
		{
			cout << "#" << endl;
			cout << "$" << endl;
			cout << "&" << endl;
		}
	cout << endl;

	//part C
	if (y == 8)
		if (x == 5)
			cout << "@" << endl;
		else
		{
			cout << "#" << endl;
			cout << "$" << endl;
		}
	cout << "&" << endl;
	cout << endl;

	//part D
	x = 5;
	y = 7;

	if (y == 8)
	{
		if (x == 5)
			cout << "@" << endl;
	}
	else
		cout << "#" << endl;
	cout << "$" << endl;
	cout << "&" << endl;
	cout << endl;
}