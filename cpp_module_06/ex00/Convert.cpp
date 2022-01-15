#include "Convert.hpp"

Convert::Convert() {}
Convert::~Convert() {}

Convert::Convert(std::string const& _string_value) :
	string_value(_string_value) {
	if (!isNumber(string_value)
		&& !isNanOrInf(string_value))
		throw WrongArgumentException("wrong argument: not a number");
	this->double_value = atof(_string_value.c_str());
}

Convert::Convert(const Convert &obj) {*this = obj; }

Convert& Convert::operator= (const Convert& obj) {
	const_cast<std::string &>(this->string_value) = obj.string_value;
	return *this;
}

bool Convert::isNumber(const std::string& str)
{
    std::string::const_iterator i = str.begin();
	unsigned short int dot_number = 0;
	bool is_f = false;
	if (str.size() > 1 && (str[0] == '+' || str[0] == '-'))
		i++;
	if (str[str.size() - 1] == 'f')
		is_f = true;
    while (i != str.end() && (std::isdigit(*i)
		|| *i == '.' || (is_f && *i == 'f'))) {
		if (str[str.size() - 1] == 'f') {
			i++;
			continue;
		}
		if (*i == '.') {
			dot_number++;
			i++;
			continue;
		}
		if (dot_number > 1)
			throw WrongArgumentException("wrong argument");
		i++;
	}
    return !str.empty() && i == str.end();
}

bool Convert::isNanOrInf(std::string const& str) {
	if (str == "nan" || str == "nanf"
		|| str == "inf" || str == "inff"
		|| str == "-inf" || str == "+inf"
		|| str == "-inff" || str == "+inff")
		return true;
	return false;
}

void Convert::convert() {
	this->convertToChar();
	this->convertToInt();
	this->convertToFloat();
	this->convertToDouble();
}

void Convert::convertToChar() {
	std::cout << "char: ";
	if (isNanOrInf(this->string_value))
		std::cout << "impossible\n";
	else if (this->double_value < 32 || this->double_value > 126)
		std::cout << "Non displayable\n";
	else {
		char _ = static_cast<char>(this->double_value);
		std::cout << _ << std::endl;
	}
}

void Convert::convertToInt() {
	std::cout << "int: ";
	if (this->double_value > INT_MAX
		|| this->double_value < INT_MIN
		|| isNanOrInf(this->string_value))
		std::cout << "impossible\n";
	else {
		int _ = static_cast<int>(this->double_value);
		std::cout << _ << std::endl;
	}
}

void Convert::convertToFloat() {
	std::cout << "float: " << this->double_value;
	if (this->double_value == floor(this->double_value)
		&& !isNanOrInf(this->string_value))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void Convert::convertToDouble() {
	std::cout << "double: " << this->double_value;
	if (this->double_value == floor(this->double_value)
		&& !isNanOrInf(this->string_value))
		std::cout << ".0";
	std::cout << std::endl;
}

// Convert::WrongArgumentException class
Convert::WrongArgumentException::WrongArgumentException(std::string const& _error_msg) :
	error_msg(_error_msg) {}
Convert::WrongArgumentException::~WrongArgumentException() throw() {}

const char* Convert::WrongArgumentException::what() const throw() {
	return this->error_msg.c_str();
}