#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact() {}
	~Contact() {}

	std::string getName();
	void setName(std::string name);

	std::string getLastName();
	void setLastName(std::string last_name);

	std::string getNickname();
	void setNickname(std::string nick);

	std::string getPhone();
	void setPhone(std::string phone);

	std::string getSecret();
	void setSecret(std::string secret);
};

#endif