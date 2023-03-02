/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:19:45 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/02 18:28:07 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

using namespace std;

void	Contact::emptyContact(void)
{
	this->firstName.clear();
	this->lastName.clear();
	this->phoneNumber = 0;
	this->darkestSecret.clear();

	return;
}

Contact::Contact(void)
{
	this->emptyContact();

	return;
}

Contact::~Contact(void)
{
	this->emptyContact();

	return;
}

string	Contact::getterFirstName(void)
{
	return this->firstName;
}

string	Contact::getterLastName(void)
{
	return this->lastName;
}

string	Contact::getterNickName(void)
{
	return this->nickName;
}

unsigned int Contact::getterPhoneNumber(void)
{
	return this->phoneNumber;
}

string Contact::getterDarkestSecret(void)
{
	return this->darkestSecret;
}

bool	Contact::setterFirstName(string firstName)
{
	if (!global::checkInput(firstName))
		return false;
	this->firstName = firstName;
	return true;
}

bool	Contact::setterLastName(string lastName)
{
	if (!global::checkInput(lastName))
		return false;
	this->lastName = lastName;
	return true;
}

bool	Contact::setterNickName(string nickName)
{
	if (!global::checkInput(nickName))
		return false;
	this->nickName = nickName;
	return true;
}

bool	Contact::setterPhoneNumber(string phoneNumber)
{
	if (!global::checkInput(phoneNumber) || !isdigit(phoneNumber[0]))
		return false;
	this->phoneNumber = atoi(phoneNumber.c_str());
	return true;
}

bool	Contact::setterDarkestSecret(string darkestSecret)
{
	if (!global::checkInput(darkestSecret))
		return false;
	this->darkestSecret = darkestSecret;
	return true;
}
