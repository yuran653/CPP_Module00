/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:17:46 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/17 16:33:48 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; argv[i]; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << static_cast<const char>(std::toupper(argv[i][j]));
			std::cout << std::endl;
	return 0;
}

// The 'static_cast' keyword is used to cast the value of the character to a <const char>
// This ensures that the character is printed as a single character, rather than as an integer
// The static_cast keyword is a compile-time cast, which means that the compiler
// will check that the cast is valid before the code is executed, this is important because
// 'the std::toupper()' function modifies the value of the character, if the character was not
// constant, then the std::toupper() function would modify the value of the variable,
// which could potentially corrupt the data.
