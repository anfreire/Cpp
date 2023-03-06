/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:20:26 by anfreire          #+#    #+#             */
/*   Updated: 2023/03/06 03:29:08 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::cout << "---------------" << std::endl;
    std::cout << "-----DEBUG-----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("DEBUG");
    std::cout << "---------------" << std::endl;
    std::cout << "-----debug-----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("debug");
    std::cout << "---------------" << std::endl;
    std::cout << "-----Debug-----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("Debug");
    std::cout << "---------------" << std::endl;
    std::cout << "-----INFO------" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("INFO");
    std::cout << "---------------" << std::endl;
    std::cout << "-----info------" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("info");
    std::cout << "---------------" << std::endl;
    std::cout << "-----Info------" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("Info");
    std::cout << "---------------" << std::endl;
    std::cout << "----WARNING----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("WARNING");
    std::cout << "---------------" << std::endl;
    std::cout << "----warning----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("warning");
    std::cout << "---------------" << std::endl;
    std::cout << "----Warning----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("Warning");
    std::cout << "---------------" << std::endl;
    std::cout << "-----ERROR-----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("ERROR");
    std::cout << "---------------" << std::endl;
    std::cout << "-----error-----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("error");
    std::cout << "---------------" << std::endl;
    std::cout << "-----Error-----" << std::endl;
    std::cout << "---------------" << std::endl;
    harl.complain("Error");
    return 0;
}