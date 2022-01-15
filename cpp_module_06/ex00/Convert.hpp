#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <math.h> 

class Convert {
private:
	std::string const string_value;
	double double_value;
	bool isNumber(std::string const& str);
	bool isNanOrInf(std::string const& str);
	void convertToChar();
	void convertToInt();
	void convertToFloat();
	void convertToDouble();

public:
	Convert();
	Convert(std::string const& string_value);
	Convert(const Convert& obj);
	~Convert();
	Convert& operator= (const Convert& obj);
	void convert();

	class WrongArgumentException : public std::exception {
	private:
		std::string error_msg;
	public:
		WrongArgumentException(std::string const& error_msg);
		~WrongArgumentException() throw();
		const char* what() const throw();
	};
};

#endif
