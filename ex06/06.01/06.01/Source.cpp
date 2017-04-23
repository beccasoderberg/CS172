#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//select file location for output
	ofstream txt;
	txt.open("rand.txt");
	srand(NULL);
	//output 100 random integers 
	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 100;
		txt << num << " ";
	}
	txt.close();
}
