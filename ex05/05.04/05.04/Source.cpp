#include <iostream>
using namespace std;

template<typename T>
void shuffle(vector<T>& v, int size)
{
	new n[size];
	for (int i = 0; i < size; i++)
	{
		for (i = 0; i < size - 1; i++)
			srand(time(NULL));
		swap(array[i], array[rand(i + 1)]);
	}
}
