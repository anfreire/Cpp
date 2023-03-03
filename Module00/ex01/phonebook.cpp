/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:19:39 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/03 01:12:01 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
using namespace std;
using namespace mylib;

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::add(void)
{
	string 	firstName;
	string 	lastName;
	string 	nickName;
	string	phoneNumberString;
	string 	darkestSecret;
	Contact	newContact;
	while (1)
	{
		cout << endl << "Enter first name: ";
		getline(cin, firstName);
		if (newContact.setterFirstName(firstName))
			break;
		cout << "Invalid first name!" << endl;
	}
	while (1)
	{
		cout << endl << "Enter last name: ";
		getline(cin, lastName);
		if (newContact.setterLastName(lastName))
			break;
		cout << "Invalid last name!" << endl;
	}
	while (1)
	{
		cout << endl << "Enter nickname: ";
		getline(cin, nickName);
		if (newContact.setterNickName(nickName))
			break;
		cout << "Invalid nickname!" << endl;
	}
	while (1)
	{
		cout << endl << "Enter phone number: ";
		getline(cin, phoneNumberString);
		if (newContact.setterPhoneNumber(phoneNumberString))
			break;
		cout << "Invalid phone number!" << endl;
	}
	while (1)
	{
		cout << endl << "Enter darkest secrest: ";
		getline(cin, darkestSecret);
		if (newContact.setterDarkestSecret(darkestSecret))
			break;
		cout << "Invalid darkest secret!" << endl;
	}
	if (this->phoneBookLength == 8)
	{
		for (size_t i = 0; i < 7; i++)
		{
			this->contacts[i] = this->contacts[i + 1];
		}
		this->contacts[7] = newContact;
		cout << endl << "Contact successfully added!" << endl << endl;
		return;
	}
	this->contacts[this->phoneBookLength] = newContact;
	this->phoneBookLength++;
	cout << "Contact successfully added!" << endl << endl;
	return;

}

string	PhoneBook::returnPrintableSearchString(string oldString)
{
	string	smallerNamesBuffer = "          ";
	string	newString;

	if (oldString.length() > 9)
	{
		newString = oldString.substr(0, 9);
		newString.append(".");
	}
	else
	{
		newString = oldString;
		newString.append(smallerNamesBuffer.substr(0, 10 - oldString.length()));
	}
	return ((string)newString);
}

void	PhoneBook::search(void)
{
	string 			FirstName;
	string			LastName;
	string			NickName;

	if (this->phoneBookLength == 0)
	{
		cout << "Phonebook is empty!" << endl << endl;
		return;
	}
	cout << endl << "+-------------------------------------------+" << endl;
	cout << "|   Index  |First Name| Last Name| Nickname |" << endl;
	cout << "+----------+----------+----------+----------+" << endl;
	for (size_t i = 0; (int)i < this->phoneBookLength; i++)
	{
		if (i > 0)
			cout << "+----------+----------+----------+----------+" << endl;
		cout << "|" << this->returnPrintableSearchString(ft_itoa((int)(i + 1)).append(".")) << "|";
		FirstName = this->contacts[(int)i].getterFirstName();
		cout << this->returnPrintableSearchString(FirstName) << "|";
		LastName = this->contacts[(int)i].getterLastName();
		cout << this->returnPrintableSearchString(LastName) << "|";
		NickName = this->contacts[(int)i].getterNickName();
		cout << this->returnPrintableSearchString(NickName) << "|" << endl;
	}
	cout << "+-------------------------------------------+" << endl << endl;
	string	index;
	while (1)
	{
		cout << "Enter the index of the contact you want to see: ";
		getline(cin, index);
		if (checkInput(index) && isNumber(index) && atoi(index.c_str()) <= this->phoneBookLength && atoi(index.c_str()) >= 1)
		{
			cout << endl << "First name: " << this->contacts[atoi(index.c_str()) - 1].getterFirstName() << endl;
			cout << "Last name: " << this->contacts[atoi(index.c_str()) - 1].getterLastName() << endl;
			cout << "Nickname: " << this->contacts[atoi(index.c_str()) - 1].getterNickName() << endl;
			cout << "Phone number: " << this->contacts[atoi(index.c_str()) - 1].getterPhoneNumber() << endl;
			cout << "Darkest Secret: " << this->contacts[atoi(index.c_str()) - 1].getterDarkestSecret() << endl << endl;
			return;
		}
		cout << "Invalid index!" << endl;
	}
	
}

void	PhoneBook::exit(void)
{
	std::exit(0);
}

int	PhoneBook::phoneBookLength = 0;