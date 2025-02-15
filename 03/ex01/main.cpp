/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:37:50 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/09 16:37:53 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <limits>

int main()
{
    ScavTrap rob("rob1");

    //rob.attack("BOB");
    //testare copy and = operator
    ScavTrap rob2(rob);
    std::cout << rob2.getName() << std::endl;
    std::cout << rob2.getAttackDamage() << std::endl;
    std::cout << rob2.getEnergyPoints() << std::endl;
    std::cout << rob2.getHitPoints() << std::endl;
    rob2.guardGate();
    // rob2.
    // ClapTrap *x = new ScavTrap("2");
    // x->attack("BOB");
    
    return (0);
}