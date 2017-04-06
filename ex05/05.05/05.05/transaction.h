#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <string>

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
	Transaction(Date date, char type, double amount, double balance, string description);
	double getAmount() const;
	void printTransaction();
	double getBalance();
	
};

#endif 
