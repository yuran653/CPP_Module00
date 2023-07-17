/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:11:25 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/16 00:26:39 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

void	PhoneBook::printWide10Right(const std::string &str){
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::right << str;
}

void	PhoneBook::clearInput() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
