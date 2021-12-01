#ifndef CONTACT_HPP
#define CONTACT_HPP

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

	std::string getName() {return this->first_name; }
	void setName(std::string name) {this->first_name = name; }

	std::string getLastName() {return this->last_name; }
	void setLastName(std::string last_name) {this->last_name = last_name; }

	std::string getNickname() {return this->nickname; }
	void setNickname(std::string nick) {this->nickname = nick; }

	std::string getPhone() {return this->phone_number; }
	void setPhone(std::string phone) {this->phone_number = phone; }

	std::string getSecret() {return this->darkest_secret; }
	void setSecret(std::string secret) {this->darkest_secret = secret; }
};

#endif