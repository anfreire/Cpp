/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:06:46 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/03 01:42:05 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.hpp"

using namespace std;

bool	mylib::checkInput(string input)
{
	if (input.length() < 1)
		return false;
	if (input.length() == 1 && input[0] == '\n')
		return false;
	size_t	allSpaces = 0;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
			allSpaces++;
	}
	if (allSpaces == input.length())
		return false;
	return true;
}

string	mylib::ft_itoa(int nbr)
{
	string	newString;

	if (nbr < 0)
	{
		newString = "-";
		nbr *= -1;
	}
	if (nbr >= 10)
		newString += ft_itoa(nbr / 10);
	newString += (nbr % 10) + '0';
	return newString;
}

string	mylib::lowerCase(string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return str;
}

bool	mylib::isNumber(string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
	}
	return true;
}