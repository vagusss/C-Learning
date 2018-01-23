#include<iostream>
#include"Account.h"
using namespace std;

int main()
{
	int initialBalance1;
	int initialBalance2;

	cout << "please enter two initial balance: " << endl;
	cin >> initialBalance1 >> initialBalance2;

	Account account1(initialBalance1);
	Account account2(initialBalance2);

	cout << "account1'balance is: " << account1.getBalance() << endl;
	account1.credit(10);
	cout << "account1'balance is: " << account1.getBalance() << endl;

	account1.debit(5);
	cout << "account1'balance is: " << account1.getBalance() << endl;
}