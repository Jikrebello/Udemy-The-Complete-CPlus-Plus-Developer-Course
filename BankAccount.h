#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
	public:
		BankAccount(string _owner);
		BankAccount(string _owner, int _balance);
		string GetOwner()const;
		int GetBalance() const;
		void Deposit(int _amount);
		void Withdraw(int _amount);
	
	private:
		string owner;
		int balance;
};

