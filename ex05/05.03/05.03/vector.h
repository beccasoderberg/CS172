#ifndef DATE_H_
#define DATE_H_



template <typename T>
class Vector
{
private:
	int size;
	T* array;
	int capacity;

public:
	Vector();
	Vector(const Vector);
	size() const;
	at() const;
	empty() const;
	clear() const;
	swap() const;
};

#endif

