/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:51:00 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/12 14:47:50 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void	Contact::createContact() {
	std::cout << "Input First Name: ";
	std::getline(std::cin, first_name);
	
	std::cout << "Input Last Name: ";
	std::getline(std::cin, last_name);
	
	std::cout << "Input Nickname: ";
	std::getline(std::cin, nickname);
	
	std::cout << "Input Phone Number: ";
	std::getline(std::cin, phone_number);
	
	std::cout << "Input Derkest Secret: ";
	std::getline(std::cin, darkest_secret);
}

std::string &Contact::getAttribute(const std::string &attribute) {
	if (attribute == "first_name")
		return first_name;
	else if (attribute == "last_name")
		return last_name;
	else if (attribute == "nickname")
		return nickname;
	else if (attribute == "phone_number")
		return phone_number;
	else if (attribute == "darkest_secret")
		return darkest_secret;
	else{
		std::cout << RED << ATTR_ERROR << CLR_END << std::endl;
		static std::string empty;
		return empty;
	}	
}
