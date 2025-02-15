/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:05:44 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/23 21:49:22 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr)
{
    std::cout << "HumanB " << name << " created wth weapon NULL." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) 
{
    this->weapon = &weapon;
    std::cout << name << " has picked up a " << weapon.getType() << std::endl;
}

void HumanB::attack(void) const 
{
    if (weapon) 
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
    else 
    {
        std::cout << name << " has no weapon to attack with" << std::endl;
    }
}