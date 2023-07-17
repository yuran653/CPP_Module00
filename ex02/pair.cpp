/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:14:46 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/17 23:47:27 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <vector>

int main() {
    
    // Declare empty vectors to store int and double values
    std::vector<int> intVec(5);  
    std::vector<double> dblVec(5);
    
    // Initialize vectors with default values
    // for(int i=0; i<5; i++) {
    //     intVec[i] = 0;
    //     dblVec[i] = 0.0;
    // }
    
    // Create a pair of iterators to simultaneously traverse the two vectors
    std::pair<std::vector<int>::iterator, std::vector<double>::iterator>
        pairVec(intVec.begin(), dblVec.begin());
        
    // Populate the vectors with values using the pair iterators
    for (int i = 1; i <= 5; ++i) { 
        *(pairVec.first + i - 1) = i;   
        *(pairVec.second + i - 1) = i * 1.111;
    }
    
    // Print the vector elements using the pair iterators
    for (; pairVec.first != intVec.end() && pairVec.second != dblVec.end();
           ++pairVec.first, ++pairVec.second) {
            
        std::cout << "		 First element: " << *pairVec.first << std::endl;
        std::cout << "		Second element: " << *pairVec.second << std::endl;
    }
    
    return 0;
}

// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> intVec;
//     std::vector<double> dblVec;

//     // Populating the vectors with values
//     for (int i = 1; i <= 5; ++i) {
//         intVec.push_back(i);
//         dblVec.push_back(i * 1.1);
//     }

//     // Create the pair of iterators after populating the vectors
//     std::pair<std::vector<int>::iterator, std::vector<double>::iterator>
//         pairVec(intVec.begin(), dblVec.begin());

//     // Accessing and printing the elements of the vectors using the pair of iterators
//     for (; pairVec.first != intVec.end() && pairVec.second != dblVec.end();
// 		++pairVec.first, ++pairVec.second) {
//         	std::cout << "First element: " << *(pairVec.first) << std::endl;
//         	std::cout << "Second element: " << *(pairVec.second) << std::endl;
//     }

//     return 0;
// }
