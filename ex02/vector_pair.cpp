/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pair.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:26:46 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/17 21:15:14 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

typedef std::vector<int> IntVector;
typedef std::vector<double> DoubleVector;
typedef std::pair<IntVector::iterator, DoubleVector::iterator> IntDoublePair;

int main() {
    IntVector intVec;
    DoubleVector doubleVec;

    for (int i = 1; i <= 5; i++) {
        intVec.push_back(i);
        doubleVec.push_back(i * 1.1);
    }

    IntDoublePair pair(intVec.begin(), doubleVec.begin());

    for (int i = 0; i < 5; i++) {
        std::cout << "Value of intVec at index[" << i + 1 << "] = "
			<< *(pair.first + i) << std::endl;
		std::cout << "Value of doubleVec at index[" << i + 1 << "] = "
			<< *(pair.second + i) << std::endl;
    }

	int j = 2;
	std::cout << "Value of intVec at index[" << j + 1 << "] = "
		<< *(pair.first + j) << std::endl;
	std::cout << "Value of doubleVec at index[" << j + 1 << "] = "
		<< *(pair.second + j) << std::endl;

    return 0;
}
