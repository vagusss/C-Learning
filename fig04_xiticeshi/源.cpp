#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double x = 10;
	double y = 2;
	double z;

	z = x/y;
	cout << setprecision(3) <<fixed<< z << endl;
}