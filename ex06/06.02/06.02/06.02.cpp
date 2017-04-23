#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//select file to be read
	ifstream input("chars.txt");
	char letter;
	int total = 0;
	//count characters within default range of 1000 characters
	for (int i = 0; i < 1000; i++)
	{
		input >> letter;
		//check for end of file before total incremented
		if (input.eof()) break;
		total++;
	}
	cout << total;
	input.close();
}

