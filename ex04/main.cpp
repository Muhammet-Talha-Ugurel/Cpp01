/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <mugurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 01:30:27 by mugurel           #+#    #+#             */
/*   Updated: 2024/03/23 01:57:00 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av) {
    if (ac != 4){
		std::cout << "./program <fileName> <search> <replace>" << std::endl;
		return (1);
    }
    std::string     s1 = av[2];
    std::string     s2 = av[3];
    std::size_t     found;
    std::ifstream    input;
    std::ofstream    output;
    std::string     buffer;
    std::string     inputFile = av[1];

    input.open(inputFile);
    if (!input.is_open())
        std::cout << "File could not be opened!" << std::endl;
    output.open(inputFile.append(".replace"));
    if(!output.is_open())
        std::cout << "File could not be opened!" << std::endl;
    while (std::getline(input, buffer)) {
        while((found = buffer.find(s1)) != std::string::npos) {
            buffer.erase(found, s1.length());
            buffer.insert(found, s2);
            found += s1.length();
        }
        output << buffer << std::endl;
    }
    output.close();
    input.close();
    return 0;
}