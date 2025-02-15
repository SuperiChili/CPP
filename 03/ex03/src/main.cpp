/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:37:50 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/10 20:22:42 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap diamond2("Diamond1");
    //DiamondTrap diamond2 = diamond1;
    
    //diamond2.setName("OTHER");
    diamond2.whoAmI();
    std::cout << diamond2.getName() << std::endl;
    std::cout << diamond2.getHitPoints() << std::endl;
    std::cout << diamond2.getEnergyPoints() << std::endl;
    std::cout << diamond2.getAttackDamage() << std::endl;
    //diamond2.highFivesGuys();
    return (0);
}