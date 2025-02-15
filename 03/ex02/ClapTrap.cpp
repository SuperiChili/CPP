/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:38:23 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/06 20:00:33 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <limits>
//--When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
//However, since these exercises serve as an introduction, the ClapTrap
// instances should not interact directly with one another, and the parameters will not refer
// to another instance of ClapTrap.

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    if (CONSTR_DESTR)
        std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    if (DEBUG)
        std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &other)
{
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    if (DEBUG)
        std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
    }
    else
    {
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount >= std::numeric_limits<unsigned int>::max() - _hitPoints)
    {
        _hitPoints = std::numeric_limits<unsigned int>::max();
    }
    else
    {
        _hitPoints += amount;
    }
    std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
    }
    else
    {
        if (amount >= _hitPoints)
        {
            _hitPoints = 0;
        }
        else
            _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    if (CONSTR_DESTR)
        std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

std::string ClapTrap::getName()
{
    return _name;
}

unsigned int ClapTrap::getHitPoints()
{
    return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints()
{
    return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage()
{
    return _attackDamage;
}

void ClapTrap::setEnergyPoints(unsigned int val)
{
    this->_energyPoints += val;
}
