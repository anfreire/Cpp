/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:01:35 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/03 01:11:25 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


int main(void)
{
	PhoneBook	phoneBook;
	string		command;

	while (1)
	{
		cout << "+-------------------------------------------+" << endl;
		cout << "+      AWESOME     PHONEBOOK      MENU      +" << endl;
		cout << "+-------------------------------------------+" << endl;
		cout << "| Commands:|    ADD   |  SEARCH  |   EXIT   |" << endl;
		cout << "+-------------------------------------------+" << endl << endl;
		cout << "Enter a command: ";
		getline(cin, command);
		if (lowerCase(command) == "add")
			phoneBook.add();
		else if (lowerCase(command) == "search")
			phoneBook.search();
		else if (lowerCase(command) == "exit")
			phoneBook.exit();
		else
			cout << "Invalid command!" << endl << endl;
	}
	return 0;
}