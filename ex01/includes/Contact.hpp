/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:59:55 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/09 20:54:35 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	private:
		std::string	name;
		// std::string	last_name;
		// std::string	nickname;
		// std::string	darkest_secret;
		// int			phone;
		// int			idx;
	public:
		void inputContact() {
			std::cout << "Input name: ";
			std::getline(std::cin, name);
		}
		void printContact() {
			std::cout << "Name: " << std::setw(10) << std::right;
			if (name.length() > 10)
				std::cout << name.substr(0, 9) << ".";
			else
				std::cout << name;
			std::cout << std::endl;
	}
};

// class Contact
// {
// 	private:
// 		first name, last name, nickname, phone number, and darkest secret
// }

#endif