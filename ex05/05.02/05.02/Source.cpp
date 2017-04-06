#include <iostream>
using namespace std;

template <typename T>
bool isSorted(const T list[], int size, int count)
{
	for (int i = 0; i < size; i++)
	{
		if (list[i] < list[i + 1])
			count++;
	}
	if (count == size)
		return true;
	else return false;
}