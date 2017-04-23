#include <string>
#include <vector> 
#include <iostream>
#include <fstream>
using namespace std;

#include "Citizen.h"

#ifndef CITY_H_
#define CITY_H_

class City
{
private:
	string _name;
	int _size;
public:
	string getname;
	int getsize;
//i was just about to delete this city() like i did with all the others. will have to put them all back, yes i am lazy and horrible
	City();
	City(string name, int size);
	Citizen* citizenatindex(int index);
	void addCitizen(Citizen* citizen);
//that pesky favorite color again
	vector <Citizen*> getFavoriteColor(string color);
	int getCitizensForFavoriteColor();
};

#endif CITY_H_