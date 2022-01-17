#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"

template <class T>
class Array {
private:
	T *array;
	size_t array_size;

public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(Array const& obj);
	Array& operator=(Array const& obj);
	size_t const size() const;
	T& operator[](int const index) const;
};


template <class T>
Array<T>::Array() : array_size(0), array(NULL) {};

template <class T>
Array<T>::Array(unsigned int n) : array_size(n) {
	if (n == 0)
		Array();
	array = new T[n]();
};

template <class T>
Array<T>::~Array() {
	delete[] this->array;
};

template <class T>
Array<T>::Array(Array<T> const& obj) {
	*this = obj;
}

template <class T>
Array<T>& Array<T>::operator= (Array<T> const& obj) {
	if (this != &obj) {
		delete[] this->array;
		this->array = new T[obj.array_size]();
		this->array_size = obj.array_size;
		for (int i = 0; i < array_size; i++)
			this->array[i] = obj.array[i];
	}
	return *this;
}

template <class T>
size_t const Array<T>::size() const {return this->array_size; };

template <class T>
T& Array<T>::operator[] (int const i) const {
	if (i < 0 || i >= this->array_size)
		throw std::exception();
	return this->array[i];
}

#endif