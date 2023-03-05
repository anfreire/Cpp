/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:24:52 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/05 21:18:27 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string  type)
{
    this->type = type;
}

Weapon::~Weapon(void)
{
    std::cout << this->type << " is dropped" << std::endl;
    return;
}

std::string Weapon::getType(void)
{   
    return this->type;
}

void    Weapon::setType(std::string  type)
{
    this->type = type;
}