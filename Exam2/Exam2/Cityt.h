#ifndef CITY_H_
#define CITY_H_
#include <string>
#include <vector>

#include "Citizen.h"

using namespace std;

class City
{
private:
	string _name;
	int _size;

public:
	City(string name);

	~City();

	string getCityName();

	int getpopulationsize();

	Citizen* getCitizenAtIndex(int index);

	void addCitizen(Citizen* citizen);

	vector<Citizen*> getCitizensForFavoriteColor(string color);


};



#endif CITY_H_
