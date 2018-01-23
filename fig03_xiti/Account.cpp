#include<iostream>
#include"Account.h"
using namespace std;

Account::Account(int money)
{
	if (money >= 0)
		balance = money;
	else
	{
		balance = 0;
		cout << "invalid money!" << endl;
	}
}
void Account::credit(int money)
{
	balance = balance + money;
}
void Account::debit(int money)
{
	if (money <= balance)
		balance = balance - money;
	else
		cout << "debit amount exceeded account balance." << endl;
}
int Account::getBalance()
{
	return balance;
}