/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:41:38 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/10 19:37:24 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("FragTrap")
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    if (CONSTR_DESTR) 
        std::cout << "Third " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap (const std::string name): ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    if (CONSTR_DESTR) 
        std::cout << "Third " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other._name)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    if (DEBUG)
        std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    if (DEBUG)
        std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High 5 Guys" << std::endl;
}

FragTrap::~FragTrap(void)
{
    if (CONSTR_DESTR)
        std::cout << "Third " << getName() << " is destroyed!" << std::endl;
}
