/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:17:46 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/05 22:15:09 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
	for (int s = 0; argv[s]; s++)
		std::cout << argv[s] << std::endl;
	std::cout << std::endl << "================" << std::endl << std::endl;
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
			for (int j = 0; argv[i][j]; j++)
			{
				if(std::isalpha(argv[i][j]))
					std::cout << static_cast<const char>(std::toupper(argv[i][j]));
				else
					std::cout << argv[i][j];
			}
		std::cout << std::endl;
	}
	return 0;
}