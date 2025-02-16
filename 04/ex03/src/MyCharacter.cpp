/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyCharacter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:46:52 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/16 22:12:16 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MyCharacter.hpp"

MyCharacter::MyCharacter() : _name("Adam")
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        this->_inventory[i] = NULL;
    }
    if (CHAR_DEBUG)
        std::cout << "MyCharacter default constructor called" << std::endl;
}

MyCharacter::MyCharacter(std::string const &name) : _name(name)
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        this->_inventory[i] = NULL;
    }
    if (CHAR_DEBUG)
        std::cout << "MyCharacter constructor called" << std::endl;
}

MyCharacter::MyCharacter(const MyCharacter &src)
{
    *this = src;
    if (CHAR_INFO)
        std::cout << "MyCharacter copy constructor called" << std::endl;
}

MyCharacter &MyCharacter::operator=(const MyCharacter &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        for (int i = 0; i < INVENTORY_SIZE; i++)
        {
            if (this->_inventory[i])
            {
                delete this->_inventory[i]
            }
            this->_inventory[i] = NULL;
        }
        for (int i = 0; i < INVENTORY_SIZE; i++)
        {
            if (src._inventory[i])
                this->_inventory[i] = src._inventory[i]; // deep copy? need to clone?
        }
    }
    if (CHAR_INFO)
        std::cout << "MyCharacter =assignation operator called" << std::endl;
    return (*this);
}

std::string const &MyCharacter::getName() const
{
    return (this->_name);
}

void MyCharacter::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return;
        }
    }
}

void MyCharacter::unequip(int idx)
{
    if (idx < 0 || idx >= INVENTORY_SIZE || !this->_inventory[idx])
        return;
    this->_inventory[idx] = NULL;
}

void MyCharacte::MyCharacter use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= INVENTORY_SIZE || !this->_inventory[idx])
        return ;
    this->_inventory[idx].use(target); //?  RIMASTO QUI
    //                ice.use(target)
}

MyCharacter::~MyCharacter()
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    if (CHAR_DEBUG)
        std::cout << "MyCharacter destructor called" << std::endl;
}

