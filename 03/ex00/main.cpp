/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:37:50 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/06 16:59:01 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <limits>

int main()
{
    ClapTrap claptrap("Claptrap");
    ClapTrap claptrap2("Claptrap2");

    // claptrap.attack(claptrap2.getName());
    std::cout << claptrap2.getHitPoints() << std::endl; 
    claptrap2.takeDamage(12);
    std:: cout << claptrap2.getHitPoints() << std::endl;
    // std::cout << claptrap2.getHitPoints() << std::endl;
    // claptrap2.beRepaired(4294967286);
    // std::cout << claptrap2.getHitPoints() << std::endl;
    //std::cout << std::numeric_limits<unsigned int>::max() << std::endl;
    return (0);
}