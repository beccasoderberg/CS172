#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


int main()
{
	//multiple years, that wasn't going to happen
	ifstream input("Babynameranking2010.txt");
	//i used arrays to go through the rank, names & popularity as well as variables to export from search
	int rank[1000];
	int r;
	string boyname[1000], girlname[1000];
	char gender;
	int boyfreq[1000], girlfreq[1000];
	string term;
	cin >> term;
	bool found;
	int pop;
	cout << "Enter gender: ";
	cin >> gender;
	cout << "Enter name: ";
	cin >> term;
	for (int i = 0; i < 1000; i++)
	{
		//not very efficient, here both m & f name arrays are searched before gender is decided 
		input >> rank[i] >> boyname[i] >> boyfreq[i] >> girlname[i] >> girlfreq[i];
		if (gender = 'M' | gender = 'm')
		{
			if (boyname[i] = term)
			{
				found = true;
				pop = boyfreq[i];
				r = rank[i];
			}
		}
		else if (gender = 'F' | gender = 'f')
		{
			if (girlname[i] = term)
			{
				found = true;
				pop = girlfreq[i];
				r = rank[i];
			}
		}
	}
	//all that remains is a simple bool in addition to rank
	if (found == true)
	{
		cout << term << "is ranked " << r << "in 2010.";
	}
	else if (found == false)
	{
		cout << "The name " << term << "is not ranked in 2010.";
	}
	input.close();
}




