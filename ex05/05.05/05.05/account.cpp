#include <iostream>
#include <vector>
using namespace std;

#include "transaction.h"

class Account
{
private:
	vector<Transaction> transactions;
	int id;
	double balance;
	double MonthlyInterestRate;
	string name;
public:
	static double annualInterestRate;
	int getid()
	{
		return id;
	}
	void setid(int newid)
	{
		id = newid;
	}
	double getbalance()
	{
		return balance;
	}
	double setbalance(double newbalance)
	{
		balance = newbalance;
	}
	double getrate()
	{
		return annualInterestRate;
	}
	double setrate(double newrate)
	{
		annualInterestRate = newrate;
	}
	Account()
	{
		id = 0;
		balance = 0;
		annualInterestRate = 0;
	}
	double getMonthlyInterestRate()
	{
		return MonthlyInterestRate;
	}
	void withdraw(Transaction t)
	{
		balance -= (t.getBalance() - t.getAmount());
		t.printTransaction();
		transactions.push_back(t);
	}
	void deposit(Transaction t)
	{
		balance += (t.getBalance() + t.getAmount());
		t.printTransaction();
		transactions.push_back(t);
	}
	Account(string xname, int xid, double xbalance)
	{
		name = xname;
		id = xid;
		balance = xbalance;
	}
};
