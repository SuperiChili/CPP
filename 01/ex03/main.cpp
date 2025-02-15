/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:51:54 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/20 21:05:57 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main() 
{
    // Weapon weapon("Kalashnikov");

    // HumanA humanA("John", weapon);
    // HumanB humanB("Bob");

    // humanA.attack();
    // humanB.attack();
    
    // weapon.setType("AK-47");
    // humanB.setWeapon(weapon);
    // humanB.attack();
  {
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}

    return 0;
}