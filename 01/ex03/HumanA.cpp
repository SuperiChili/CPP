/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:05:14 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/20 20:50:18 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &thename, Weapon &theweapon) : name(thename), weapon(theweapon)
{
    std::cout << "HumanA " << name << " created with weapon " << weapon.getType() << std::endl;
}

void HumanA::attack() const 
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}