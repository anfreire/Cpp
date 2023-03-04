/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:47:03 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/04 17:13:06 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (size_t j = 0; j < std::strlen(av[i]); j++)
			{
				if (av[i][j] >= 97 && av[i][j] <= 122)
					av[i][j] -= 32;
			}
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	return 0;
}