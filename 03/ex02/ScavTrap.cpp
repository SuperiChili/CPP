/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:12:51 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/09 16:33:29 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    if (CONSTR_DESTR)
        std::cout << "The ROBOT " << name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    if (DEBUG)
        std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    if (DEBUG)
        std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
        std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode!" << std::endl;
}
ScavTrap::~ScavTrap()
{
    if (CONSTR_DESTR)
        std::cout << "The ROBOT " << this->getName() << " is destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    // if (this->getHitPoints())
    //     std::cout << "OK" << std::endl;
    if (getHitPoints() == 0 || getEnergyPoints() == 0)
    {
        std::cout << "The ROBOT " << getName() << " is out of energy!" << std::endl;
    }
    else
    {
        setEnergyPoints(1);
        std::cout << "The ROBOT " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    }
}


