#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>() {};
	MutantStack<T>(MutantStack const &cpy);
	virtual ~MutantStack() {};
	MutantStack const &operator=(MutantStack const &cpy);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {return this->c.begin(); };
	iterator end() {return this->c.end(); };
};

#endif