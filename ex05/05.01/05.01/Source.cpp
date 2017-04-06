#include <iostream>
using namespace std;

template<typename T>
T search(T term, const T array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (term == array[i])
			return i;
	}
	return -1;
}
