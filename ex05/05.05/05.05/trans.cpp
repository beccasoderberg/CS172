#include <string>
#include <iostream>
#include "Date.h"

using namespace std;

class Transaction
{
private:
	Date _date;
	char _type;
	double _amount;
	double _balance;
	string _description;
public:

	double getAmount()
	{
		return _amount;
	}
	double getBalance()
	{
		return _balance;
	}
	void printTransaction()
	{
		if (getAmount() >= 0)
			cout << getAmount << " deposited.";
		else if (getAmount() < 0)
			cout << getAmount << " withdrawn.";
	}

};
 
