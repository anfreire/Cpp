/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:21:37 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/05 13:32:26 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde = zombieHorde(4 , "foo");
	
	for (int i = 0; i < 4; i++)
	{
		Zombie tmp = horde[i];
		tmp.announce();
	}

	delete[] horde;
	
	return (0);
}