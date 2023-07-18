/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:47:29 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/19 03:51:30 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount= 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp() {
	time_t now = time(NULL);

	tm *ltm = localtime(&now);
	std::cout << '[';
	std::cout << 1900 + ltm->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << std::right << 1 + ltm->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << std::right << ltm->tm_mday;
	std::cout << '_';
	std::cout << std::setw(2) << std::setfill('0') << std::right << ltm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << std::right << ltm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << std::right << ltm->tm_sec;
	std::cout << "] ";
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount = _totalAmount + _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"
		<< std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"
		<< std::endl;
}

int Account::getNbAccounts() {
	return _nbAccounts;
}

int Account::getTotalAmount() {
	return _totalAmount;
}
 
int Account::getNbDeposits() {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

// [19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0
void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

// [19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	_nbDeposits++;
	_totalNbDeposits ++;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits << std::endl;
}

// [19920104_091532] index:5;p_amount:23;withdrawal:refused
// [19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount < withdrawal) {
		std::cout << "refused" << std::endl;
		return false;
	}
	else {
		_amount = _amount - withdrawal;
		_totalAmount = _totalAmount - withdrawal;
		_nbWithdrawals ++;
		_totalNbWithdrawals ++;
		std::cout << withdrawal << ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

int Account::checkAmount() const {
	return 0;
}

