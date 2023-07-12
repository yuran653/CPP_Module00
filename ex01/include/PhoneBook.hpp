/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:29:13 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/12 15:03:45 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define BOOK_CAPACITY 8

#define RED "\033[31m"
#define ORANGE "\033[38;5;208m"
#define YELLOW "\033[33m"
#define D_YELLOW "\033[38;5;202m"
#define L_GREEN "\033[92m"
#define GREEN "\033[32m"
#define L_BLUE "\033[94m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define CLR_END "\033[0m"
#define EMPTY "THE PHONEBOOK IS EMPTY"
#define WRONG_IDX "INPUT ERROR: Index should be integer in range from 1 to 8"
#define ERR_MSG "INPUT ERROR: The program accepts ADD, SEARCH and EXIT commands only"
#define ATTR_ERROR "ERROR: Invalid Attribute"

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[BOOK_CAPACITY];
	int		index;
	void	printIntro();
	bool	printPhonebook();
	bool	inputContactIndex(int *int_input);
	void	clearInput();
	void	printWide10Right(const std::string &str);
	void	printContact(int index);
	void	printLine(int len, char symbol);

public:
	PhoneBook();
	~PhoneBook();

	void	addContact();
	void	searchContact();
};

#endif
