#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
private:
	int index;
	int contacts_count;
	Contact	phone_book[8];
public:
	PhoneBook() : index(0), contacts_count(0) {}
	~PhoneBook() {}
	void menu(std::string cmd);
	void addContact();
	void displaySearch();
	std::string shortDisplay(std::string str);
};

#endif