#include "Citizen.h"
#include "City.h"
#include "Citizen.cpp"

class City
{
private:
	string _name;
	int _size;
public:

		int populationSize()
	{
		return _size;
	}

	City(string name, int size)
	{
		ifstream input("citizen.txt");
			if (input.is_open)
				string name, size;
//compiler doesn't like these identifiers. not sure why. 
//at first i just copy & pasted stuff off your github and this worked, so i must have changed something.
				while (input >> id >> first >> last >> color);
				{
					Citizen* c = new Citizen(id, first, last, color);
//i keep using citizenList like this everywhere and it is super wrong. don't know if pointer difficulties or what.
					citizenList.pushback(c);
				}
	}
	void getCitizenWithId(int id)
	{
//i don't know if citizenlist.size is even close to being right. is this due to the citizenList problem?
		for (int i = 0; i < citizenList.size(); i++)
		{
//same question with citizenList.id. 
			if(citizenList.id[i] = id)
				return citizenList[i];
		}
	}
	Citizen* citizenatindex(int index)
	{
		if (index >= 0 && index < citizenList.size())
		{
			return citizenList[index];
		}
	}
	void addCitizen(Citizen* citizen)
	{
		Citizen* c = new Citizen(citizen);
		citizenList.push_back(c);
	}
//i need to put in getCitizensForFavoriteColor() and I don't even know where to begin???

//i feel like i should definitely know how to define this vector. 
	vector<Citizen*> citizenList();
//i also need to define this one. here i am even more hopelessly lost, oops.
	vector <Citizen*> getfavoritecolor(string color);
};