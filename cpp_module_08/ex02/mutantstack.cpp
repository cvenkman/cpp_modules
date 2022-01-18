#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &cpy) :
	std::stack<T>(cpy) {};

template <typename T>
MutantStack<T> const &MutantStack<T>::operator=(MutantStack const &cpy)
{
	if (this != &cpy)
		std::stack<T>::operator=(cpy);
	return *this;
}
