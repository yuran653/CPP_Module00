/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:16:50 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/12 14:51:41 by jgoldste         ###   ########.fr       */
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
	return 0;
}
