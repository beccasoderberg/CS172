#include "Citizen.h"

class Citizen
{
private:
	int _id;
	string _first;
	string _last;
	string _color;

public:
	int getId()
	{
		return _id;
	}
	string getFirstName()
	{
		return _first;
	}
	string getLastName()
	{
		return _last;
	}
	string getFavoriteColor()
	{
		return _color;
	}
	void setFavoriteColor(string color)
	{
		_color = color;
	}
	Citizen(int id, string first, string last, string color)
	{
		_id = id;
//i thought this was a mislabeling problem. maybe not. is it???
		_first = FirstName;
		_last = LastName;
		_color = color;
	}
	Citizen(Citizen* c)
	{
			_id = c->getId();
			_first = c->getFirstName();
			_last = c->getLastName();
			_color = c->getFavoriteColor();
	}
};