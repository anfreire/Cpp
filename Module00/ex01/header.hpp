/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:19:50 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/04 17:11:17 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include "mylib.hpp"

class Contact
{

	public:

		Contact(void);
		~Contact(void);
		std::string 	getterFirstName(void);
		std::string 	getterLastName(void);
		std::string		getterNickName(void);
		bool			setterFirstName(std::string firstName);
		bool			setterLastName(std::string lastName);
		bool			setterNickName(std::string nickName);
		bool			setterPhoneNumber(std::string phoneNumber);
		bool			setterDarkestSecret(std::string darkestSecret);
		unsigned int 	getterPhoneNumber(void);
		void			emptyContact(void);
		std::string 	getterDarkestSecret(void);


	private:

		std::string 	firstName;
		std::string 	lastName;
		std::string		nickName;
		unsigned int 	phoneNumber;
		std::string 	darkestSecret;

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
		std::string		returnPrintableSearchString(std::string oldString);
		static int		phoneBookLength;
};

#endif