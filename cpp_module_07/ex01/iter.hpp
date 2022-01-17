#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template <typename T>
void iter(T *array, size_t array_len, void(*function)(T &)) {
	for (size_t i = 0; i < array_len; i++)
		function(array[i]);
};

#endif