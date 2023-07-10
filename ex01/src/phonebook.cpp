/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:40:38 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/10 21:42:42 by jgoldste         ###   ########.fr       */
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

static void	printLine(int len, char symbol) {
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
	std::cout << "| ***uppercase and lowercase make a difference*** |" << std::endl;
}

void	PhoneBook::addContact() {
	contacts[index].createContact();
	index ++;
	if (index == 8)
		index = 0;
}

// void	PhoneBook::searchContact(){
// 	int input;

// 	if (printPhonebook())

	

// }



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

		
		return true;
	}
}

void	PhoneBook::printContact() {

}

// std::cout << "Formatted string: " << std::setw(10) << std::right;
//     if (text.length() > 10) {
//         std::cout << text.substr(0, 9) << ".";
//     } else {
//         std::cout << text;
//     }