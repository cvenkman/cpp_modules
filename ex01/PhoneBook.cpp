#include "PhoneBook.hpp"

void PhoneBook::menu(std::string cmd) {
	if (cmd == "ADD") 
		addContact();
	else if (cmd == "SEARCH") {
			displaySearch();
	}
	else if (cmd == "EXIT")
		std::exit (EXIT_SUCCESS);
	else
		std::cout << "Command not fount :'(" << std::endl;
}

// adds fields to the contact class
void PhoneBook::addContact() {
	if (this->contacts_count < 8)
		this->contacts_count++;
	std::string str_tmp;

	std::cout << "First name: ";
	getline(std::cin, str_tmp);
	this->phone_book[this->index].setName(str_tmp);
	std::cout << "Last name: ";
	getline(std::cin, str_tmp);
	this->phone_book[this->index].setLastName(str_tmp);
	std::cout << "Nickname: ";
	getline(std::cin, str_tmp);
	this->phone_book[this->index].setNickname(str_tmp);
	std::cout << "Phone number: ";
	getline(std::cin, str_tmp);
	this->phone_book[this->index].setPhone(str_tmp);
	std::cout << "Darkest secret: ";
	getline(std::cin, str_tmp);
	this->phone_book[this->index].setSecret(str_tmp);

	this->index++;
	if (this->index == 8)
		this->index = 0;
}

/** if size of string > 10
 *  display only 9 character's and
 *  last displayable character is replaced by a dot
**/
std::string PhoneBook::shortDisplay(std::string str)
{
	int i = 0;
	if (str.size() > 10) {
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

// display contact's info
void PhoneBook::displaySearch() {
	// display all contact's
	if (this->contacts_count == 0) {
		std::cout << "Empty phone book" << std::endl;
		return ;
	}
	int i = 0;
	while (i <= this->contacts_count - 1) {
		std::cout << std::setw(10) << i + 1 << '|';
		std::cout << std::setw(10) << shortDisplay(this->phone_book[i].getName()) << "|";
		std::cout << std::setw(10) << shortDisplay(this->phone_book[i].getLastName()) << "|";
		std::cout << std::setw(10) << shortDisplay(this->phone_book[i].getNickname()) << std::endl;
		i++;
	}
	//display full info about one contact
	std::string index_tmp;
	std::cout << "Index: ";
	getline(std::cin, index_tmp);
	int index = index_tmp[0] - '0';
	if (index > this->contacts_count || index < 1)
		std::cout << "No such contact exists!" << std::endl;
	else {
		--index;
		std::cout << "First name: " << this->phone_book[index].getName() << std::endl;
		std::cout << "Last name: " << this->phone_book[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->phone_book[index].getNickname() << std::endl;
		std::cout << "Phone number: " << this->phone_book[index].getPhone() << std::endl;
		std::cout << "Darkest secret: " << this->phone_book[index].getSecret() << std::endl;
	}
}
