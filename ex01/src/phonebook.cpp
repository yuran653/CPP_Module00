/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:40:38 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/12 15:04:00 by jgoldste         ###   ########.fr       */
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

void	PhoneBook::printLine(int len, char symbol) {
	for (int i = 0; i < len; i++)
			std::cout << symbol;
	std::cout << std::endl;
}

void	PhoneBook::clearInput() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	PhoneBook::printIntro() {
	printLine(51, '-');
	std::cout << "|      Enter one of the following commands:       |" << std::endl;
	printLine(51, '-');
	std::cout << "|               ADD - Add a contact               |" << std::endl
		<< "|       SEARCH - Search a specific contact        |" << std::endl
		<< "|             EXIT - Quit the program             |" << std::endl;
	printLine(51, '-');
	std::cout << "|*** uppercase and lowercase make a difference ***|" << std::endl;
	printLine(51, '-');
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
		return true;
	else if (*int_input < 1 || *int_input > BOOK_CAPACITY)
		return true;
	else
		return false;
}

void	PhoneBook::searchContact(){
	int	int_input;

	if (printPhonebook()){
		while (inputContactIndex(&int_input)) {
			std::cout << RED << WRONG_IDX << CLR_END << std::endl;
			clearInput();
		}
		printContact(int_input - 1);
		clearInput();
	}
}

void	PhoneBook::printWide10Right(const std::string &str){
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::right << str;
}

bool	PhoneBook::printPhonebook() {
	if (contacts[0].getAttribute("first_name").empty()) {
		std::cout << RED << EMPTY << CLR_END << std::endl;
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
			printWide10Right(contacts[i].getAttribute("first_name"));
			std::cout << '|';
			printWide10Right(contacts[i].getAttribute("last_name"));
			std::cout << '|';
			printWide10Right(contacts[i].getAttribute("nickname"));
			std::cout << '|' << std::endl;
		}
		printLine(45, '=');
		return true;
	}
}

void	PhoneBook::printContact(int index) {
	std::cout << "First name: " << contacts[index].getAttribute("first_name") << std::endl;
	std::cout << "Last name: " << contacts[index].getAttribute("last_name") << std::endl;
	std::cout << "Nickname: " << contacts[index].getAttribute("nickname") << std::endl;
	std::cout << "Phone number: " << contacts[index].getAttribute("phone_number") << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getAttribute("darkest_secret") << std::endl;
}
