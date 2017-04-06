#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
using namespace std;

class Account
{
private:
	int id;
	double balance;
	static double annualInterestRate;
	double MonthlyInterestRate;
	string name;
public:
	int getid();
	void setid(int newid);
	double getbalance();
	double setbalance(double newbalance);
	double getrate();
	double setrate(double newrate);
};

#endif
