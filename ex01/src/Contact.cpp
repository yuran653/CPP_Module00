/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:51:00 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/18 00:23:15 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

bool	Contact::setAttribute(std::string name, std::string *attribute) {
	std::cout << "Input " << name << ": ";
	std::getline(std::cin, *attribute);
	if (attribute->empty()) 
	//if ((*attribute).empty()) - such syntax is also possible
		return false;
	return true;
}

void	Contact::createContact() {
	while (setAttribute("First name", &first_name) == false)
		std::cout << RED EMPTY_FIELD CLR_END << std::endl;
	while (setAttribute("Last name", &last_name) == false)
		std::cout << RED EMPTY_FIELD CLR_END << std::endl;
	while (setAttribute("Nickname", &nickname) == false)
		std::cout << RED EMPTY_FIELD CLR_END << std::endl;
	while (setAttribute("Phone Number", &phone_number) == false)
		std::cout << RED EMPTY_FIELD CLR_END << std::endl;
	while (setAttribute("Darkest Secret", &darkest_secret) == false)
		std::cout << RED EMPTY_FIELD CLR_END << std::endl;
}

std::string	Contact::getFirstName() {
	return first_name;
}

std::string	Contact::getLastName() {
	return last_name;
}

std::string Contact::getNickname() {
	return nickname;
}

std::string Contact::getPhoneNumber() {
	return phone_number;
}

std::string Contact::getDarkestSecret() {
	return darkest_secret;
}

// std::string	&Contact::getFirstName() {
// 	return first_name;
// }

// std::string	&Contact::getLastName() {
// 	return last_name;
// }

// std::string &Contact::getNickname() {
// 	return nickname;
// }

// std::string &Contact::getPhoneNumber() {
// 	return phone_number;
// }

// std::string &Contact::getDarkestSecret() {
// 	return darkest_secret;
// }
