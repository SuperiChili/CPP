/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:41:21 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/10 20:20:46 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("DiamondTrap")
{
    this->_hitPoints = FragTrap::getHitPoints();
    this->_energyPoints = ScavTrap::getEnergyPoints();
    this->_attackDamage = FragTrap::getAttackDamage();
    // std::cout << "->ClapTrap " << ClapTrap.getName() << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string str): ClapTrap(str + "_clap_name")
{
    this->_name = str;
    this->_hitPoints = FragTrap::getHitPoints();
    this->_energyPoints = ScavTrap::getOriginalEnergyPoints();
    this->_attackDamage = FragTrap::getAttackDamage();
    // std::cout << "->Diamond " << this->getName() << " created." << std::endl;
    // std::cout << "->dimanod hitPoints" << this->_hitPoints << std::endl;
    // std::cout << "->dimanod energyPoints" << this->_energyPoints << std::endl;
    // std::cout << "->dimanod attackDamage" << this->_attackDamage << std::endl;
    // std::cout << "->ClapTrap " << ClapTrap.getName() << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other._name + "_clap_name")
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    if (DEBUG)
        std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_originalEnergyPoints = other._originalEnergyPoints;
    this->_attackDamage = other._attackDamage;
    if (DEBUG)
        std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    if (CONSTR_DESTR)
        std::cout << "DiamondTrap " << this->_name << " is destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond =  " << this->_name << std::endl;
    std::cout << "ScavTrap = " << ScavTrap::_name << std::endl;
}
