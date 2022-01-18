#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T>
typename T::iterator easyfind(T &first, int second) {
	typename T::iterator it;
	it = std::find(first.begin(), first.end(), second);
	if (it == first.end())
		throw std::exception();
	return it;
}

#endif