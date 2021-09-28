#include "BankAccount.h"

BankAccount::BankAccount(string _owner)	
{
	owner = _owner;
	balance = 0;
}

BankAccount::BankAccount(string _owner, int _balance)
{
	owner = _owner;

	if (_balance > 0)
		balance = _balance;
	else
		cout << "You cannot enter a value less than or equal to 0" << endl;
}

std::string BankAccount::GetOwner() const
{
	return owner;
}

int BankAccount::GetBalance() const
{
	return balance;
}

void BankAccount::Deposit(int _amount)
{
	if (_amount > 0)
		balance += _amount;
	else
		cout << "You cannot deposit an amount less than or equal to 0" << endl;
}

void BankAccount::Withdraw(int _amount)
{
	if (_amount > balance || _amount > 0)
	{
		cout << "You cannot withdraw an amount that's 0 or more than the total balance in your account." << endl;
	}
	else
	{
		balance -= _amount;
	}
}