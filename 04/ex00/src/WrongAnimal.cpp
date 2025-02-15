/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:00:55 by rpaic             #+#    #+#             */
/*   Updated: 2025/02/13 20:11:10 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "General Wrong Animal";
    std::cout << "-- default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    this->_type = src._type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    this->_type = src._type;
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "No 😶 sound. I'm a wrong animal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

