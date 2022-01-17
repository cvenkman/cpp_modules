#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>

template<typename T>
typename T::iterator easyfind(T first, int second) {
	typename T::iterator it;
	// end_it = first.end();
	it = std::find(first.begin(), first.end(), second);
	std::cout << *it << std::endl;
	it++;
	std::cout << *it << std::endl;
	if (it == first.end())
		throw std::exception();
	return it;
}

#endif