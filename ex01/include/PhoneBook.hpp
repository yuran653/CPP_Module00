/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:29:13 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/18 02:05:56 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define BOOK_CAPACITY 8

#define EMPTY_BOOK "THE PHONEBOOK IS EMPTY"
#define WRONG_IDX "INPUT ERROR: Index should be integer in range from 1 to 8"
#define ERR_MSG "INPUT ERROR: The program accepts ADD, SEARCH and EXIT commands only"
#define ATTR_ERROR "ERROR: Invalid Attribute"

#include <iomanip>
#include <limits>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[BOOK_CAPACITY];
	bool	is_empty;
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
