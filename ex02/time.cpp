/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:58:33 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/12 18:06:41 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	time_t now = time(NULL);

	tm *ltm = localtime(&now);
	std::cout << '[';
	std::cout << 1900 + ltm->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << std::right << 1 + ltm->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << std::right << ltm->tm_mday;
	std::cout << '_';
	std::cout << std::setw(2) << std::setfill('0') << std::right << ltm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << std::right << ltm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << std::right << ltm->tm_sec;
	std::cout << ']' << std::endl;
}
