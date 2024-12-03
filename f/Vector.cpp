#include "Vector.h"

void Vector::copyArray(int* originalArray, int endPoint, int* newArray, int newLength)
{
	for (int i = 0; i <= endPoint || i <= newLength; i++)
	{
		newArray[i] = originalArray[i];
	}
}

Vector::Vector(int n)
{
	if (n < 2) { n = 2; }
	this->_elements = new int[n];
	this->_capacity = n;
	this->_resizeFactor = n;
	this->_size = 0;
}

Vector::~Vector()
{
	delete[] this->_elements;
	this->_capacity = 0;
	this->_resizeFactor = 0;
	this->_size = 0;
}

int Vector::size() const
{
	return this->_size;
}

int Vector::capacity() const
{
	return this->_capacity;
}

int Vector::resizeFactor() const
{
	return this->_resizeFactor;
}

bool Vector::empty() const
{
	return (this->_size == 0);
}

void Vector::push_back(const int& val)
{
	if (this->_capacity == this->_size)
	{
		reserve(this->_capacity + 1);
	}
	this->_elements[++this->_size] = val;
}

int Vector::pop_back()
{
	int save;
	if (this->_size > 0)
	{
		save = this->_elements[this->_size];
		this->_elements[this->_size] = 0;
		this->_size--;
		return save;
	}
	cout << "error: pop from empty vector" << endl;
	return -9999;
}

void Vector::reserve(const int n)
{
	if (this->_capacity < n)
	{
		while (this->_capacity < n)
		{
			this->_capacity += this->_resizeFactor;
		}
		int* newElemnets = new int[this->_capacity];
		copyArray(this->_elements, this->_size, newElemnets, this->_capacity);
		delete[] this->_elements;
		this->_elements = newElemnets;
	}
}

void Vector::resize(const int n)
{
	if (n < this->_capacity)
	{
		reserve(n);
	}
	if (n > this->_capacity)
	{
		this->_capacity = n;
		int* newElemnets = new int[n];
		copyArray(this->_elements, this->_size, newElemnets, this->_capacity);
		delete[] this->_elements;
		this->_elements = newElemnets;
	}
}

void Vector::assign(const int val)
{
	int i = 0;
	for (i; i <= this->_size; i++)
	{
		this->_elements[i] = val;
	}
}

void Vector::resize(const int n, const int& val)
{
	int size = this->_size + 1;
	resize(n);
	for (size; size < this->_capacity; size++) 
	{
		this->_elements[size] = val;
	}
}


