#include "span.hpp"

Span::Span() : N(0) {}
Span::Span(unsigned int const &N) : N(N) {}
Span::~Span() {}

Span::Span(Span const& obj) {
	*this = obj;
}

Span const& Span::operator=(Span const& obj) {
	this->array = obj.array;
	this->N = obj.N;
	return *this;
}

void Span::addNumber(int const &num) {
	if (this->array.size() == N)
		throw VectorFilledException();
	this->array.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin, 
				std::vector<int>::iterator end) {
	if (end - begin + this->array.size() > N)
		throw VectorFilledException();
	array.insert(array.end(), begin, end);
}

void Span::printVector() {
	for (int i = 0; i < this->array.size(); i++)
		std::cout << this->array.at(i) << " ";
	std::cout << std::endl;
}

int Span::shortestSpan() {
	if (this->array.size() <= 1)
		throw TooShortVectorException();
	std::sort(array.begin(), array.end());
	std::vector<int>::iterator it = this->array.begin();
	size_t shortest_span = this->array[1] - this->array[0];
	size_t tmp_span;

	while (it + 1 != this->array.end()) {
		if (shortest_span == 0)
			break;
		tmp_span = *(it + 1) - *it;
		if (tmp_span < shortest_span)
			shortest_span = tmp_span;
		it++;
	}
	return shortest_span;
}

int Span::longestSpan() {
	if (this->array.size() <= 1)
		throw TooShortVectorException();
	std::sort(array.begin(), array.end());
	return (*(this->array.end() - 1) - *this->array.begin());
}

/* exception */
const char* Span::VectorFilledException::what() const throw() {
	return "vector is already filled";
}
const char* Span::TooShortVectorException::what() const throw() {
	return "there are no numbers or only one number in vector";
}