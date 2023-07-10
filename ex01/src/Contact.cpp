/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:51:00 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/10 20:00:45 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	Contact::createContact() {
	std::cout << "Input First Name: ";
	std::getline(std::cin, first_name);

	std::cout << "Input Last Name: ";
	std::getline(std::cin, last_name);

	std::cout << "Input Nickname: ";
	std::getline(std::cin, nickname);

	std::cout << "Input Phone Number: ";
	std::getline(std::cin, phone);

	std::cout << "Input Derkest Secret: ";
	std::getline(std::cin, darkest_secret);
}

std::string	&Contact::getFirstname() {
	return first_name;
}

std::string	&Contact::getLastname() {
	return last_name;
}

std::string	&Contact::getNickname() {
	return nickname;
}

std::string	&Contact::getPhoneNumber() {
	return phone;
}

std::string	&Contact::getDarkestSecret() {
	return darkest_secret;
}

// Contact	&Contact::createContact() {
// 	std::cout << "Input First Name: ";
// 	std::getline(std::cin, first_name);

// 	std::cout << "Input Last Name: ";
// 	std::getline(std::cin, last_name);

// 	std::cout << "Input Nickname: ";
// 	std::getline(std::cin, nickname);

// 	std::cout << "Input Phone Number: ";
// 	std::getline(std::cin, phone);

// 	std::cout << "Input Derkest Secret: ";
// 	std::getline(std::cin, darkest_secret);

// 	return *this;
// }
