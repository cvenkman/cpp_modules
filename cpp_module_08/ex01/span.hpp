#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
	std::vector<int> array;
	unsigned int N;

public:
	Span();
	Span(unsigned int const &N);
	Span(Span const& obj);
	Span const& operator=(Span const& obj);
	~Span();
	void addNumber(int const &num);
	void addNumber(std::vector<int>::iterator begin, 
					std::vector<int>::iterator end);
	void printVector();
	int shortestSpan();
	int longestSpan();

	class VectorFilledException : public std::exception {
	public:
		VectorFilledException() {};
		~VectorFilledException() throw() {};
		const char* what() const throw();
	};
	class TooShortVectorException : public std::exception {
	public:
		TooShortVectorException() {};
		~TooShortVectorException() throw() {};
		const char* what() const throw();
	};
};

#endif