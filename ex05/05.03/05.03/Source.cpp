#include <iostream>
using namespace std;
#include "vector.h"

template <typename T>
void Vector<T>::push_back(T new)
{
	for (int i = 0; i < size + 1; i++)
		array[i] = array[i + 1]
		size = size + 1;
	array[1] = new;
}

template <typename T>
void Vector<T>::pop_back()
{
	size--;
}

template <typename T>
int Vector<T>::size() const
{
	for (int i = 0; i < size; i++)
		i++;
	return i;
}

template <typename T>
int Vector<T>::at(T num) const
{
	return array[num];
}

template <typename T>
bool Vector<T>::empty() const
{
	if (size == 0)
		return true;
}

template <typename T>
void Vector<T>::clear()
{
	delete[] array;
	array = new string[capacity];
	size = 0;
}

template <typename T>
void Vector<T>::swap(T loc, vector)
{
	v[t] = vector[t];
	vector[t] = v[t];
}
