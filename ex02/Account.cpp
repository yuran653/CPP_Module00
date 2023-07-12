/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:47:29 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/12 18:16:50 by jgoldste         ###   ########.fr       */
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
	std::cout << ']' << std::endl;
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

void Account::displayAccountsInfos() {

}

void Account::makeDeposit(int deposit) {

}

bool Account::makeWithdrawal(int withdrawal) {

}

int Account::checkAmount() const {

}

void Account::displayStatus() const {

}