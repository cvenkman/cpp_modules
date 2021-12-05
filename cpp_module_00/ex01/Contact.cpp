#include "Contact.hpp"

std::string Contact::getName() {
	return this->first_name;
}
void Contact::setName(std::string name) {
	this->first_name = name;
}

std::string Contact::getLastName() {
	return this->last_name;
}
void Contact::setLastName(std::string last_name) {
	this->last_name = last_name;
}

std::string Contact::getNickname() {
	return this->nickname;
}
void Contact::setNickname(std::string nick) {
	this->nickname = nick;
}

std::string Contact::getPhone() {
	return this->phone_number;
}
void Contact::setPhone(std::string phone) {
	this->phone_number = phone;
}

std::string Contact::getSecret() {
	return this->darkest_secret;
}
void Contact::setSecret(std::string secret) {
	this->darkest_secret = secret;
}
