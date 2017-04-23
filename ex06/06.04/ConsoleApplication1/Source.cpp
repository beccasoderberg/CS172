#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;

//well look here i'm making a good old circle class
class Circle
{
private:
	double radius;

public:
	Circle()
	{
		radius = 0;
	}
	double getRadius()
	{
		return radius;
	}
	void setradius(double newradius)
	{
		radius = newradius;
	}
	Circle c1()
	{
		radius = 3;
	}
	Circle c2()
	{
		radius = 9;
	}
	//this is where i started to get lost
	int compareto(c1.radius & c2.radius)
	{
		int temp = c1.radius - c2.radius;
		if (temp < 0)
			return -1;
		else if (temp == 0)
			return 0;
		else
			return 1;
	}
	//at this point i have no idea what i'm doing
	bool operator < (const Circle&  c1, const Circle& c2)
	{
		return radius.c1.compareto(radius.c2) < 0;
	}
	bool operator <= (const Circle&  c1, const Circle& c2)
	{
		return radius.c1.compareto(radius.c2) <= 0;
	}
	bool operator == (const Circle&  c1, const Circle& c2)
	{
		return radius.c1.compareto(radius.c2) == 0;
	}
	bool operator > (const Circle&  c1, const Circle& c2)
	{
		return radius.c1.compareto(radius.c2) > 0;
	}
	bool operator >= (const Circle&  c1, const Circle& c2)
	{
		return radius.c1.compareto(radius.c2) >= 0;
	}

};