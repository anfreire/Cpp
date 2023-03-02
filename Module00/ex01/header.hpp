/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:19:50 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/02 18:59:55 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <iomanip>

using namespace std;

namespace global
{
	bool	checkInput(string input);
	string	ft_itoa(int nbr);
	string	lowerCase(string str);
	bool	isNumber(string str);
}


string	ft_itoa(int nbr);



class Contact
{

	public:

		Contact(void);
		~Contact(void);
		string 	getterFirstName(void);
		string 	getterLastName(void);
		string	getterNickName(void);
		bool	setterFirstName(string firstName);
		bool	setterLastName(string lastName);
		bool	setterNickName(string nickName);
		bool	setterPhoneNumber(string phoneNumber);
		bool	setterDarkestSecret(string darkestSecret);
		unsigned int 	getterPhoneNumber(void);
		void			emptyContact(void);
		string 	getterDarkestSecret(void);


	private:

		string 	firstName;
		string 	lastName;
		string	nickName;
		unsigned int 	phoneNumber;
		string 	darkestSecret;

};


class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);
		void	exit(void);

	private:
		Contact			contacts[8];
		string			returnPrintableSearchString(string oldString);
		static int		phoneBookLength;
};

#endif