/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:51:55 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/05 21:12:18 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{

	public:
        Weapon(std::string  type);
        ~Weapon(void);
		std::string	getType(void);
		void		setType(std::string type);		

	private:
		std::string	type;
		
};


#endif