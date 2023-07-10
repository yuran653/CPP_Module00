/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:16:50 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/10 19:48:50 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main() {
	PhoneBook	phone_book;
	std::string	input;

	for (;;) {
		std::cout << "INPUT THE COMMAND: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phone_book.addContact();
		else if (input == "SEARCH")
			phone_book.searchContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << RED << ERR_MSG << CLR_END << std::endl; 
}

	// std::string cmd;

	// std::cout << std::endl
	// 	<< std::setw(39) << std::right << "PHONEBOOK" << std::endl
	// 	<< std::endl
	// 	<< std::setw(6) << std::right << "ADD"
	// 	<< " - adds and saves a new contact" << std::endl
	// 	<< std::setw(6) << std::right << "SEARCH"
	// 	<< " - searchs and display a specific contact" << std::endl
	// 	<< std::setw(6) << std::right << "EXIT"
	// 	<< " - quits the program, all the contacts will be lost forever!" << std::endl
	// 	<< std::endl;
	// std::cout << "INPUT THE COMMAND: ";
	// std::cin >> cmd;
	return 0;
}