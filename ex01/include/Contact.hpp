/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:59:55 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/18 00:22:52 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#define RED "\033[31m"
#define CLR_END "\033[0m"
#define EMPTY_FIELD "INPUT ERROR: The field can't be empty"

#include <iostream>
#include <string>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

		bool		setAttribute(std::string name, std::string *attribute);

	public:
		Contact();
		~Contact();

		void		createContact();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		// std::string &getFirstName();
		// std::string &getLastName();
		// std::string &getNickname();
		// std::string &getPhoneNumber();
		// std::string &getDarkestSecret();
};

#endif
