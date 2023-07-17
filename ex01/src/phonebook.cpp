/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:40:38 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/18 00:23:53 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
	index = 0;
	printIntro();
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::addContact() {
	contacts[index].createContact();
	index ++;
	if (index == BOOK_CAPACITY)
		index = 0;
}

bool	PhoneBook::inputContactIndex(int *int_input) {
	std::cout << "Enter index of the contact to display: ";	
	std::cin >> *int_input;
	if (std::cin.fail())
		return false;
	else if (*int_input < 1 || *int_input > BOOK_CAPACITY)
		return false;
	else
		return true;
}

void	PhoneBook::searchContact() {
	int	int_input;

	if (printPhonebook()) {
		while (inputContactIndex(&int_input) == false) {
			std::cout << RED WRONG_IDX CLR_END << std::endl;
			clearInput();
		}
		printContact(int_input - 1);
		clearInput();
	}
}

bool	PhoneBook::printPhonebook() {
	if (contacts[0].getFirstName().empty()) {
		std::cout << RED EMPTY_BOOK CLR_END << std::endl;
		return false;
	}
	else {
		printLine(45, '=');
		std::cout << '|' << "   Index  " << '|' << "First name" << '|'
			<< " Last name" << '|' << " Nickname " << '|' << std::endl;
		printLine(45, '=');
		for (int i = 0; i < BOOK_CAPACITY; i++) {
			std::cout << '|';
			printWide10Right(std::to_string(i + 1));
			std::cout << '|';
			printWide10Right(contacts[i].getFirstName());
			std::cout << '|';
			printWide10Right(contacts[i].getLastName());
			std::cout << '|';
			printWide10Right(contacts[i].getNickname());
			std::cout << '|' << std::endl;
		}
		printLine(45, '=');
		return true;
	}
}

void	PhoneBook::printContact(int index) {
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl
		<< "Last name: " << contacts[index].getLastName() << std::endl
		<< "Nickname: " << contacts[index].getNickname() << std::endl
		<< "Phone number: " << contacts[index].getPhoneNumber() << std::endl
		<< "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}
