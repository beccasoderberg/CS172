#include <iostream>
#include <ctime>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;

void ex01()
{
	//1a
	bool hasPassedTest = true;
	//1b
	int x, y;
	srand(time(0));
	x = rand(), y = rand();
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
	if (x >= y)
		cout << "X is greater than or equal to y." << endl;
	else
		cout << "X is not greater than or equal to y." << endl;
	//1c
	int numberOfShares;
	cout << "Enter number of shares: " << endl;
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "There are less than 100 shares." << endl;
	else
		cout << "There are more than 100 shares." << endl;
	//1d
	int boxwidth, bookwidth;
	cout << "Enter box width: ";
	cin >> boxwidth;
	cout << endl << "Enter book width: ";
	cin >> bookwidth;
	if (boxwidth % bookwidth == 0)
		cout << "\nBox width is evenly divisible by book width." << endl;
	else
		cout << "\nBox width is not evenly divisible by book width." << endl;
	//1e
	int shelflife, temp, final;
	cout << "Enter shelf life of box of chocolates: ";
	cin >> shelflife;
	cout << endl << "Enter outside temperature: ";
	cin >> temp;
	if (temp > 90)
		final = shelflife - 4;
	else
		final = shelflife;
	cout << "Shelf life with regard to temperature is " << final << endl;

}

void ex02()
{
	//2a
	int length, height, hypotenuse;
	cout << "Enter length of right triangle: ";
	cin >> length;
	cout << endl << "Enter height of right triangle: ";
	cin >> height;
	hypotenuse = sqrt(pow(length, 2) + pow(height, 2));
	cout << endl << "Length of hypotenuse is " << hypotenuse << endl;
	//2b
	char response;
	cout << "Enter y for yes or n for no: ";
	cin >> response;
	if (response == 'y')
		cout << endl << "yes" << endl;
	else if (response == 'n')
		cout << endl << "no" << endl;
	else
		cout << endl << "Invalid response";
	//2c
	char tab = 9;
	cout << tab;
	//2d
	char mailingAddress[1000];
	cout << "Enter your mailing address: ";
	for (int q = 0; q < 1000; q++)
	{
		cin >> mailingAddress[q];
	}
	cout << endl << mailingAddress << endl;
	//2e
	string st();
}

int doubleinteger(int a)
{
	int d = 2 * a;
	return d;
}

int add(int u, int v)
{
	int w = u + v;
	return w;
}

int addone(int &q)
{
	int n = q + 1;
	return n;
}

void ex03()
{
	//3a
	int num = 0;
	while (num < 1 || num > 10)
	{
		cout << "Enter a number between 1 and 10: ";
		cin >> num;
	}
	//3b
	int sum;
	for (int count = 1; count < num; count++)
	{
		int cube = (count*count*count);
		sum = sum + cube;
	}
	cout << endl << sum;
	//3c
	int count2 = 0;
	do
	{
		cout << "*";
		count2++;
	} while (count2 < num);
	//3d
	for (int even = 0; even <= 40; even++)
	{
		if (even % 2 == 0)
			cout << even << setw(4);
	}
	//3e
	cout << endl << "Integer is " << num << endl;
	cout << "Doubled integer is " << doubleinteger(num) << endl;
	//3f
	int s = rand(), t = rand();
	add(s, t);
	//3g
	int r = rand() % 50;
	addone(r);
}

void displaylist(int list[3])
{
	for (int i = 0; i < 3; i++)
	{
		cout << list[i];
	}
}

void displaya(int a[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}
}
void ex04()
{
	//4a
	const int e = 3;
	cout << "Enter 3 numbers: ";
	for (int count = 0; count < e; count++)
		//4b
		int sum = 0;
	int product = 1;
	for (int count = 0; count < e; count++)
		cout << "Product is " << product << endl;
	//4c
	int list[3] = { 1, 2, 3 };
	displaylist(list);
	//4d
	int a[5] = { 1, 2, 3, 4, 5 };
	displaya(a);
}

int main()
{
	ex01();
	ex02();
	ex03();
	ex04();
}

