/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:29:13 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/10 20:50:39 by jgoldste         ###   ########.fr       */
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
#define ERR_MSG "INPUT ERROR: The program accepts ADD, SEARCH and EXIT commands only"

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[BOOK_CAPACITY];
	int		index;
	void	printIntro();
	bool	printPhonebook();
	void	printContact();

public:
	PhoneBook();
	~PhoneBook();

	void	addContact();
	void	searchContact();
};

#endif

