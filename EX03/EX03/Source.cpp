#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//9.4
class MyPoint
{
public:
	double x, y;
	MyPoint()
	{
		x = 0, y = 0;
	}
	MyPoint(double newx, double newy)
	{
		x = newx, y = newy;
	}
	double getx()
	{
		return x;
	}
	double gety()
	{
		return y;
	}
	double distance(MyPoint P)
	{
		double horiz = x - P.getx();
		double vert = y - P.gety();
		return sqrt(horiz*horiz + vert*vert);
	}
};
//9.9
class LinearEquation
{
private:
	double a, b, c, d, e, f, x, y;
public:
	LinearEquation(double a, double b, double c, double d, double e, double f)
	{
		a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	}
	double geta()
	{
		return a;
	}
	double getb()
	{
		return b;
	}
	double getc()
	{
		return c;
	}
	double getd()
	{
		return d;
	}
	double gete()
	{
		return e;
	}
	double getf()
	{
		return f;
	}
	bool isSolvable(LinearEquation X)
	{
		if (a*d - b*c != 0)
			return true;
	}
	double getX()
	{
		return (e*d - b*f) / (a*d - b*c);
	}
	double getY()
	{
		return (a*f - e*c) / (a*d - b*c);
	}

};
//9.10
double Intersection()
{
	double x1, x2, x3, x4, y1, y2, y3, y4 = 0;
	cout << "Endpoints of first line segment: " << endl;
	cout << "1. X1: ";
	cin >> x1;
	cout << setw(7) << "Y1: ";
	cin >> y1;
	cout << endl << "2. X2: ";
	cin >> x2;
	cout << setw(7) << "Y2: ";
	cin >> y2;
	cout << "Endpoints of second line segment: " << endl;
	cout << endl << "1. X3: ";
	cin >> x3;
	cout << setw(7) << "Y3: ";
	cin >> y3;
	cout << endl << "2. X4: ";
	cin >> x4;
	cout << setw(7) << "Y4: ";
	cin >> y4;

	double a = y1 - y2;
	double b = x1 - x2;
	double c = y3 - y4;
	double d = x3 - x4;
	double e = (y1 - y2) * x1 + (x1 - x2) * y1;
	double f = (y3 - y4) * x1 + (x3 - x4) * y1;

	LinearEquation(a, b, c, d, e, f);


};


//10.4
string sort(string &s)
{
	for (int run = 0; run < s.size(); run++)
	{
		char min = s[run];
		char index = s[run];
		for (int count = run + 1; count < s.size(); count++)
		{
			if (min > s[count])
			{
				min = s[count];
				index = count;
			}
		}
		if (index != run)
		{
			s[index] = s[run];
			s[run] = min;
		}
	}

};
//10.10
class MyInteger
{
private:
	int value;
public:
	MyInteger(int newvalue)
	{
		value = newvalue;
	}
	int getValue() const
	{
		return value;
	}
	bool isEven(int)
	{
		if (value % 2 == 0)
			return true;
	}
	bool isOdd(int)
	{
		if (value % 2 != 0)
			return true;
	}
	bool isPrime(int)
	{
		return true;
		for (int count = 2; count < value; count++)
		{
			if (value % count == 0)
				return false;
		}
	}
	static bool isEven(MyInteger J)
	{
		if (J.getValue() % 2 == 0)
			return true;
	}
	static bool isOdd(MyInteger J)
	{
		if (J.getValue % 2 != 0)
			return true;
	}
	static bool isPrime(MyInteger J)
	{
		return true;
		for (int count = 2; count < J.getValue; count++)
		{
			if (J.getValue % count == 0)
				return false;
		}
	}
	static bool isEven(const MyInteger& M)
	{
		if (M.getValue % 2 == 0)
			return true;
	}
	static bool isOdd(const MyInteger& M)
	{
		if (M.getValue % 2 != 0)
			return true;
	}
	static bool isPrime(const MyInteger& M)
	{
		return true;
		for (int count = 2; count < M.getValue; count++)
		{
			if (M.getValue % count == 0)
				return false;
		}
	}
	const int equals(int)
	{
		if (getValue() == value)
			return true;
	}
	const int equals(const MyInteger& I)
	{
		if (getValue() == I.getValue())
			return true;
	}
	static int parseInt(const string& S)
	{
		return S.length;
	}
};


