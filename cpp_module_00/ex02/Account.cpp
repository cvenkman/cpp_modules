#include <iostream>
#include <string>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

// create account
Account::Account(int initial_deposit) {
	_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

// dispaly msg about delete account
Account::~Account() {
	if (this->_accountIndex == 7)
		std::cout << std::endl;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	this->_accountIndex--;
}

int Account::checkAmount(void) const {
	return this->_amount;
}

//display time
void Account::_displayTimestamp(void) {
	std::time_t time = std::time(nullptr);
	std::tm* now = std::localtime(&time);
	if (!now)
		std::exit (EXIT_FAILURE);
	std::cout << std::setfill('0') << '[' << now->tm_year + 1900;
	std::cout << std::setw(2) << now->tm_mon + 1;
	std::cout << std::setw(2) << now->tm_mday << '_';
	std::cout << std::setw(2) << now->tm_hour;
	std::cout << std::setw(2) << now->tm_min;
	std::cout << std::setw(2) << now->tm_sec << ']' << ' ';
}

// display info about all account's in one line
void Account::displayAccountsInfos(void) {
	std::cout << std::endl;
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";"
	<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

// disolay all info about account
void Account::displayStatus(void) const {
	if (this->_accountIndex == 0)
		std::cout << std::endl;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";"
	<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	//display info about amount and deposit
	if (this->_accountIndex == 0)
		std::cout << std::endl;
	_displayTimestamp();
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";"
	<< "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
	//display info about amount, deposit and withdrawal
	if (this->_accountIndex == 0)
		std::cout << std::endl;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal < 0) {
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_totalAmount -= withdrawal;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}
