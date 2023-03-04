/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:01:35 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/04 17:15:09 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


int main(void)
{
	PhoneBook	phoneBook;
	std::string		command;

	while (1)
	{
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "+      AWESOME     PHONEBOOK      MENU      +" << std::endl;
		std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "| Commands:|    ADD   |  SEARCH  |   EXIT   |" << std::endl;
		std::cout << "+-------------------------------------------+" << std::endl << std::endl;
		std::cout << "Enter a command: ";
		getline(std::cin, command);
		if (mylib::lowerCase(command) == "add")
			phoneBook.add();
		else if (mylib::lowerCase(command) == "search")
			phoneBook.search();
		else if (mylib::lowerCase(command) == "exit")
			phoneBook.exit();
		else
			std::cout << "Invalid command!" << std::endl << std::endl;
	}
	return 0;
}