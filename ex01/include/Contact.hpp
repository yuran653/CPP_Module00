/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:59:55 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/11 21:41:49 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;

	public:
		Contact();
		~Contact();

		// Contact	&createContact();

		void		createContact();
		std::string	&getFirstname();
		std::string	&getLastname();
		std::string	&getNickname();
		std::string	&getPhoneNumber();
		std::string	&getDarkestSecret();
};

#endif