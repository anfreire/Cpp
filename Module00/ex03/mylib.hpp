/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:01:27 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/03 01:37:00 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_HPP
# define MYLIB_HPP

# include <iostream>
# include <string>
# include <cstdio>

using namespace std;

namespace mylib
{
	bool	checkInput(std::string input);
	string	ft_itoa(int nbr);
	string	lowerCase(std::string str);
	bool	isNumber(std::string str);
}

#endif