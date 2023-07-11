/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:40:38 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/11 23:36:18 by jgoldste         ###   ########.fr       */
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
	if (index == 8)
		index = 0;
}

void	PhoneBook::searchContact(){
	// std::string	str_input;
	int			int_input;

	if (printPhonebook()){
		std::cout << "Enter index of the contact to display: ";
		while (std::cin.fail() >> int_input) {
			std::cout << RED << WRONG_IDX << CLR_END << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (int_input >= 1 && int_input <= 8)
				printContact(int_input - 1);
	
	}
	
	// if (printPhonebook()){
	// 	std::cout << "Enter index of the contact to display: ";
	// 	std::getline(std::cin, str_input);
	// 	std::stringstream ss_input(str_input);
	// 	if (ss_input >> int_input) {
	// 		if (int_input >= 1 && int_input <= 8)
	// 			printContact(int_input - 1);
	// 	}
	// 	else
	// 		std::cout << RED << WRONG_IDX << CLR_END << std::endl;
	// }
}

void	PhoneBook::printWide10Right(std::string str){
	std::cout << std::setw(10) << std::right;
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else 
		std::cout << str;
}

bool	PhoneBook::printPhonebook() {
	if (contacts[0].getFirstname().empty()) {
		std::cout << RED << EMPTY << CLR_END << std::endl;
		return false;
	}
	else {
		printLine(45, '=');
		std::cout << '|' << "   Index  " << '|' << "First name" << '|'
			<< " Last name" << '|' << " Nickname " << '|' << std::endl;
		printLine(45, '=');
		for (int i = 0; i < 8; i++) {
			std::cout << '|';
			printWide10Right(std::to_string(i + 1));
			std::cout << '|';
			printWide10Right(contacts[i].getFirstname());
			std::cout << '|';
			printWide10Right(contacts[i].getLastname());
			std::cout << '|';
			printWide10Right(contacts[i].getNickname());
			std::cout << '|' << std::endl;
		}
		printLine(45, '=');
		return true;
	}
}

void	PhoneBook::printContact(int index) {
	std::cout << "First name: " << contacts[index].getFirstname() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastname() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}
